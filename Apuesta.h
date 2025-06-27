#pragma once
#include <iostream>
using namespace std;

class Apuesta {
	int idjugador;
	int tipoJuego;
	int cantidadApostada;
	bool _gano;

public:
	Apuesta(int idJ, int tj, int ca, bool gano);
	Apuesta();
	~Apuesta();
	int getIdJ();
	int getTypJ();
	int getCanA();
	bool getGano();
	
};