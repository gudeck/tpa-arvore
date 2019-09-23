//
// Created by 2017122760013 on 17/09/2019.
//

#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "headers/arvoreFechada.h"

#define COMPLETA(x) (pow(2, (x) + 1) - 1)


ArvoreFechada *criarArvoreFechada() {
    ArvoreFechada *novaArvore = (ArvoreFechada *) calloc(1, sizeof(ArvoreFechada));
    novaArvore->raiz = (ItemCliente **) calloc(1, sizeof(ItemCliente *));
    novaArvore->altura = -1;
    return novaArvore;
}

ItemCliente *buscarElemento(ItemCliente *raiz, int codigo) {
    if (!raiz)
        return NULL;
    if (raiz->cliente->codigo == codigo)
        return raiz;
    else if (raiz->cliente->codigo < codigo)
        return buscarElemento(raiz->maior, codigo);
    else
        return buscarElemento(raiz->menor, codigo);
}

bool arvoreCheia(ArvoreFechada *arvore) {
    return (contarNodos(*(arvore->raiz)) == COMPLETA(arvore->altura)) && estritamenteBinaria(*(arvore->raiz));
}

bool estritamenteBinaria(ItemCliente *raiz) {
    if (raiz) {
        if ((raiz->maior && raiz->menor) || (!raiz->maior && !raiz->menor))
            return estritamenteBinaria(raiz->maior) && estritamenteBinaria(raiz->menor);
        else
            return false;
    }
    return true;
}

int contarAltura(ItemCliente *raiz) {
    if (!raiz)
        return -1;
    else {
        int alturaEsquerda = contarAltura(raiz->menor);
        int alturaDireita = contarAltura(raiz->maior);
        if (alturaEsquerda < alturaDireita) return alturaDireita + 1;
        else return alturaEsquerda + 1;
    }
}

int contarNodos(ItemCliente *raiz) {
    if (raiz)
        return contarNodos(raiz->menor) + contarNodos(raiz->maior) + 1;
    return 0;
}

void inserirFechado(ItemCliente **raiz, Cliente *cliente, int nivel) {
    if (!(*raiz)) {
        (*raiz) = criarRegistro(cliente, nivel);
        return;
    }
    if ((*raiz)->cliente->codigo <= cliente->codigo)
        inserirFechado(&(*raiz)->maior, cliente, nivel + 1);
    else
        inserirFechado(&(*raiz)->menor, cliente, nivel + 1);
}

void emOrdem(ItemCliente *raiz) {
    if (raiz) {
        emOrdem(raiz->menor);
        printf("\t%d", raiz->cliente->codigo);
        emOrdem(raiz->maior);
    }
}

void emOrdemInversa(ItemCliente *raiz) {
    if (raiz) {
        emOrdemInversa(raiz->maior);
        printf("\t%d", raiz->cliente->codigo);
        emOrdemInversa(raiz->menor);
    }
}

void posOrdem(ItemCliente *raiz) {
    if (raiz) {
        posOrdem(raiz->menor);
        posOrdem(raiz->maior);
        printf("\t%d", raiz->cliente->codigo);
    }
}

void preOrdem(ItemCliente *raiz) {
    if (raiz) {
        printf("\t%d", raiz->cliente->codigo);
        preOrdem(raiz->menor);
        preOrdem(raiz->maior);
    }
}


ArvoreFechada *preencherArvoreFechada(FILE *arquivo) {
    rewind(arquivo);

    ArvoreFechada *arvoreFechada = criarArvoreFechada();
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
        inserirFechado(arvoreFechada->raiz, novoCliente, 0);
    }
    arvoreFechada->altura = contarAltura(*(arvoreFechada->raiz));
    return arvoreFechada;
}