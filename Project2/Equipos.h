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
		bool marca;
		int cantidad;
		Nodenombres* next;
	};
	struct Nodestampa
	{
		string codigo_equipo;
		string nombre_equipo;
		Nodenombres* nombres;
		Nodestampa* next;
	};
public:
	//metodos para leer el csv
	void AddEq(string, string);
	void AddNo(string, string);

	//metodos para marcar y agregar cantidad de las estampas
	void marcar_aumentar(string);

private:
	Nodestampa* eheader = nullptr;
	Nodenombres* nheader = nullptr;
};