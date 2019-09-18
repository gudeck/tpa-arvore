//
// Created by 2017122760013 on 09/09/2019.
//

#include <locale.h>
#include <stdio.h>
#include "headers/cliente.h"
#include "headers/arvore.h"

//=================================================
void preOrdem(ItemCliente *raiz) {
    if (raiz != NULL) {
        printf("\t%d", raiz->cliente->codigo);
        preOrdem(raiz->menor);
        preOrdem(raiz->maior);
    }//if
}

//================================================
void emOrdem(ItemCliente *raiz) {
    if (raiz != NULL) {
        emOrdem(raiz->menor);
        printf("\t%d", raiz->cliente->codigo);
        emOrdem(raiz->maior);
    }//if
}

//=================================================
void posOrdem(ItemCliente *raiz) {
    if (raiz != NULL) {
        posOrdem(raiz->menor);
        posOrdem(raiz->maior);
        printf("\t%d", raiz->cliente->codigo);
    }//if
}

int altura(ItemCliente *raiz) {
    if (raiz == NULL)
        return -1; // altura da árvore vazia
    else {
        int alturaEsquerda = altura(raiz->menor);
        int alturaDireita = altura(raiz->maior);
        if (alturaEsquerda < alturaDireita) return alturaDireita + 1;
        else return alturaEsquerda + 1;
    }
}

// A função auxiliar printnode imprime o caracter
// c precedido de 3b espaços e seguido de uma mudança
// de linha.
void printnode(Cliente *cliente, int b) {
    int i;
    for (i = 0; i < b; i++) printf("   ");
    printf("%d\n", cliente->codigo);
}

void show(ItemCliente *x, int b) {
    if (x != NULL) {
        printnode(x->cliente, b);
        show(x->maior, b + 1);
        show(x->menor, b + 1);
    }
}

int main(int argc, char *argv[]) {

    setlocale(LC_ALL, NULL);

    FILE *arquivo = fopen("../DadosBancoPulini.txt", "r");

    if (arquivo != NULL) {
        ArvoreClientes *arvore = preencherArvore(arquivo);

//        preOrdem(*(arvore->raiz));
//        emOrdem(*(arvore->raiz));
//        posOrdem(*(arvore->raiz));

        printf("%d %d %d",
               (*(arvore->raiz))->menor->cliente->codigo,
               (*(arvore->raiz))->cliente->codigo,
               (*(arvore->raiz))->maior->cliente->codigo);
        fclose(arquivo);
    }
    return 0;
}

char *removerCaractere(char *string, char caractere) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == caractere) {
            for (int j = i; string[j] != '\0'; ++j) {
                string[j] = string[j + 1];
            }
        }
    }
    return string;
}

