#include <iostream>
#include "pilhaEncadeada.cpp"
#include "no.cpp"
using namespace std;

int main(){

    PilhaEncadeada pilha;

    pilha.empilha(10);
    pilha.empilha(12);
    pilha.empilha(4);

    pilha.getInfo();

    pilha.desempilha();

    pilha.getInfo();

    pilha.adicionaFundo(10);

    pilha.getInfo();
}