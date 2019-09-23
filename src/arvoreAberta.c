//
// Created by guzuc on 21/09/2019.
//

#include <stdlib.h>
#include "headers/arvoreAberta.h"

ArvoreAberta *criarArvoreAberta() {
    ArvoreAberta *novaArvore = (ArvoreAberta *) calloc(1, sizeof(ArvoreAberta));
    novaArvore->raiz = (Cliente **) calloc(1, sizeof(Cliente *));
    novaArvore->tamanho = 1;
    return novaArvore;
}

void inserirAberto(ArvoreAberta *arvore, Cliente *cliente, int indice) {
    if (indice > (arvore->tamanho - 1)) {
        Cliente **novaRaiz = (Cliente **) calloc(indice + 1, sizeof(Cliente *));
        for (int i = 0; i < arvore->tamanho; ++i)
            novaRaiz[i] = arvore->raiz[i];
        arvore->raiz = novaRaiz;
        arvore->tamanho = indice + 1;
    }
    if (!arvore->raiz[indice]) {
        arvore->raiz[indice] = cliente;
        return;
    } else if (arvore->raiz[indice]->codigo <= cliente->codigo)
        inserirAberto(arvore, cliente, indice + 2);
    else
        inserirAberto(arvore, cliente, indice + 1);
}