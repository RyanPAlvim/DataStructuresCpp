#include <iostream>
#include "listaContigua.cpp"
using namespace std;

int main(){

    ListaContigua listaContigua(10);

    listaContigua.insereFinal(1);
    listaContigua.insereFinal(3);
    listaContigua.insereFinal(2);
    listaContigua.insereFinal(3);
    listaContigua.insereFinal(7);
    listaContigua.insereFinal(0);
    listaContigua.insereFinal(1);

    listaContigua.imprimeLista();

    listaContigua.insereK(1, 10);
    listaContigua.insereK(8, 11);
    listaContigua.insereFinal(2);
    listaContigua.insereFinal(1);

    listaContigua.imprimeLista();
}