#pragma once
#define PILHA_CONTIGUA_H

class PilhaContigua{

    private:
        int max;
        int topo;
        int *vet;

    public:
        PilhaContigua(int tam);
        ~PilhaContigua();
        int getTopo();
        void empilha(int val);
        int desempilha();
        bool vazia();
        void getInfo();
};
