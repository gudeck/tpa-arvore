//
// Created by 2017122760013 on 09/09/2019.
//

#include <locale.h>
#include "headers/arvoreAberta.h"
#include "headers/arvoreFechada.h"
#include "headers/hash.h"
#include "headers/menu.h"

int main(int argc, char *argv[]) {

    setlocale(LC_ALL, NULL);

    FILE *arquivoAberto = fopen("../DadosBancoPulini10k.txt", "r");
    FILE *arquivoFechado = fopen("../DadosBancoPulini10k.txt", "r");
    FILE *arquivoHash = fopen("../DadosBancoPulini10k.txt", "r");

    if (arquivoAberto && arquivoFechado && arquivoHash) {

        ArvoreAberta *arvoreAberta = preencherArvoreAberta(arquivoAberto);
        ArvoreFechada *arvoreFechada = preencherArvoreFechada(arquivoFechado);
        Hash *hash = preencherHash(arquivoHash);

        menu(&arvoreAberta, &arvoreFechada, &hash);

        fclose(arquivoAberto);
    } else
        printf("\nNão foi possível abrir os arquivos selecionados.");
    return 0;
}
