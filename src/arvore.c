//
// Created by 2017122760013 on 17/09/2019.
//

#include "headers/arvore.h"
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <windef.h>

#define COMPLETA(x) (pow(2, x + 1) - 1)

ArvoreClientes *criarArvore() {
    ArvoreClientes *novaArvore = (ArvoreClientes *) calloc(1, sizeof(ArvoreClientes));
    novaArvore->raiz = (ItemCliente **) calloc(1, sizeof(ItemCliente *));
    novaArvore->altura = -1;
    return novaArvore;
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
        inserir(arvore->raiz, novoCliente, 0);
    }
    arvore->altura = contarAltura(*(arvore->raiz));
    return arvore;
}

ItemCliente *buscarElemento(ItemCliente *raiz, int codigo) {
    if (raiz == NULL)
        return NULL;
    if (raiz->cliente->codigo == codigo)
        return raiz;
    else if (raiz->cliente->codigo < codigo)
        return buscarElemento(raiz->maior, codigo);
    else
        return buscarElemento(raiz->menor, codigo);
}

bool arvoreCheia(ArvoreClientes *arvore) {
    return (contarNodos(*(arvore->raiz)) == COMPLETA(arvore->altura)) && estritamenteBinaria(*(arvore->raiz));
}

bool estritamenteBinaria(ItemCliente *raiz) {
    if (raiz != NULL) {
        if ((raiz->maior && raiz->menor) || (!raiz->maior && !raiz->menor))
            return estritamenteBinaria(raiz->maior) && estritamenteBinaria(raiz->menor);
        else
            return false;
    }
    return true;
}

int contarAltura(ItemCliente *raiz) {
    if (raiz == NULL)
        return -1;
    else {
        int alturaEsquerda = contarAltura(raiz->menor);
        int alturaDireita = contarAltura(raiz->maior);
        if (alturaEsquerda < alturaDireita) return alturaDireita + 1;
        else return alturaEsquerda + 1;
    }
}

int contarNodos(ItemCliente *raiz) {
    if (raiz != NULL)
        return contarNodos(raiz->menor) + contarNodos(raiz->maior) + 1;
    return 0;
}

void inserir(ItemCliente **raiz, Cliente *cliente, int nivel) {
    if ((*raiz) == NULL) {
        (*raiz) = criarRegistro(cliente, nivel);
        return;
    }
    if ((*raiz)->cliente->codigo < cliente->codigo)
        inserir(&(*raiz)->maior, cliente, nivel + 1);
    else
        inserir(&(*raiz)->menor, cliente, nivel + 1);
}

void emOrdem(ItemCliente *raiz) {
    if (raiz != NULL) {
        emOrdem(raiz->menor);
        printf("\t%d", raiz->cliente->codigo);
        emOrdem(raiz->maior);
    }
}

void emOrdemInversa(ItemCliente *raiz) {
    if (raiz != NULL) {
        emOrdemInversa(raiz->maior);
        printf("\t%d", raiz->cliente->codigo);
        emOrdemInversa(raiz->menor);
    }
}

void posOrdem(ItemCliente *raiz) {
    if (raiz != NULL) {
        posOrdem(raiz->menor);
        posOrdem(raiz->maior);
        printf("\t%d", raiz->cliente->codigo);
    }
}

void preOrdem(ItemCliente *raiz) {
    if (raiz != NULL) {
        printf("\t%d", raiz->cliente->codigo);
        preOrdem(raiz->menor);
        preOrdem(raiz->maior);
    }
}
