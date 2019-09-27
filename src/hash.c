//
// Created by guzuc on 09/09/2019.
//

#include <stdlib.h>
#include <string.h>
#include "headers/hash.h"

Hash *criarHash(size_t tamanho) {

    Hash *novaHash = (Hash *) calloc(1, sizeof(Hash));

    novaHash->tamanho = tamanho;
    novaHash->arvore = (ArvoreFechada **) calloc(tamanho, sizeof(ArvoreFechada *));
    return novaHash;
}

Hash *preencherHash(FILE *arquivo) {
    rewind(arquivo);

    Hash *novaHash = criarHash(563);
    Cliente *novoCliente;
    char *codigo;
    char *nome;
    char *saldo;
    char linha[99];

    while (fgets(linha, 99, arquivo)) {
        codigo = strtok(linha, "|");
        nome = strtok(NULL, "|");
        saldo = strtok(NULL, "\0");
        novoCliente = criarCliente(codigo, nome, saldo);
        inserirHash(novoCliente, novaHash);
    }
    return novaHash;
}

void inserirHash(Cliente *novoCliente, Hash *hash) {

    int indice = formulaDivisao(hash, novoCliente->codigo);
    ArvoreFechada *arvore = hash->arvore[indice];

    if (arvore == NULL)
        hash->arvore[indice] = criarArvoreFechada();
    inserirFechado(hash->arvore[indice]->raiz, novoCliente, 0);
}

int formulaDivisao(Hash *hash, int codigo) {
    return codigo % hash->tamanho;
}

ItemCliente *buscarHash(Hash *hash, int codigo) {
    int indice = formulaDivisao(hash, codigo);
    return buscarArvore(*hash->arvore[indice]->raiz, codigo);
}



