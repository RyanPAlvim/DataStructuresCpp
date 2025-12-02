#pragma once
#define NO_H

template <typename T>
class No{

    private:
        T val;
        No* next;

    public:
        No(T val);
        No* getProx();
        void setProx(No* p);
        T getInfo();

};