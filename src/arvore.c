//
// Created by guzuc on 21/09/2019.
//

#include "headers/arvore.h"

bool espelhoSimilar(ArvoreAberta *arvoreAberta, ItemCliente *raiz, int indice) {
    if (raiz && arvoreAberta->raiz[indice]) {
        if (raiz->cliente->codigo == arvoreAberta->raiz[indice]->codigo)
            return espelhoSimilar(arvoreAberta, raiz->menor, 2 * indice + 2) &&
                   espelhoSimilar(arvoreAberta, raiz->maior, 2 * indice + 1);
        else
            return false;
    }
    return true;
}