#include "EixoDinamico.h"

EixoDinamico::EixoDinamico(double minimoPadrao, double maximoPadrao, Serie *base, bool orientacaoHorizontal)
{
    //ctor
    if (base->getQuantidade() < 2 || base->getLimiteInferior()->eIgual(base->getLimiteSuperior())){
        this->minimoDinamico = minimoPadrao;
        this->maximoDinamico = maximoPadrao;
    }
}

EixoDinamico::~EixoDinamico()
{
    //dtor
}
