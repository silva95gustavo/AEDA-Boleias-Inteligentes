#ifndef _HORA_H
#define _HORA_H

using namespace std;

class Hora
{
private:
	unsigned hora;
	unsigned minuto;
public:
	Horas();
	Horas(unsigned hora, unsigned minuto);
	unsigned getHora() const;
	unsigned getMinuto() const;
	void setHora(unsigned hora);
	void setMinuto(unsigned minuto);
	bool operator<(const Hora &horas);
};

#endif
