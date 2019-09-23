//
// Created by guzuc on 21/09/2019.
//

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "headers/arvoreAberta.h"

ArvoreAberta *criarArvoreAberta() {
    ArvoreAberta *novaArvore = (ArvoreAberta *) calloc(1, sizeof(ArvoreAberta));
    novaArvore->raiz = (Cliente **) calloc(1, sizeof(Cliente *));
    novaArvore->tamanho = 1;
    return novaArvore;
}

ArvoreAberta *preencherArvoreAberta(FILE *arquivo) {
    rewind(arquivo);

    ArvoreAberta *arvoreAberta = criarArvoreAberta();
    Cliente *novoCliente;
    char *codigo;
    char *nome;
    char *saldo;
    char linha[99];

    while (fgets(linha, 99, arquivo)) {
        codigo = strtok(linha, "|");
        nome = strtok(NULL, "|");
        saldo = strtok(NULL, "\0");
        novoCliente = criarCliente(codigo, nome, saldo);
        inserirAberto(arvoreAberta, novoCliente, 0);
    }
    return arvoreAberta;
}

void inserirAberto(ArvoreAberta *arvore, Cliente *cliente, int indice) {
    if (indice > (arvore->tamanho - 1)) {
        Cliente **novaRaiz = (Cliente **) calloc((size_t) (indice + 1), sizeof(Cliente *));
        for (int i = 0; i < arvore->tamanho; ++i)
            novaRaiz[i] = arvore->raiz[i];
        arvore->raiz = novaRaiz;
        arvore->tamanho = indice + 1;
    }
    if (!arvore->raiz[indice]) {
        arvore->raiz[indice] = cliente;
        return;
    } else if (arvore->raiz[indice]->codigo <= cliente->codigo)
        inserirAberto(arvore, cliente, 2 * indice + 1);
    else
        inserirAberto(arvore, cliente, 2 * indice + 2);
}