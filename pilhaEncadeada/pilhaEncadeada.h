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
        int somaAlternada() requires same_as<T, int>;
        bool verificaParentesis(char str[]) requires same_as<T, char>;
};
