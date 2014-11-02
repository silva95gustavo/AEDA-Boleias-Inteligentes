#include "../headers/Preco.h"

Preco::Preco(float combustivel, float desgaste, const vector<pair<string, float>> &outrasDespesas)
{
	this->combustivel = combustivel;
	this->desgaste = desgaste;
}

float Preco::getCombustivel() const
{
	return combustivel;
}

float Preco::getDesgaste() const
{
	return desgaste;
}

vector<pair<string, float>> Preco::getOutrasDespesas() const
{
	return outrasDespesas;
}

ostream& operator<<(ostream &os, const Preco &preco)
{
	os << "Combustivel: " << preco.getCombustivel() << endl;
	os << "Desgaste: " << preco.getDesgaste() << endl;
	vector<pair<string, float>> outrasDespesas = preco.getOutrasDespesas();
	for (size_t i = 0; i < outrasDespesas.size(); ++i)
	{
		os << outrasDespesas[i].first << ": " << outrasDespesas[i].second << endl;
	}
	return os;
}

void Preco::show() const
{
	cout << "Combustivel: " << combustivel << endl;
	cout << "Desgaste: " << desgaste << endl;
	for (size_t i = 0; i < outrasDespesas.size(); ++i)
	{
		cout << outrasDespesas[i].first << ": " << outrasDespesas[i].second << endl;
	}
}

float Preco::calcularTotal() const
{
	float total = combustivel + desgaste;
	for (size_t i = 0; i < outrasDespesas.size(); ++i)
	{
		total += outrasDespesas[i].second;
	}
	return total;
}