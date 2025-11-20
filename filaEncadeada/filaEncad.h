#pragma once
#define FILA_CIRCULAR_H
#include "no.h"

class FilaEncad {

    private:
        Node *inicio;
        Node *fim;
    
    public:
        FilaEncad();
        ~FilaEncad();
        int desenfilera();
        void enfilera(int val);
        bool estaVazia();
};