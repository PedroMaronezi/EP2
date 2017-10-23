#include "Serie.h"
#include "Ponto.h"
#include <iostream>
#include <string>

using namespace std;

Serie::Serie(string nome, string nomeDoCanalX, string nomeDoCanalY)
{
    //ctor
    this->nome = nome;
    this->nomeDoCanalX = nomeDoCanalX;
    this->nomeDoCanalY = nomeDoCanalY;
    this->tamanho = 0;
}

Serie::~Serie()
{
    //dtor
}

string Serie::getNome(){
    return this->nome;
}

string Serie::getNomeDoCanalX(){
    return this->nomeDoCanalX;
}

string Serie::getNomeDoCanalY(){
    return this->nomeDoCanalY;
}

int Serie::getQuantidade(){
    return this->tamanho;
}

bool Serie::estaVazia(){
    if ( this->getQuantidade() == 0){
        return true;
    }
    return false;
}

void Serie::adicionar(double x, double y){
    if (this->getQuantidade() < NUMERO_MAXIMO_VALORES){
        this->vetorPontos[tamanho] = new Ponto(x,y);
        this->tamanho++;
    }
}

Ponto* Serie::getLimiteSuperior(){
    if (this->estaVazia()){
        return NULL;
    }
    double maximoX = this->vetorPontos[0]->getX();
    double maximoY = this->vetorPontos[0]->getY();
    for (int i = 1; i< this->getQuantidade(); i++){
        if (this->vetorPontos[i]->getX() > maximoX){
            maximoX = this->vetorPontos[i]->getX();
        }
        if (this->vetorPontos[i]->getY() > maximoY){
            maximoY = this->vetorPontos[i]->getY();
        }
    }
    return new Ponto(maximoX, maximoY);
}

Ponto* Serie::getLimiteInferior(){
    if (this->estaVazia()){
        return NULL;
    }
    double minimoX = this->vetorPontos[0]->getX();
    double minimoY = this->vetorPontos[0]->getY();
    for (int i = 1; i< this->getQuantidade(); i++){
        if (this->vetorPontos[i]->getX() < minimoX){
            minimoX = this->vetorPontos[i]->getX();
        }
        if (this->vetorPontos[i]->getY() < minimoY){
            minimoY = this->vetorPontos[i]->getY();
        }
    }
    return new Ponto(minimoX, minimoY);
}

Ponto* Serie::getPosicao(int posicao){
    if (posicao >=0 && posicao <= this->getQuantidade()){
        return new Ponto(vetorPontos[posicao]->getX(), vetorPontos[posicao]->getY());
    }
    return NULL;
}

void Serie::imprimir(){
    cout << "Serie: " << this->getNome() << endl;
    for (int i; i < this->getQuantidade(); i++){
        cout << "(" << vetorPontos[i]->getX() << ", " << vetorPontos[i]->getY() << ")" << endl;
    }
}
