//
// Created by guzuc on 09/09/2019.
//

#ifndef TPA_HASH_HASH_H
#define TPA_HASH_HASH_H

#include "arvoreFechada.h"

typedef struct {
    int tamanho;
    ArvoreFechada **arvore;
} Hash;

Hash *criarHash(size_t tamanho);

void inserirHash(Cliente *novoCliente, Hash *hash);

Hash *preencherHash(FILE *arquivo);

int formulaDivisao(Hash *hash, int codigo);

ItemCliente *buscarHash(Hash *hash, int codigo);

#endif //TPA_HASH_HASH_H
