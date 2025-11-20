#pragma once
#define FILA_CIRCULAR_H

class FilaCircular {

    private:
        int inicio;
        int fim;
        int n;
        int *vet;
        int max;
    public:
        FilaCircular(int max, int inicio);
        ~FilaCircular();
        int getInicio();
        int desenfilera();
        void enfilera(int val);
        bool estaVazia();
};