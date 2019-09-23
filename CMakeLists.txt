cmake_minimum_required(VERSION 3.14)
project(tpa_arvore C)

set(CMAKE_C_STANDARD 11)

add_executable(tpa_arvore src/main.c src/headers/main.h src/cliente.c src/headers/cliente.h src/arvoreFechada.c src/headers/arvoreFechada.h src/arvoreAberta.c src/headers/arvoreAberta.h src/arvore.c src/headers/arvore.h)