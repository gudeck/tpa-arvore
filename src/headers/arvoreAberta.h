//
// Created by guzuc on 21/09/2019.
//

#ifndef TPA_ARVORE_ARVOREABERTA_H
#define TPA_ARVORE_ARVOREABERTA_H

#include "cliente.h"

typedef struct {
    int tamanho;
    Cliente **raiz;
} ArvoreAberta;

ArvoreAberta *criarArvoreAberta();

void inserirAberto(ArvoreAberta *arvore, Cliente *cliente, int indice);

#endif //TPA_ARVORE_ARVOREABERTA_H
