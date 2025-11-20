#pragma once
#define NO_H

class No{

    private:
        int val;
        No* next;

    public:
        No(int val);
        No* getProx();
        void setProx(No* p);
        int getInfo();

};