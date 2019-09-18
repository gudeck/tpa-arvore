//
// Created by guzuc on 09/09/2019.
//

#include <stdlib.h>
#include <string.h>
#include "headers/cliente.h"
#include "headers/main.h"

Cliente *criarCliente(char *codigo, char *nome, char *saldo) {

    Cliente *novoCliente = (Cliente *) calloc(1, sizeof(Cliente));
    novoCliente->nome = (char *) calloc(strlen(nome) + 1, sizeof(char));

    novoCliente->codigo = strtol(codigo, NULL, 10);
    strcpy(novoCliente->nome, nome);
    novoCliente->saldo = strtod(removerCaractere(saldo, '.'), NULL);
    return novoCliente;
}

ItemCliente *criarRegistro(Cliente *cliente) {

    ItemCliente *novoRegistro = (ItemCliente *) calloc(1, sizeof(ItemCliente));

    novoRegistro->cliente = cliente;
    novoRegistro->maior = NULL;
    novoRegistro->menor = NULL;
    return novoRegistro;
}

