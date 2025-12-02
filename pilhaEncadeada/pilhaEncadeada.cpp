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
        throw runtime_error("Pilha vazia!");
    }

    No<T>* aux = topo;
    T auxVal = aux->getInfo();

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
        T x = desempilha();
        adicionaFundo(val);
        empilha(x);
    }
}

template<typename T>
void PilhaEncadeada<T>::inverte(){
    if(vazia()) return;

    T x = desempilha();
    inverte();
    adicionaFundo(x);
}

template<typename T>
bool PilhaEncadeada<T>::verificaParentesis(char str[]){
    
    PilhaEncadeada<char> pilha;
    int i = 0;

    while(str[i] != '\0'){
        if(str[i] == '(' || str[i] == '{' || str[i] == '['){
            pilha.empilha(str[i]);
        }
        else if(str[i] == ')' || str[i] == '}' || str[i] == ']'){
            if(pilha.vazia()) return false;

            char topo = pilha.desempilha();

            if((str[i] == ')' && topo != '(') ||
               (str[i] == '}' && topo != '{') ||
               (str[i] == ']' && topo != '['))
                return false;
        }
        i++;
    }
    return pilha.vazia();
}

template<typename T>
int PilhaEncadeada<T>::somaAlternada(){

    PilhaEncadeada<int> pilha;
    int soma = 0;
    int sinal = 1;
    while(!vazia()){
        int x = desempilha();
        pilha.empilha(x);
        soma += x * sinal;
        sinal *= =1;
    }
    while(!pilha.vazia())
        empilha(pilha.desempilha());
}

template<typename T>
void PilhaEncadeada<T>::removeIntervalo(int a, int b){

    PilhaEncadeada<int> pilha;

    while(!vazia())
        pilha.empilha(desempilha());
    

    while(!pilha.vazia()){

        int x = pilha.desempilha();

        if(x < a || cont > x){
            empilha(x);
        }
    }
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
