//
// Created by guzuc on 21/09/2019.
//

#ifndef TPA_ARVORE_ARVORE_H
#define TPA_ARVORE_ARVORE_H

#include <stdio.h>
#include "arvoreAberta.h"
#include "arvoreFechada.h"

bool espelhoSimilar(ArvoreAberta *arvoreAberta, ArvoreFechada *arvoreFechada);

void *preencherArvore(FILE *arquivo, ArvoreAberta *arvoreAberta, ArvoreFechada *arvoreFechada);

#endif //TPA_ARVORE_ARVORE_H
