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
	//metodo para eliminar la lista
	void eliminar();
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
	//metodo para contar las estampas por equipo
	int contar_estampas_segun_codequipo(string);
	//metodo para obtener el nombre del equipo a partir de un indice
	string obtener_equipo(int);
	//metodo para mostrar estampas repetidas
	string mostrar_repetidas(int,string,bool);
	//metodo para mostrar estampas repetidas con el equipo como condicion
	string mostrar_repetidas_equipo(int,string,bool);
	//metodo para obtener la cantidad de equipos
	int cantidad_equipos();
	//metodo para guardado del album actual
	string guardado(int,int);
		
private:
	Nodequipos* equiheader = nullptr;
	Nodenombres* nomheader = nullptr;
};