#include "arvoreBinaria.h"
#include <queue>
#include <iostream>
using namespace std;

ArvoreBinaria::ArvoreBinaria(){
    raiz = nullptr;
}

void ArvoreBinaria::constroi(int vet[], int tam){
    raiz = constroiPorNiveis(vet, 0, tam - 1);
}

Node* ArvoreBinaria::constroiPorNiveis(int vet[], int inicio, int fim){

    if(inicio > fim) return nullptr;

    Node* p = new Node(vet[inicio]);
    p->setEsq(constroiPorNiveis(vet, 2*inicio + 1, fim));
    p->setDir(constroiPorNiveis(vet, 2*inicio + 2, fim));
    return p;
}

int ArvoreBinaria::profundidadeNo(int val){
    return profundidadeNo(val, raiz, 0);
}

int ArvoreBinaria::profundidadeNo(int val, Node* p, int proAtual){

   if(p == nullptr) return -1;
   if(p->getInfo() == val) return proAtual;
   int esq = profundidadeNo(val, p->getEsq(), proAtual + 1);
   if(esq != -1) return esq;
   return profundidadeNo(val, p->getDir(), proAtual + 1);
   
}

void ArvoreBinaria::imprimeLargura(){
    queue<Node*> fila;
    if(raiz != nullptr){
        fila.push(raiz);
        while(!fila.empty()){
            if(fila.front()->getEsq() != nullptr){
                fila.push(fila.front()->getEsq());
            }
            if(fila.front()->getDir() != nullptr){
                fila.push(fila.front()->getDir());
            }
            cout << fila.front()->getInfo() << " ";
            fila.pop();
        }
    }
}
// Propriedades:
// Se os filhos da raiz são ambos nulls, ela é simétrica
// Se um filha da raiz é null e outro não, ela não é
// Caso os dois filhos da raiz tenha o mesmo valor, ela é simétrica
bool ArvoreBinaria::simetrica(){

    if(raiz == nullptr) return true;

    return auxSimetrica(raiz->getEsq(), raiz->getDir());
}

bool ArvoreBinaria::auxSimetrica(Node* esq, Node* dir){

    if(esq == nullptr && dir == nullptr) return true;

    if(esq == nullptr || dir == nullptr) return false;

    return(
    esq->getInfo() == dir->getInfo() && 
    auxSimetrica(esq->getEsq(), dir->getDir()) && 
    auxSimetrica(esq->getDir(), dir->getEsq())
    );
}

ArvoreBinaria::~ArvoreBinaria(){
    destroi(raiz);
}

void ArvoreBinaria::destroi(Node* p){
    if(p != nullptr){
        destroi(p->getEsq());
        destroi(p->getDir());
        delete p;
    }
}

void ArvoreBinaria::imprime(){
    imprimePreOrdem(raiz);
}

void ArvoreBinaria::imprimePreOrdem(Node* p){
    if(p == nullptr){
        return;
    }
    cout << p->getInfo() << " ";
    imprimePreOrdem(p->getEsq());
    imprimePreOrdem(p->getDir()); 
}

void ArvoreBinaria::imprimeEmOrdem(Node* p){
    if(p == nullptr){
        return;
    }
    imprimePreOrdem(p->getEsq());
    cout << p->getInfo() << " ";
    imprimePreOrdem(p->getDir()); 
}

void ArvoreBinaria::imprimePosOrdem(Node* p){
    if(p == nullptr){
        return;
    }
    imprimePreOrdem(p->getEsq());
    imprimePreOrdem(p->getDir()); 
    cout << p->getInfo() << " ";
}

int ArvoreBinaria::contaNosComFilhos(){
    return contaNosComFilhos(raiz);
}

int ArvoreBinaria::contaNosComFilhos(Node* p){
    if(p == nullptr) return 0;
    if(p->getDir() != nullptr || p->getEsq() != nullptr){
        return contaNosComFilhos(p->getEsq()) + contaNosComFilhos(p->getDir()) + 1;
    }
    return 0;
}

Node* ArvoreBinaria::getRaiz(){
    return raiz;
}

bool ArvoreBinaria::vazia(){
    return raiz == nullptr;
}

Node* ArvoreBinaria::busca(int val){
    return busca(val, raiz);
}

Node* ArvoreBinaria::busca(int val, Node* p){
    if(p == nullptr) return nullptr;
    if(p->getInfo() == val) return p;
    Node* noEsq = busca(val, p->getEsq());
    if(noEsq != nullptr) return noEsq;
    return busca(val, p->getDir());
}