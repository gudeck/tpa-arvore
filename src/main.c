//
// Created by 2017122760013 on 09/09/2019.
//

#include <locale.h>
#include <stdio.h>
#include "headers/cliente.h"
#include "headers/arvore.h"

int main(int argc, char *argv[]) {

    setlocale(LC_ALL, NULL);

    FILE *arquivo = fopen("../DadosBancoPulini.txt", "r");

    if (arquivo != NULL) {
        ArvoreClientes *arvore = preencherArvore(arquivo);

//        ItemCliente *registro = buscarElemento(*(arvore->raiz), 6850);
        emOrdem(*(arvore->raiz));
        excluir(*(arvore->raiz), 12);
        emOrdem(*(arvore->raiz));
//        posOrdem(*(arvore->raiz));

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

