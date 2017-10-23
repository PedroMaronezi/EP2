#ifndef EIXODINAMICO_H
#define EIXODINAMICO_H
#include "SerieTemporal.h"
#include "Serie.h"
#include "Ponto.h"
#include "Eixo.h"
#include <iostream>
#include <string>

using namespace std;

class EixoDinamico: public Eixo
{
    public:
        EixoDinamico(double minimoPadrao, double maximoPadrao, Serie *base, bool orientacaoHorizontal);
        virtual ~EixoDinamico();

    protected:

    private:
        double minimoDinamico;
        double maximoDinamico;
        Serie* base;
};

#endif // EIXODINAMICO_H
