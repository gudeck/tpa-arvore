//
// Created by guzuc on 21/09/2019.
//

#include "headers/arvoreFechada.h"
#include "headers/arvoreAberta.h"

bool espelhoSimilar(ItemCliente *raiz, ArvoreAberta *arvoreAberta, int indice) {
    if (raiz && arvoreAberta->raiz[indice]) {
        if (raiz->cliente->codigo == arvoreAberta->raiz[indice]->codigo)
            return espelhoSimilar(raiz->menor, arvoreAberta, 2 * indice + 2) &&
                   espelhoSimilar(raiz->maior, arvoreAberta, 2 * indice + 1);
        else
            return false;
    }
    return true;
}