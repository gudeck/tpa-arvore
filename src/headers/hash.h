//
// Created by guzuc on 09/09/2019.
//

#ifndef TPA_HASH_HASH_H
#define TPA_HASH_HASH_H

#include <stdio.h>
#include "cliente.h"

typedef struct {
    double loadFactor;
    int colisoesTotal;
    int ocupado;
    int tamanho;
    ItemCliente **registro;
} ArvoreClientes;

typedef int (*FuncaoHash)(ItemCliente *, ArvoreClientes *);

typedef ItemCliente *(*FuncaoPesquisa)(ArvoreClientes *, ItemCliente *, FuncaoHash);

typedef void (*FuncaoInsercao)(ArvoreClientes *, ItemCliente *, FuncaoHash);


void *inserir(ArvoreClientes *arvore, ItemCliente *registro);

ArvoreClientes *expandirHash(ArvoreClientes *hash, FuncaoInsercao funcaoInsercao, FuncaoHash funcaoHash);

ArvoreClientes *preencherHash(FILE *arquivo);

int formulaDivisao(ItemCliente *registro, ArvoreClientes *hash);

//int formulaDobra(ItemCliente *registro, ArvoreClientes *hash);

bool inserirDisponivel(ArvoreClientes *hash);

void buscar(ArvoreClientes *hash, ItemCliente *registro, FuncaoHash funcaoHash, FuncaoPesquisa funcaoPesquisa);

#endif //TPA_HASH_HASH_H
