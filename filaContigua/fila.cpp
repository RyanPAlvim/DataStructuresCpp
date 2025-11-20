#include "fila.h"
#include <iostream>
using namespace std;

FilaCiruclar::FilaCiruclar(int max, int inicio)
{
    this->max = max;
    this->inicio = inicio;
    n = 0;
    vet = new int[max];
};

FilaCiruclar::~FilaCiruclar()
{
    delete vet;
}

void FilaCiruclar::enfilera(int val)
{
    if (n == max)
        cout << "FilaCiruclar cheia!";

    vet[fim] = val;
    fim = (fim + 1) % max;
    n++;
}

int FilaCiruclar::desenfilera()
{
    if (n == 0)
    {
        cout << "Fila Vazia!" << endl;
        return 0;
    }
    int tmp = vet[inicio];
    inicio = (inicio + 1) % max;
    n--;
    return tmp;
}

int FilaCiruclar::getInicio()
{
    return inicio;
}

bool FilaCiruclar::estaVazia()
{
    return n == 0;
}