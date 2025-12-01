#include <iostream>
#include "arvoreBinaria.cpp"

#define TAM 10

int main(){

    ArvoreBinaria* arv = new ArvoreBinaria();

    int vet[TAM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    arv->constroi(vet, TAM);

    cout << arv->contaNosComFilhos();
}