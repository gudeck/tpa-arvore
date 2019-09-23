//
// Created by guzuc on 21/09/2019.
//

#include <string.h>
#include "headers/arvore.h"
#include "headers/arvoreFechada.h"
#include "headers/arvoreAberta.h"

bool espelhoSimilar(ArvoreAberta *arvoreAberta, ArvoreFechada *arvoreFechada) {
    return 0;
}

void *preencherArvore(FILE *arquivo, ArvoreAberta *arvoreAberta, ArvoreFechada *arvoreFechada) {
    rewind(arquivo);

    Cliente *novoCliente;
    char *codigo;
    char *nome;
    char *saldo;
    char linha[99];

    while (fgets(linha, 99, arquivo) != NULL) {
        codigo = strtok(linha, "|");
        nome = strtok(NULL, "|");
        saldo = strtok(NULL, "\0");
        novoCliente = criarCliente(codigo, nome, saldo);
        inserirAberto(arvoreAberta, novoCliente, 0);
        inserirFechado(arvoreFechada->raiz, novoCliente, 0);
    }
    arvoreFechada->altura = contarAltura(*(arvoreFechada->raiz));
    return arvoreFechada;
}