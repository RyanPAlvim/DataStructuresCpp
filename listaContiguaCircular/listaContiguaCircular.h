#ifndef LISTA_CONTIGUA_CIRCULAR_H
#define LISTA_CONTIGUA_CIRCULAR_H

class ListaContiguaCircular{

    private:
        int n;
        int max;
        int *vet;
        int inicio;
    public:
        ListaContiguaCircular(int max, int inicio);
        ~ListaContiguaCircular();
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