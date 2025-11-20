#include "listaContiguaCircular.h"
#include <iostream>
using namespace std;

ListaContiguaCircular::ListaContiguaCircular(int max, int inicio){
    this->inicio = inicio;
    this->max = max;
    n = 0;
    vet = new int[max];
}

ListaContiguaCircular::~ListaContiguaCircular(){
    delete [] vet;
}

int ListaContiguaCircular::getValor(int idx){

    if(idx < 0 && idx >= n){
        cout << "Index inválido";
        return -1;
    }
    int indiceReal = (inicio + idx)%max;
    
    return vet[indiceReal];
}

void ListaContiguaCircular::setValor(int idx, int val){
    
    if(idx < 0 || idx >= n){
        cout << "Index inválido";
        return;
    }
    int indiceReal = (inicio + idx)%max;
    
    vet[indiceReal] = val;
}

int ListaContiguaCircular::getIndex(int valor){

    for(int i = 0; i < n; i++){
        if(vet[(inicio + i)%max] == valor)
            return i;
    }

    cout << "Não tem nenhum elemento com esse valor";
    return -1;
}

void ListaContiguaCircular::insereK(int k, int val){
    
    int i = n;

    if(k < 0 || k > n){
        cout << "Index inválido";
        return;
    }
    if(n == max){
        cout << "Lista cheia";
        return;
    }
    while(i > k){
        vet[(inicio + i)%max] = vet[(inicio + i - 1)%max];
        i--;
    }

    vet[(inicio + k)%max] = val;
    n++;
}


void ListaContiguaCircular::insereFinal(int val){

    if(n == max){
        cout << "Lista cheia";
        return;
    }
    vet[(inicio + n)%max] = val;
    n++;
}

void ListaContiguaCircular::removeK(int k){

    int i = k;

    if(k < 0 || k >= n){
        cout << "Index Inválido";
        return;     
    }

    while(i < n - 1){
        vet[(inicio + i) % max] = vet[(inicio + i + 1) % max];
        i++;
    }

    n--;
}

void ListaContiguaCircular::removeFinal(){
    n--;
}

void ListaContiguaCircular::imprimeLista(){

    cout << "[";

    for(int i = 0; i < n; i++){
        if(i < n - 1){
            cout << vet[(inicio + i) % max] << ", ";
        }
        else{
            cout << vet[(inicio + i) % max];
        }
    }

    cout << "]" << endl;

}

void ListaContiguaCircular::realoca(){

    max *= 2;

    int *newVet = new int[max];

    for(int i = 0; i < n; i++){
        newVet[i] = vet[i];
    }

    delete [] vet;
    vet = newVet;
}