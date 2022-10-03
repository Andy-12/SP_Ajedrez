#pragma once
#include<iostream>
using namespace std;
class Tablero
{
protected:
    const int largo=8;
	const int ancho = 8;
	int  jugador;
	string ficha;
	string casillaFinal="f";
	string casillaInicial = "i";

public:
	void setjugada(string _ficha){
		ficha = _ficha;
		}
	string getJugada() {
		return ficha;
	}
	void tablero();
	void turno(int jugador);
	void formacion();

};

