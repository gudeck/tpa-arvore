//
// Created by 2017122760013 on 17/09/2019.
//

#ifndef TPA_ARVORE_ARVORE_H
#define TPA_ARVORE_ARVORE_H

#include <stdio.h>
#include "cliente.h"

typedef struct {
    ItemCliente **raiz;
} ArvoreClientes;

ArvoreClientes *criarArvore();

void inserir(ItemCliente **raiz, Cliente *cliente);

ArvoreClientes *preencherArvore(FILE *arquivo);

#endif //TPA_ARVORE_ARVORE_H
