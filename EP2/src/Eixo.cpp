#include "Eixo.h"
#include "SerieTemporal.h"
#include "Serie.h"
#include "Ponto.h"
#include <iostream>
#include <string>

using namespace std;

Eixo::Eixo(string titulo, double minimo, double maximo): titulo(titulo), minimo(minimo), maximo(maximo)
{
    //ctor
}

Eixo::~Eixo()
{
    //dtor
}

string Eixo::getTitulo(){
    return this->titulo;
}

double Eixo::getMinimo(){
    return this->minimo;
}

double Eixo::getMaximo(){
    return this->maximo;
}
