#ifndef _COMBUSTIVEL_H
#define _COMBUSTIVEL_H

using namespace std;

class Combustivel
{
private:
	string nome;
	float preco;
public:
	Combustivel(const string &nome, float preco);
	void setNome(const string &nome);
	void setPreco(const string &preco);
	string getNome() const;
	float getPreco() const;
};

#endif
