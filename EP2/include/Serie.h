#ifndef SERIE_H
#define SERIE_H
#include "Ponto.h"
#include <iostream>
#define NUMERO_MAXIMO_VALORES 10

using namespace std;

class Serie
{
    public:
        Serie(string nome, string nomeDoCanalX, string nomeDoCanalY);
        virtual ~Serie();
        virtual string getNome();
        virtual string getNomeDoCanalX();
        virtual string getNomeDoCanalY();
        virtual int getQuantidade();
        virtual bool estaVazia();
        virtual void adicionar(double x, double y);
        virtual Ponto* getLimiteSuperior();
        virtual Ponto* getLimiteInferior();
        virtual Ponto* getPosicao(int posicao);
        virtual void imprimir();

    protected:
        string nome;
        string nomeDoCanalX;
        string nomeDoCanalY;
        int tamanho;
        Ponto *vetorPontos [NUMERO_MAXIMO_VALORES];

    private:
};

#endif // SERIE_H
