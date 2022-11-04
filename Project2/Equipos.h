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
	struct Nodequipos
	{
		string codigo_equipo;
		string nombre_equipo;
		Nodenombres* nombres;
		Nodequipos* next;
	};
public:
	//metodos para leer el csv
	void AddEq(string, string);
	void AddNo(string, string);

	//metodo para marcar y agregar cantidad de las estampas
	bool marcar_aumentar(string);
	//metodo para contar el total de estampas
	int estampas_totales();
	//metodo para contar las estampas marcadas
	int estampas_marcadas();	
	//metodo para contar las estampas faltantes
	int estampas_faltantes(int,int);
	//metodo para buscar una estampa segun su codigo
	string buscar_estampa(string);

		
private:
	Nodequipos* equiheader = nullptr;
	Nodenombres* nomheader = nullptr;
};