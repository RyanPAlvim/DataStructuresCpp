#pragma once
#define NODE_H

class Node{

    private:
        Node* esq;
        Node* dir;
        int val;
    public:
        Node(int val): val(val), esq(nullptr), dir(nullptr){};
        ~Node() {};
        Node* getEsq() { return esq; };
        Node* getDir() { return dir; };
        void setEsq(Node* p) { esq = p; };
        void setDir(Node* p) { dir = p; };
        int getInfo() { return val; };
};