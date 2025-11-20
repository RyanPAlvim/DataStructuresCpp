#include "pilhaContigua.h"
#include <iostream>
using namespace std;

PilhaContigua::PilhaContigua(int max){

    vet = new int[max];
    this->max = max;
    topo = -1;
}

PilhaContigua::~PilhaContigua(){
    delete [] vet;
}

void PilhaContigua::empilha(int val){
    if(topo == (max - 1)){
        return;
    }

    vet[topo+1] = val;
    topo++;
}

int PilhaContigua::desempilha(){
    if(vazia()){
        return 0;
    }

    int val = vet[topo];
    
    topo--;

    return val;
}

int PilhaContigua::getTopo(){
    if(topo == -1){
        return 0;
    }

    return vet[topo];
}

bool PilhaContigua::vazia(){
    return topo == -1;
}

void PilhaContigua::getInfo(){
    for(int i = 0; i <= topo; i++){
        cout << vet[i] << (i != topo ? "," : ".");
    }

    cout << endl << "O topo é: " << getTopo() << endl;
}
