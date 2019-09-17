//
// Created by guzuc on 11/09/2019.
//

#ifndef TPA_HASH_HASHFECHADO_H
#define TPA_HASH_HASHFECHADO_H

#include "hash.h"
#include "cliente.h"

void adicionarFechado(ArvoreClientes *hash, ItemCliente *novoRegistro, FuncaoHash funcaoHash);

void excluirFechado(ArvoreClientes *hash, ItemCliente *registro, FuncaoHash funcaoHash);

ItemCliente *buscarFechado(ArvoreClientes *hash, ItemCliente *registro, FuncaoHash funcaoHash);

#endif //TPA_HASH_HASHFECHADO_H
