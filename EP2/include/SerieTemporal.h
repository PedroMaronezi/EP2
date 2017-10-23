#ifndef SERIETEMPORAL_H
#define SERIETEMPORAL_H
#include "Ponto.h"
#include "Serie.h"
#include <iostream>
#define NUMERO_MAXIMO_VALORES 10

using namespace std;


class SerieTemporal: public Serie
{
    public:
        SerieTemporal(string nome, string nomeDoCanalY);
        virtual ~SerieTemporal();
        virtual void adicionar(double x, double y);
        virtual void adicionar(double valor);

    protected:

    private:
        double tempo;
};

#endif // SERIETEMPORAL_H
