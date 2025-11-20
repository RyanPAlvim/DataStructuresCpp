#include <iostream>
#include "listaContiguaCircular.cpp"
using namespace std;

int main(){

    ListaContiguaCircular lista(10, 5);

    lista.insereFinal(1);
    lista.insereFinal(3);
    lista.insereFinal(2);
    lista.insereFinal(3);
    lista.insereFinal(7);
    lista.insereFinal(0);
    lista.insereFinal(1);
    lista.removeK(1);
    lista.insereK(1, 43);
    
    lista.imprimeLista();
    cout << lista.getIndex(43) << endl;
    cout << lista.getValor(1) << endl;
}