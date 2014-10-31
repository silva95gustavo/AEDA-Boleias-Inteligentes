#ifndef _BOLEIAS_INTELIGENTES_H
#define _BOLEIAS_INTELIGENTES_H

#include "Anuncio.h"
#include <iostream>


class BoleiasInteligentes
{
private:
	vector<Combustivel*>combustiveis;
public:
	Coordenadas criaCoordenadas();
	bool criaMembro();
	Veiculo criaVeiculo();
	bool criaAnuncio();
	Viagem criaViagem();
	Combustivel criacombustivel();
	
};
#endif