#include "pilhaEncadeada.h"
#include <iostream>
using namespace std;

template<typename T>
PilhaEncadeada<T>::PilhaEncadeada(){

    topo = nullptr;

}

template<typename T>
PilhaEncadeada<T>::~PilhaEncadeada(){

    No<T>* aux = topo;

    while(topo->getProx() != nullptr){
        topo = topo->getProx();
        delete aux;
        aux = topo;
    }
}

template<typename T>
void PilhaEncadeada<T>::empilha(T val){
    No<T>* newTop = new No(val);
    newTop->setProx(topo);
    topo = newTop;
}

template<typename T>
T PilhaEncadeada<T>::desempilha(){
    if(vazia()){
        return -1;
    }

    No<T>* aux = topo;
    int auxVal = aux->getInfo();

    topo = topo->getProx();

    delete aux;
    return auxVal;
}

template<typename T>
T PilhaEncadeada<T>::getTopo(){
    if(vazia()){
        return -1;
    }

    return topo->getInfo();
}

template<typename T>
bool PilhaEncadeada<T>::vazia(){
    return topo == nullptr;
}

template<typename T>
void PilhaEncadeada<T>::adicionaFundo(T val){
    if(vazia()) empilha(val);
    else{
        int x = desempilha();
        adicionaFundo(val);
        empilha(x);
    }
}

template<typename T>
void PilhaEncadeada<T>::inverte(){
    if(vazia()) return;

    int x = desempilha();
    inverte();
    adicionaFundo(x);
}

template<typename T>
bool PilhaEncadeada<T>::verificaParentesis(char str[]){
    
}

template<typename T>
int PilhaEncadeada<T>::somaAlternada(){

    PilhaEncadeada<int> aux;
    int soma = 0;
    int sinal = 1;
    while(!this->vazia()){
        int x = this->desempilha();
        soma += sinal*x;
        sinal *= -1;
        aux.empilha(x);
    }
    while(!aux.vazia()) this->empilha(aux.desempilha());
    return soma;

}

template<typename T>
void PilhaEncadeada<T>::getInfo(){
    No<T>* aux = topo;

    while(aux != nullptr){
        cout << aux->getInfo() << (aux->getProx() == nullptr ? "." : ", ");
        aux = aux->getProx(); 
    }

    cout << endl << "O topo é: " << getTopo() << endl;
}
