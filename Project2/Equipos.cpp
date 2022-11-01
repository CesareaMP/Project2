#include "Equipos.h"

void Equipos::AddEq(string codigeq, string nomeq)
{
	Nodequipo* auxe = new Nodequipo();
	auxe->codigo_equipo = codigeq;
	auxe->nombre_equipo = nomeq;
	auxe->nombres = nheader;
	nheader = nullptr;
}

void Equipos::AddNo(string cod, string nom)
{
	Nodenombres* aux = new Nodenombres();
	aux->codigo = cod;
	aux->codigo = nom;
	aux->next = nheader;
	nheader = aux;
}
