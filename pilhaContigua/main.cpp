#include <iostream>
#include "pilhaContigua.cpp"
using namespace std;

int main(){

    PilhaContigua pilha(10);

    pilha.empilha(10);
    pilha.empilha(12);
    pilha.empilha(4);

    pilha.getInfo();

    pilha.desempilha();

    pilha.getInfo();

}