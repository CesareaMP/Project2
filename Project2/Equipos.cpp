#include "Equipos.h"

void Equipos::AddEq(string codigeq, string nomeq)
{
	Nodequipos* auxe = new Nodequipos();
	auxe->codigo_equipo = codigeq;
	auxe->nombre_equipo = nomeq;
	auxe->nombres = nomheader;
	nomheader = nullptr;
	auxe->next = estheader;
	estheader = auxe;
}

void Equipos::AddNo(string cod, string nom)
{
	Nodenombres* aux = new Nodenombres();
	aux->codigo = cod;
	aux->nombre = nom;
	aux->next = nomheader;
	nomheader = aux;
}

bool Equipos::marcar_aumentar(string code)
{
	Nodequipos* auxestampas = estheader;
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
	Nodequipos* auxestampas = estheader;
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

int Equipos::estampas_marcadas()
{
	int total = 0;

	Nodequipos* auxestampas = estheader;
	Nodenombres* auxnombres = auxestampas->nombres;
	while (auxestampas != nullptr)
	{
		while (auxnombres != nullptr)
		{
			total+=auxnombres->cantidad;
			auxnombres = auxnombres->next;
		}
		if (auxestampas->next == nullptr)
		{
			return total;
		}
		auxestampas = auxestampas->next;
		auxnombres = auxestampas->nombres;
	}
	return 0;
}

int Equipos::estampas_faltantes(int total, int marcadas)
{
	return total-marcadas;
}
