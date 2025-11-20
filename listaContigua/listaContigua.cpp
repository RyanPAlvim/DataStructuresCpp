#include "listaContigua.h"
#include <iostream>
using namespace std;

ListaContigua::ListaContigua(int max){
    this->max = max;
    n = 0;
    vet = new int[max];
}

ListaContigua::~ListaContigua(){
    delete [] vet;
}

int ListaContigua::getValor(int idx){
    if(idx >= 0 && idx < n)
        return vet[idx];
    cout << "Index inválido";
    return -1;
}

void ListaContigua::setValor(int k, int val){
    
    if(k < 0 || k >= n){
        cout << "Index inválido";
        return;
    }
    vet[k] = val;
}

int ListaContigua::getIndex(int valor){
    for(int i = 0; i < n; i++){
        if(vet[i] == valor)
            return i;
    }
    cout << "Não tem nenhum elemento com esse valor";
    return -1;
}

void ListaContigua::insereK(int k, int val){
    
    int i = n;

    if(k < 0 || k > n){
        cout << "Index inválido";
        return;
    }
    if(n == max){
        realoca();
        cout << "Realoquei o espaço máximo de " << max/2 << " para " << max <<"." << endl;
    }
    while(i > k){
        vet[i] = vet[i - 1];
        i--;
    }

    vet[k] = val;
    n++;
}


void ListaContigua::insereFinal(int val){

    if(n == max){
        realoca();
        cout << "Realoquei o espaço máximo de " << max/2 << " para " << max <<"." << endl;
    }
    vet[n] = val;
    n++;
}

void ListaContigua::removeK(int k){

    int i = k;

    if(k < 0 || k >= n){
        cout << "Index Inválido";
        return;     
    }

    while(i < n - 1){
        vet[i] = vet[i + 1];
        i++;
    }

    n--;
}

void ListaContigua::removeFinal(){
    n--;
}

void ListaContigua::imprimeLista(){

    cout << "[";

    for(int i = 0; i < n; i++){
        if(i < n - 1){
            cout << vet[i] << ", ";
        }
        else{
            cout << vet[i];
        }
    }

    cout << "]" << endl;

}

void ListaContigua::realoca(){

    max *= 2;

    int *newVet = new int[max];

    for(int i = 0; i < n; i++){
        newVet[i] = vet[i];
    }

    delete [] vet;
    vet = newVet;
}