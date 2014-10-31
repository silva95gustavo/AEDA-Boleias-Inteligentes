#ifndef _ANUNCIO_OFERTA_H
#define _ANUNCIO_OFERTA_H

#include "Anuncio.h"
#include <vector>

using namespace std;

class AnuncioOferta: public Anuncio
{
private:
	Membro* anunciante;
public:
	AnuncioOferta(const string &titulo, const string &descricao, Preco* precoTotal, Viagem* viagem, Membro* anunciante);
	void setAnunciante(Membro* anunciante);
	Membro* getAnunciante() const;
};

#endif
