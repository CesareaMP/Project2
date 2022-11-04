#include "Equipos.h"

void Equipos::AddEq(string codigeq, string nomeq)
{
	Nodequipos* auxe = new Nodequipos();
	auxe->codigo_equipo = codigeq;
	auxe->nombre_equipo = nomeq;
	auxe->nombres = nomheader;
	nomheader = nullptr;
	auxe->next = equiheader;
	equiheader = auxe;
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
	Nodequipos* auxestampas = equiheader;
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

int Equipos::estampas_totales()
{
	int total = 0;
	Nodequipos* auxestampas = equiheader;
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

	Nodequipos* auxestampas = equiheader;
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

string Equipos::buscar_estampa(string code)
{
	Nodequipos *auxequi = equiheader;
	Nodenombres* auxnom = auxequi->nombres;
	if (code.length()>5)
	{
		while (auxequi!=nullptr)
		{
			while (auxnom!=nullptr)
			{
				if (auxnom->nombre==code)
				{
					return auxequi->nombre_equipo + "," + auxnom->codigo + "," + auxnom->nombre + "," + std::to_string((auxnom->cantidad));
				}
				auxnom = auxnom->next;
			}
			if (auxequi->next == nullptr)
			{
				return "No existe la estampa";
			}
			auxequi = auxequi->next;
			auxnom = auxequi->nombres;			
		}
	}
	else
	{
		while (auxequi != nullptr)
		{
			while (auxnom != nullptr)
			{
				if (auxnom->codigo == code)
				{
					return auxequi->nombre_equipo + "," + auxnom->codigo + "," + auxnom->nombre + "," + std::to_string((auxnom->cantidad));
				}
				auxnom = auxnom->next;
			}
			if (auxequi->next == nullptr)
			{
				return "No existe la estampa";
			}
			auxequi = auxequi->next;
			auxnom = auxequi->nombres;
		}
	}
}
