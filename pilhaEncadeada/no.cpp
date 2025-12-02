#include <iostream>
#include "no.h"
using namespace std;

template<typename T>
No<T>::No(T val){
    this->val = val;
    next = nullptr;
}

template<typename T>
T No<T>::getInfo(){ return val; }

template<typename T>
void No<T>::setProx(No* p){ this->next = p; }

template<typename T>
No<T>* No<T>::getProx(){ return next; }