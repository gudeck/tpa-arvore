//
// Created by guzuc on 21/09/2019.
//

#ifndef TPA_ARVORE_ARVOREABERTA_H
#define TPA_ARVORE_ARVOREABERTA_H

#include <stdio.h>
#include "cliente.h"

typedef struct {
    size_t tamanho;
    Cliente **raiz;
} ArvoreAberta;

ArvoreAberta *criarArvoreAberta();

ArvoreAberta *preencherArvoreAberta(FILE *arquivo);

void inserirAberto(ArvoreAberta *arvore, Cliente *cliente, size_t indice);

#endif //TPA_ARVORE_ARVOREABERTA_H
