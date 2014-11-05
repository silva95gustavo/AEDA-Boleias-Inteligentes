#ifndef _ANUNCIO_H
#define _ANUNCIO_H

#include "Membro.h"
#include "Particular.h"
#include "Boleia.h"
#include "Preco.h"
#include "Veiculo.h"
#include <fstream>

using namespace std;

class Anuncio
{
protected:
	string titulo;
	string descricao;
	Coordenadas origem;
	Coordenadas destino;
	vector<Particular*> passageiros; // N�mero total de pessoas no ve�culo = passageiros + 1 (condutor)
	Data dataInicio;
	Data dataFim; // se for igual ao inicio � um evento
	Membro* anunciante;
	Membro* condutor;
	Veiculo* veiculo;
	Preco preco;
	Hora horaInicio;
	Hora horaFim;
	unsigned diaDaSemana; // 0 a 6, para o caso de ser uma boleia peri�dica
public:
	Anuncio();
	Anuncio(const string &titulo, const string &descricao, const Coordenadas &origem, const Coordenadas &destino, const Data &dataInicio, const Data &dataFim);
	string getTitulo() const;
	string getDescricao() const;
	Membro* getAnunciante() const;
	void setTitulo(const string &titulo);
	Membro* getCondutor();
	void setCondutor(Membro *membro);
	Coordenadas getOrigem();
	Coordenadas getDestino();
	void setDescricao(const string &descricao);
	void setAnunciante(Membro *membro);
	void addPassageiro(Particular *membro);
	void calcularPrecoTotal();
	virtual void show() const;
	virtual void load(ifstream &file, vector<Membro *> *membros);
	virtual void save(ofstream &file, vector<Membro *> *membros);
	virtual void criar(vector<Combustivel> *combustiveis);
	virtual void editar() = 0;
	bool isPronto() const;
	bool podeSerPassageiro(Membro* membro) const;
	bool podeSerCondutor(Membro* membro) const;
	friend ostream& operator<<(ostream &os, Anuncio* anuncio);
};

template<class T>
class AnuncioIncompletoException
{
public:
	T info;
	AnuncioIncompletoException(T info)
	{
		this->info = info;
	}
};

#endif
