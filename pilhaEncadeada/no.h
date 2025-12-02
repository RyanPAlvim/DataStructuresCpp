#pragma once
#define NO_H

template <typename T>
class No{

    private:
        T val;
        No<T>* next;

    public:
        No(T val);
        No<T>* getProx();
        void setProx(No* p);
        T getInfo();

};