#ifndef LISTA_CONTIGUA_H
#define LISTA_CONTIGUA_H

class ListaContigua{

    private:
        int n;
        int max;
        int *vet;
    public:
        ListaContigua(int max);
        ~ListaContigua();
        int getValor(int idx);
        void setValor(int idx, int val);
        int getIndex(int val);
        void insereK(int k, int val);
        void insereFinal(int val);
        void removeK(int k);
        void removeFinal();
        void imprimeLista();
        void realoca();
};

#endif