//
// Created by guzuc on 09/09/2019.
//

#ifndef TPA_HASH_CLIENTE_H
#define TPA_HASH_CLIENTE_H

#include <stdbool.h>

typedef struct structCliente {
    int codigo;
    char *nome;
    double saldo;
} Cliente;

typedef struct structItemCliente {
    Cliente *cliente;
    struct structItemCliente *maior, *menor;
} ItemCliente;


Cliente *criarCliente(char *codigo, char *nome, char *saldo);

ItemCliente *criarRegistro(Cliente *cliente);

#endif //TPA_HASH_CLIENTE_H
