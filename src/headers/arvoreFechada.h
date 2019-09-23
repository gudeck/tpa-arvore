//
// Created by 2017122760013 on 17/09/2019.
//

#ifndef TPA_ARVORE_ARVOREFECHADA_H
#define TPA_ARVORE_ARVOREFECHADA_H

#include <stdbool.h>
#include "cliente.h"
#include "arvoreAberta.h"

typedef struct {
    int altura;
    ItemCliente **raiz;
} ArvoreFechada;

ArvoreFechada *criarArvoreFechada();

ArvoreFechada *preencherArvoreFechada(FILE *arquivo);

ItemCliente *buscarElemento(ItemCliente *raiz, int codigo);

bool arvoreCheia(ArvoreFechada *arvore);

bool estritamenteBinaria(ItemCliente *raiz);

int contarAltura(ItemCliente *raiz);

int contarNodos(ItemCliente *raiz);

void inserirFechado(ItemCliente **raiz, Cliente *cliente, int nivel);

void emOrdem(ItemCliente *raiz);

void emOrdemInversa(ItemCliente *raiz);

void posOrdem(ItemCliente *raiz);

void preOrdem(ItemCliente *raiz);

#endif //TPA_ARVORE_ARVOREFECHADA_H
