#include <iostream>
#include "pilhaEncadeada.cpp"
#include "no.cpp"
using namespace std;

int main(){

    PilhaEncadeada<char> pilha;
    char vet[8] = "({1+1})";

    cout << pilha.verificaParentesis(vet) << endl;

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