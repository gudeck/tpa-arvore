//
// Created by 2017122760013 on 17/09/2019.
//

#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "headers/arvoreFechada.h"

#define COMPLETA(x) (pow(2, (x) + 1) - 1)

ArvoreFechada *criarArvoreFechada() {
    ArvoreFechada *novaArvore = (ArvoreFechada *) calloc(1, sizeof(ArvoreFechada));
    novaArvore->raiz = (ItemCliente **) calloc(1, sizeof(ItemCliente *));
    novaArvore->altura = -1;
    return novaArvore;
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
    arvoreFechada->altura = calcularAltura(*(arvoreFechada->raiz));
    return arvoreFechada;
}

ItemCliente *buscarArvore(ItemCliente *raiz, int codigo) {
    if (!raiz)
        return NULL;
    if (raiz->cliente->codigo == codigo)
        return raiz;
    else if (raiz->cliente->codigo < codigo)
        return buscarArvore(raiz->maior, codigo);
    else
        return buscarArvore(raiz->menor, codigo);
}

ItemCliente *excluirRegistro(ItemCliente *raiz, int codigo) {
    if (raiz == NULL) return raiz;
    if (codigo < raiz->cliente->codigo)
        raiz->menor = excluirRegistro(raiz->menor, codigo);
    else if (codigo > raiz->cliente->codigo)
        raiz->maior = excluirRegistro(raiz->maior, codigo);
    else {
        ItemCliente *aux;
        if (!raiz->menor) {
            aux = raiz->maior;
            free(raiz);
            return aux;
        } else if (!raiz->maior) {
            aux = raiz->menor;
            free(raiz);
            return aux;
        }
        aux = menorValorDireita(raiz->maior);
        raiz->cliente = aux->cliente;
        raiz->maior = excluirRegistro(raiz->maior, aux->cliente->codigo);
    }
    return raiz;
}

ItemCliente *menorValorDireita(ItemCliente *raiz) {
    ItemCliente *aux = raiz;
    while (aux && aux->menor)
        aux = aux->menor;
    return aux;
}

bool arvoreCheia(ArvoreFechada *arvore) {
    return (contarNos(*(arvore->raiz)) == COMPLETA(arvore->altura)) && estritamenteBinaria(*(arvore->raiz));
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

int calcularAltura(ItemCliente *raiz) {
    if (!raiz)
        return -1;
    else {
        int alturaEsquerda = calcularAltura(raiz->menor);
        int alturaDireita = calcularAltura(raiz->maior);
        if (alturaEsquerda < alturaDireita) return alturaDireita + 1;
        else return alturaEsquerda + 1;
    }
}

int contarNos(ItemCliente *raiz) {
    if (raiz)
        return contarNos(raiz->menor) + contarNos(raiz->maior) + 1;
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
