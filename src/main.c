//
// Created by 2017122760013 on 09/09/2019.
//

#include <stdio.h>
#include <locale.h>
#include "headers/main.h"
#include "headers/arvore.h"

int main(int argc, char *argv[]) {

    setlocale(LC_ALL, NULL);

    FILE *arquivo = fopen("../DadosBancoPulini.txt", "r");

    if (arquivo != NULL) {

        ArvoreAberta *arvoreAberta = criarArvoreAberta();
        ArvoreFechada *arvoreFechada = criarArvoreFechada();
        preencherArvore(arquivo, arvoreAberta, arvoreFechada);

//        ItemCliente *registro = buscarElemento(*(arvore->raiz), 6850);
//        emOrdem(*(arvore->raiz));
//        emOrdem(*(arvore->raiz));
//        emOrdem(*(arvoreFechada->raiz));

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

