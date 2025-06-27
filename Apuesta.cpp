#include "Apuesta.h"
using namespace std;

Apuesta::Apuesta(int idJ, int tj, int ca, bool gano) {

	this->idjugador = idJ;
	this->tipoJuego = tj;
	this->cantidadApostada = ca;
	this->_gano = gano;
};

int Apuesta::getIdJ() {
	return this->idjugador;
};
int Apuesta::getTypJ() {
	return this->tipoJuego;
};
int Apuesta::getCanA() {
	return this->cantidadApostada;
};
bool Apuesta::getGano() {
	return this->_gano;
};