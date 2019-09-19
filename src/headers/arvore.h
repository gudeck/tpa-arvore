//
// Created by 2017122760013 on 17/09/2019.
//

#ifndef TPA_ARVORE_ARVORE_H
#define TPA_ARVORE_ARVORE_H

#include <stdio.h>
#include <stdbool.h>
#include "cliente.h"

typedef struct {
    int altura;
    ItemCliente **raiz;
} ArvoreClientes;

ArvoreClientes *criarArvore();

ArvoreClientes *preencherArvore(FILE *arquivo);

ItemCliente *buscarElemento(ItemCliente *raiz, int codigo);

bool arvoreCheia(ArvoreClientes *arvore);

bool estritamenteBinaria(ItemCliente *raiz);

int contarAltura(ItemCliente *raiz);

int contarNodos(ItemCliente *raiz);

void inserir(ItemCliente **raiz, Cliente *cliente, int nivel);

void emOrdem(ItemCliente *raiz);

void emOrdemInversa(ItemCliente *raiz);

void posOrdem(ItemCliente *raiz);

void preOrdem(ItemCliente *raiz);

#endif //TPA_ARVORE_ARVORE_H
