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

void Equipos::eliminar()
{
	equiheader = nullptr;
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
			if (auxnombres->marca==true)
			{
				total++;
			}
			
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

int Equipos::contar_estampas_segun_codequipo(string codequipo)
{
	Nodequipos* auxequi = equiheader;
	bool posicion=false;
	int devolver = 0;
	while (posicion==false)
	{
		if (codequipo==auxequi->codigo_equipo)
		{
			posicion = true;
		}
		else
		{
			auxequi = auxequi->next;
		}	
	}
	Nodenombres* auxnom = auxequi->nombres;
	while (auxnom!=nullptr)
	{
		devolver++;
		if (auxnom->next==nullptr)
		{
			return devolver;
		}
		else
		{
			auxnom = auxnom->next;
		}
	}
	return devolver;
}

string Equipos::obtener_equipo(int pos)
{
	Nodequipos* auxequi = equiheader;
	string codequipo = "";
	while (pos>0)
	{
		codequipo = auxequi->codigo_equipo;
		auxequi = auxequi->next;
		pos--;
	}
	return codequipo;
}

string Equipos::mostrar_repetidas(int cantidad,string codequipo,bool repetidas)
{
	Nodequipos* auxequi = equiheader;
	
	bool repetir = false;
	bool repetir2 = false;
	string escupir;
	while (repetir==false)
	{
		if (codequipo!=auxequi->codigo_equipo)
		{
			auxequi = auxequi->next;
		}
		else
		{
			repetir = true;
		}
	}
	Nodenombres* auxnom = auxequi->nombres;
	while (cantidad>0)
	{
		if (auxnom->marca==repetidas)
		{
			escupir += auxnom->codigo + ",		" + auxnom->nombre + ",		" + std::to_string(auxnom->cantidad) + ";";
		}		
		auxnom = auxnom->next;
		cantidad--;
	}
	return escupir;
}

string Equipos::mostrar_repetidas_equipo(int cantidad, string equipo, bool condicion)
{
	Nodequipos* auxequi = equiheader;
	bool maybe = false;
	string escupir;
	while (maybe==false)
	{
		if (auxequi->codigo_equipo == equipo)
		{
			maybe = true;
		}
		else
		{
			auxequi = auxequi->next;
		}

	}
	Nodenombres* auxnom = auxequi->nombres;
	while (cantidad>0)
	{
		if (auxnom->marca == condicion)
		{
			escupir += auxnom->codigo + ",		" + auxnom->nombre + ",		" + std::to_string(auxnom->cantidad) + ";";
		}
		auxnom = auxnom->next;
		cantidad--;
	}
	return escupir;
}

int Equipos::cantidad_equipos()
{
	Nodequipos* auxequi = equiheader;
	int devolver = 0;
	while (auxequi!=nullptr)
	{
		devolver++;
		auxequi = auxequi->next;
	}
	return devolver;
}

string Equipos::guardado(int is, int seleccionado)
{
	return string();
}
