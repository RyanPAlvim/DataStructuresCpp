#include "filaEncad.h"
#include <iostream>
using namespace std;

FilaEncad::FilaEncad()
{
    inicio = nullptr;
    fim = nullptr;
}

FilaEncad::~FilaEncad()
{
    Node* aux = inicio;
    while(aux != nullptr){
        inicio = inicio->next;
        delete aux;
        aux = inicio;
    }
    fim = nullptr;
}

void FilaEncad::enfilera(int val)
{
    Node* novo = new Node(val);
    if(estaVazia()){
        inicio = novo;
    }
    else{
        fim->next = novo;
    }

    fim = novo;
}

int FilaEncad::desenfilera()
{
    if(estaVazia()){
        cout << "Fila Vazia";
        return;
    }

    int val = inicio->data;
    Node* tmp = inicio;
    inicio = inicio->next;
    if(estaVazia()){
        fim = nullptr;
    }

    delete tmp;

    return val;
}

bool FilaEncad::estaVazia()
{
    if(inicio == nullptr){
        return true;
    }
    return false;
}