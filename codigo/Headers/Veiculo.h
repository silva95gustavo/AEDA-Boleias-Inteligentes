#ifndef _VEICULO_H
#define _VEICULO_H

#include <string>
#include "Combustivel.h"
#include <iostream>
#include<fstream>

#include "InputUtils.h"

using namespace std;

class Veiculo
{
private:
	string marca;
	string modelo;
	unsigned mes;
	unsigned ano;
	unsigned cilindrada;
	Combustivel* combustivel;
	unsigned int lotacao;
public:
	Veiculo();
	Veiculo(string marca, unsigned mes, unsigned ano, unsigned cilindrada, Combustivel* combustivel);
	string getMarca() const;
	unsigned getMes() const;
	unsigned getAno() const;
	unsigned getCilindrada() const;
	Combustivel* getCombustivel() const;
	void setMarca(string &marca);
	void setMes(unsigned mes);
	void setAno(unsigned ano);
	void setCilindrada(unsigned cilindrada);
	void load();
	void setCombustivel(Combustivel* combustivel);
	void show() const;
	void criar();
	void editar();

	friend ostream& operator<<(ostream &os, const Veiculo &veiculo);
};

template<class T>
class VeiculoInvalidaException
{
public:
	T info;
	VeiculoInvalidaException(T info)
	{
		this->info = info;
	}
};

#endif
