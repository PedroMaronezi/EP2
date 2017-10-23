#include "Ponto.h"
#include <iostream>

using namespace std;

Ponto::Ponto(double x, double y)
{
    //ctor
    this->x = x;
    this->y = y;
}

Ponto::~Ponto()
{
    //dtor
}

double Ponto::getX() {
    return this->x;
}

double Ponto::getY() {
    return this->y;
}

void Ponto::imprimir() {
    cout << "(" << this->getX() << ", " << this->getY() << ")" << endl;
}

bool Ponto::eIgual(Ponto *outro){
    double difX, difY;
    difX = this->getX() - outro->getX();
    difY = this->getY() - outro->getY();
    if ((difX < 1e-5 && difX > -1e-5) && (difY < 1e-5 && difY > -1e-5)) {
        return true;
    }
    return false;
}
