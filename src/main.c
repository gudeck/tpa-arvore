//
// Created by 2017122760013 on 09/09/2019.
//

#include <stdio.h>
#include <locale.h>
#include "headers/arvore.h"

int main(int argc, char *argv[]) {

    setlocale(LC_ALL, NULL);

    FILE *arquivoAberto = fopen("../DadosBancoPulini10k.txt", "r");
    FILE *arquivoFechado = fopen("../DadosBancoPulini50k.txt", "r");

    if (arquivoAberto) {

        ArvoreAberta *arvoreAberta = preencherArvoreAberta(arquivoAberto);
        ArvoreFechada *arvoreFechada = preencherArvoreFechada(arquivoFechado);


        fclose(arquivoAberto);
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

