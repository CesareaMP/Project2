#pragma once
#include<string>
using namespace std;
using namespace System;
class Equipos
{
	struct Nodenombres
	{
		string codigo;
		string nombre;
		Nodenombres* next;
	};
	struct Nodequipo
	{
		string codigo_equipo;
		string nombre_equipo;
		Nodenombres* nombres;
		Equipos* next;
	};
public:
	void AddEq(string, string);
	void AddNo(string, string);

private:
	Nodequipo* eheader = nullptr;
	Nodenombres* nheader = nullptr;
};