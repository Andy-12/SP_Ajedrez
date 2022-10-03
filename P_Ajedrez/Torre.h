#pragma once
#include<iostream>
using namespace std;
class Torre
{
private:
	string forma=" Torre ";

	int desplazamiento;

public:
	void movimiento(int casillas);
	void eliminado();
	void capturar(string ficha);
	string almacenador();
};

