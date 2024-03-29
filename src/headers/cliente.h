//
// Created by guzuc on 09/09/2019.
//

#ifndef TPA_HASH_CLIENTE_H
#define TPA_HASH_CLIENTE_H

typedef struct structCliente {
    int codigo;
    char *nome;
    double saldo;
} Cliente;

typedef struct structItemCliente {
    Cliente *cliente;
    int nivel;
    struct structItemCliente *maior;
    struct structItemCliente *menor;
} ItemCliente;

Cliente *criarCliente(char *codigo, char *nome, char *saldo);

ItemCliente *criarRegistro(Cliente *cliente, int nivel);

char *removerCaractere(char *string, char caractere);

#endif //TPA_HASH_CLIENTE_H
