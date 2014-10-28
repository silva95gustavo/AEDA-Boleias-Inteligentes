#ifndef _ANUNCIO_H
#define _ANUNCIO_H

#include "Membro.h"
#include "Particular.h"
#include "Viagem.h"

using namespace std;

class Anuncio
{
private:
	string titulo;
	string descricao;
	vector<Particular *> candidatos;
	float precoTotal;
	Viagem* viagem;
public:
	Anuncio(const string &titulo, const string &descricao, float precoTotal, Viagem* viagem);
	string getTitulo() const;
	string getDescricao() const;
	Coordenadas getOrigem() const;
	Coordenadas getDestino() const;
	//virtual Membro* getAnunciante() const = 0;
	void setTitulo(const string &titulo);
	void setDescricao(const string &descricao);
	void setOrigem(Coordenadas &o) const;
	void setDestino(Coordenadas &d) const;
	//virtual void setAnunciante() const = 0;
	void adicionarCandidato(Particular* candidato);
	void aceitarCandidato(Particular* candidato);
	void removerCandidato(Particular* candidato);
	void calcularPrecoTotal();
};

#endif
