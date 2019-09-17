//
// Created by guzuc on 09/09/2019.
//

#include <stdlib.h>
#include <string.h>
#include "headers/cliente.h"

Cliente *criarCliente(int codigo, char *nome, double saldo) {

    Cliente *novoCliente = (Cliente *) calloc(1, sizeof(Cliente));
    novoCliente->nome = (char *) calloc(strlen(nome) + 1, sizeof(char));

    novoCliente->codigo = codigo;
    strcpy(novoCliente->nome, nome);
    novoCliente->saldo = saldo;
    return novoCliente;
}

ItemCliente *criarRegistro(Cliente *cliente) {

    ItemCliente *novoRegistro = (ItemCliente *) calloc(1, sizeof(ItemCliente));

    novoRegistro->cliente = cliente;
    novoRegistro->maior = NULL;
    novoRegistro->menor = NULL;
    return novoRegistro;
}

void excluirRegistro(ItemCliente *registro) {

    if (registro->maior != NULL)
        registro->maior->menor = registro->menor;
    if (registro->menor != NULL)
        registro->menor->maior = registro->maior;
    free(registro);
}
