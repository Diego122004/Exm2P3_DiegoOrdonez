#pragma once
#include <iostream>
#include <vector>
#include "Apuesta.h"

using namespace std;

class Jugador {

	vector<Apuesta*> _apuestas;
	int _id;
	string _nombre;
	int _saldo;
	int _nivH;
public:
	Jugador(vector<Apuesta*> apuestas, int id, string name, int saldo, int level);
	Jugador();
	~Jugador();
	int getID();
	int getSaldo();
	int getNiH();
	void setSaldo(int saldo);
	void toString();
	void sumarSaldo(int saldo);

};
