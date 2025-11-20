#include "pilhaEncadeada.h"
#include <iostream>
using namespace std;

PilhaEncadeada::PilhaEncadeada(){

    topo = nullptr;

}

PilhaEncadeada::~PilhaEncadeada(){

    No* aux = topo;

    while(topo->getProx() != nullptr){
        topo = topo->getProx();
        delete aux;
        aux = topo;
    }
}

void PilhaEncadeada::empilha(int val){
    No* newTop = new No(val);
    newTop->setProx(topo);
    topo = newTop;
}

int PilhaEncadeada::desempilha(){
    if(vazia()){
        return -1;
    }

    No* aux = topo;
    int auxVal = aux->getInfo();

    topo = topo->getProx();

    delete aux;
    return auxVal;
}

int PilhaEncadeada::getTopo(){
    if(vazia()){
        return -1;
    }

    return topo->getInfo();
}

bool PilhaEncadeada::vazia(){
    return topo == nullptr;
}

void PilhaEncadeada::getInfo(){
    No* aux = topo;

    while(aux != nullptr){
        cout << aux->getInfo() << (aux->getProx() == nullptr ? "." : ", ");
        aux = aux->getProx(); 
    }

    cout << endl << "O topo é: " << getTopo() << endl;
}
