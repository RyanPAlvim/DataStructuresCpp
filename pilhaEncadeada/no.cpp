#include <iostream>
#include "no.h"
using namespace std;

No::No(int val){
    this->val = val;
    next = nullptr;
}

int No::getInfo(){ return val; }

void No::setProx(No* p){ this->next = p; }

No* No::getProx(){ return next; }