//
// Created by 2017122760013 on 17/09/2019.
//

#ifndef TPA_ARVORE_ARVOREFECHADA_H
#define TPA_ARVORE_ARVOREFECHADA_H

#include <stdio.h>
#include <stdbool.h>
#include "cliente.h"

typedef struct {
    int altura;
    ItemCliente **raiz;
} ArvoreFechada;

ArvoreFechada *criarArvoreFechada();

ArvoreFechada *preencherArvoreFechada(FILE *arquivo);

ItemCliente *buscarArvore(ItemCliente *raiz, int codigo);


bool arvoreCheia(ArvoreFechada *arvore);

bool estritamenteBinaria(ItemCliente *raiz);

int contarNos(ItemCliente *raiz);

int calcularAltura(ItemCliente *raiz);

void inserirFechado(ItemCliente **raiz, Cliente *cliente, int nivel);

void emOrdem(ItemCliente *raiz);

void emOrdemInversa(ItemCliente *raiz);

void posOrdem(ItemCliente *raiz);

void preOrdem(ItemCliente *raiz);

ItemCliente *excluirRegistro(ItemCliente *raiz, int codigo);

ItemCliente *menorValorDireita(ItemCliente *raiz);

#endif //TPA_ARVORE_ARVOREFECHADA_H
