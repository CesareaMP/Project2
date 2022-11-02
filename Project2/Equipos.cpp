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

void Equipos::marcar_aumentar(string code)
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
			}
			auxnombres = auxnombres->next;
		}
		auxestampas = auxestampas->next;
	}
}
