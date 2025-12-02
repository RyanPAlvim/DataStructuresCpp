#pragma once
#define PILHA_ENCADEADA_H
#include "no.h"

class PilhaEncadeada{

    private:
        No* topo;

    public:
        PilhaEncadeada();
        ~PilhaEncadeada();
        int getTopo();
        void empilha(int val);
        int desempilha();
        bool vazia();
        void getInfo();
        void adicionaFundo(int val);
        int somaAlternada();
};
