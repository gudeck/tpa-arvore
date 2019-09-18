//
// Created by 2017122760013 on 17/09/2019.
//

#include "headers/arvore.h"
#include <string.h>
#include <stdlib.h>

void inserir(ItemCliente **raiz, Cliente *cliente) {
    if ((*raiz) == NULL) {
        (*raiz) = criarRegistro(cliente);
        return;
    }

    if ((*raiz)->cliente->codigo > cliente->codigo) {
        if ((*raiz)->menor == NULL) {
            (*raiz)->menor = criarRegistro(cliente);
        } else {
            inserir(&(*raiz)->menor, cliente);
        }
    } else {
        if ((*raiz)->maior == NULL) {
            (*raiz)->maior = criarRegistro(cliente);
        } else {
            inserir(&(*raiz)->maior, cliente);
        }
    }
}

ArvoreClientes *preencherArvore(FILE *arquivo) {
    rewind(arquivo);

    ArvoreClientes *arvore = criarArvore();
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
        inserir(arvore->raiz, novoCliente);
    }
    return arvore;
}

ArvoreClientes *criarArvore() {
    ArvoreClientes *novaArvore = (ArvoreClientes *) calloc(1, sizeof(ArvoreClientes));
    novaArvore->raiz = (ItemCliente **) calloc(1, sizeof(ItemCliente *));
    return novaArvore;
}
