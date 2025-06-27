#include "Jugador.h"
using namespace std;

Jugador::Jugador(vector<Apuesta*> apuestas, int id, string name, int saldo, int level) {

	this->_apuestas = apuestas;
	this-> _id= id;
	this->_nombre = name;
	this->_saldo = saldo;
	this->_nivH = level;

};
Jugador::~Jugador() {};
int Jugador::getID() {
	return this->_id;
};
int Jugador::getSaldo() {
	return this->_saldo;
};
int Jugador::getNiH() {
	return this->_nivH;
};
void Jugador::setSaldo(int saldo) {
	saldo = this->_saldo;
};
void Jugador::toString() {
	cout<< this->_id << this->_nombre << this->_saldo << this->_nivH;
};
void Jugador::sumarSaldo(int saldo) {
	this->_saldo += saldo;
};