#include <iostream>
#include "pilhaEncadeada.cpp"
#include "no.cpp"
using namespace std;

int main(){

    PilhaEncadeada<char> pilha;

    pilha.empilha('a');
    pilha.empilha('b');
    pilha.empilha('c');

    pilha.getInfo();

    pilha.getInfo();

    pilha.adicionaFundo('d');

    pilha.getInfo();

    pilha.inverte();

    pilha.getInfo();
}