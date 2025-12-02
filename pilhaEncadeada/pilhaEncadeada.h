#pragma once
#define PILHA_ENCADEADA_H
#include "no.h"

template<typename T>
class PilhaEncadeada{

    private:
        No<T>* topo;

    public:
        PilhaEncadeada<T>();
        ~PilhaEncadeada<T>();
        T getTopo();
        void empilha(T val);
        T desempilha();
        bool vazia();
        void getInfo();
        void adicionaFundo(T val);
        void inverte();
        int somaAlternada();
        bool verificaParentesis(char str[]);
};
