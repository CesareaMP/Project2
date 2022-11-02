#include "Equipos.h"

void Equipos::AddEq(string codigeq, string nomeq)
{
	Nodestampa* auxe = new Nodestampa();
	auxe->codigo_equipo = codigeq;
	auxe->nombre_equipo = nomeq;
	auxe->nombres = nheader;
	nheader = nullptr;
	auxe->next = eheader;
	eheader = auxe;
}

void Equipos::AddNo(string cod, string nom)
{
	Nodenombres* aux = new Nodenombres();
	aux->codigo = cod;
	aux->nombre = nom;
	aux->next = nheader;
	nheader = aux;
}

bool Equipos::marcar_aumentar(string code)
{
	Nodestampa* auxestampas = eheader;
	Nodenombres* auxnombres = auxestampas->nombres;
	while (auxestampas!=nullptr)
	{
		while (auxnombres!=nullptr)
		{
			if (code == auxnombres->codigo)
			{
				auxnombres->marca = true;
				auxnombres->cantidad++;
				return true;
			}
			auxnombres = auxnombres->next;
		}
		if (auxestampas->next==nullptr)
		{
			return false;
		}
		else
		{
			auxestampas = auxestampas->next;
			auxnombres = auxestampas->nombres;
		}
	}
	return false;
}

int Equipos::total_estampas()
{
	int total = 0;
	Nodestampa* auxestampas = eheader;
	Nodenombres* auxnombres = auxestampas->nombres;
	while (auxestampas != nullptr)
	{
		while (auxnombres != nullptr)
		{
			total++;
			auxnombres = auxnombres->next;
		}
		if (auxestampas->next==nullptr)
		{
			return total;
		}
		auxestampas = auxestampas->next;
		auxnombres = auxestampas->nombres;
	}
	return 0;
}
