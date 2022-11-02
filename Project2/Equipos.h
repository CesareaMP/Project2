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

	//metodo para marcar y agregar cantidad de las estampas
	bool marcar_aumentar(string);
	//metodo para contar el total de estampas
	int total_estampas();


private:
	Nodestampa* eheader = nullptr;
	Nodenombres* nheader = nullptr;
};