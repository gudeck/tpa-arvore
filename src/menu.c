//
// Created by guzuc on 27/09/2019.
//

#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include "headers/menu.h"
#include "headers/hash.h"
#include "headers/arvore.h"

#define CALCULATEMPO(final, inicial) (((double) (final) - (double) (inicial)) / (double) CLOCKS_PER_SEC)

void menu(ArvoreAberta **arvoreAberta, ArvoreFechada **arvoreFechada, Hash **hash) {

    int opcao;
    int codigo;
    puts("\n\tMenu Arvore"\
    "\n1 - Mostrar altura da arvore"\
    "\n2 - Mostrar nivel de determinado no"\
    "\n3 - Mostrar estritamente binaria"\
    "\n4 - Mostrar arvore cheia"\
    "\n5 - Mostrar quantidade de nos"\
    "\n6 - Mostrar elementos crescente"\
    "\n7 - Mostrar elementos decrescente"\
    "\n8 - Buscar elemento"\
    "\n9 - Excluir elemento"\
    "\n10 - Espelho-similar"\
    "\n11 - Comparar buscas"\
    "\n0 - Sair");
    scanf(" %d", &opcao);
    switch (opcao) {
        case 1: {
            printf("\nA arvore tem altura %d", (*arvoreFechada)->altura);
            break;
        }
        case 2: {
            ItemCliente *registro;
            printf("\nInsira o codigo a ser buscado: ");
            scanf(" %d", &codigo);
            registro = buscarArvore(*(*arvoreFechada)->raiz, opcao);
            if (registro)
                printf("\nO nivel do registro buscado e %d", registro->nivel);
            else
                printf("\nRegistro nao encontrado.");
            break;
        }
        case 3: {
            if (estritamenteBinaria(*(*arvoreFechada)->raiz))
                printf("\nA arvore e estritamente binaria!");
            else
                printf("\nA arvore nao e estritamente binaria!");
            break;
        }
        case 4: {
            if (arvoreCheia(*arvoreFechada))
                printf("\nA arvore esta cheia!");
            else
                printf("\nA arvore nao esta cheia!");
            break;
        }
        case 5: {
            printf("\nA arvore possui %d nos", contarNos(*(*arvoreFechada)->raiz));
            break;
        }
        case 6: {
            emOrdem(*(*arvoreFechada)->raiz);
            break;
        }
        case 7: {
            emOrdemInversa(*(*arvoreFechada)->raiz);
            break;
        }
        case 8: {
            ItemCliente *registro;
            printf("\nInsira o codigo a ser buscado: ");
            scanf(" %d", &codigo);
            registro = buscarArvore(*(*arvoreFechada)->raiz, opcao);
            if (registro)
                printf("\nOs dados solicitados foram: %d %s %f", registro->cliente->codigo, registro->cliente->nome,
                       registro->cliente->saldo);
            else
                printf("\nRegistro nao encontrado.");
            break;
        }
        case 9: {
            ItemCliente *registro;
            printf("\nInsira o codigo a ser excluido: ");
            scanf(" %d", &codigo);
            registro = buscarArvore(*(*arvoreFechada)->raiz, opcao);
            if (registro) {
                excluirRegistro(*(*arvoreFechada)->raiz, opcao);
                printf("\nRegistro excluido com sucesso!");
            } else
                printf("\nRegistro nao encontrado.");
            break;
        }
        case 10: {
            if (espelhoSimilar(*arvoreAberta, *(*arvoreFechada)->raiz, 0))
                printf("As arvores sao espelho-similares");
            else
                printf("As arvores nao sao espelho-similares");
            break;
        }
        case 11: {
            clock_t inicialArvore, finalArvore;
            clock_t inicialHash, finalHash;
            printf("\nInsira o codigo a ser buscado: ");
            scanf(" %d", &codigo);
            inicialArvore = clock();
            buscarArvore(*(*arvoreFechada)->raiz, opcao);
            finalArvore = clock();
            inicialHash = clock();
            buscarHash(*hash, opcao);
            finalHash = clock();
            printf("\nTempo gasto nas buscas"\
            "\nArvore: %f"\
            "\nHash: %f", CALCULATEMPO(finalArvore, inicialArvore), CALCULATEMPO(finalHash, inicialHash));
            break;
        }
        case 0: {
            exit(0);
        }
        default: {
            menu(arvoreAberta, arvoreFechada, hash);
        }
    }
    while (!kbhit());
    system("cls");
    menu(arvoreAberta, arvoreFechada, hash);
}
