#include "SerieTemporal.h"
#include "Serie.h"
#include "Ponto.h"
#include <iostream>
#include <string>

using namespace std;

SerieTemporal::SerieTemporal(string nome, string nomeDoCanalY) : Serie (nome, "Tempo", nomeDoCanalY)
{
    //ctor
    this->tempo = 0;
}

SerieTemporal::~SerieTemporal()
{
    //dtor
}

void SerieTemporal::adicionar(double valor){
    if (this->getQuantidade() < NUMERO_MAXIMO_VALORES){
        this->tempo++;
        double difX;
        bool adicionado = false;
        for (int i = 0; i < this->getQuantidade() && adicionado == false; i++){
            difX = this->vetorPontos[i]->getX() - this->tempo;
            if (difX < 1e-5 && difX > -1e-5){
                delete this->vetorPontos[i];
                this->vetorPontos[i] = new Ponto(this->tempo, valor);
                this->tamanho++;
                adicionado = true;
            }
        }
        if (adicionado == false){
            this->vetorPontos[tamanho] = new Ponto(this->tempo, valor);
            this->tamanho++;
        }
    }
}

void SerieTemporal::adicionar(double x, double y){
    if (this->getQuantidade() < NUMERO_MAXIMO_VALORES){
        double difX;
        bool adicionado = false;
        for (int i = 0; i < this->getQuantidade() && adicionado == false; i++){
            difX = this->vetorPontos[i]->getX() - this->tempo;
            if (difX < 1e-5 && difX > -1e-5){
                delete this->vetorPontos[i];
                this->vetorPontos[i] = new Ponto(x, y);
                this->tamanho++;
                adicionado = true;
            }
        }
        if (adicionado == false){
            this->vetorPontos[tamanho] = new Ponto(x, y);
            this->tamanho++;
        }
    }
}
