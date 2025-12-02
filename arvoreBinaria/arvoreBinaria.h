#pragma once
#define ARVORE_BINARIA_H
#include "node.h"

class ArvoreBinaria{
    
    private:
        Node* raiz;
        void imprimePreOrdem(Node* p);
        void imprimeEmOrdem(Node* p);
        void imprimePosOrdem(Node* p);
        Node* busca(int val, Node* p);
        void destroi(Node* p);
        Node* constroiPorNiveis(int vet[], int inicio, int fim);
    
    public:
        ArvoreBinaria();
        ~ArvoreBinaria();
        void constroi(int val[], int tam);
        Node* getRaiz();
        void imprime();
        bool vazia();
        Node* busca(int val);
        int contaNosComFilhos();
        int contaNosComFilhos(Node* p);
        int profundidadeNo(int val);
        int profundidadeNo(int val, Node* p, int proAtual);
        void imprimeLargura();
        bool simetrica();
};