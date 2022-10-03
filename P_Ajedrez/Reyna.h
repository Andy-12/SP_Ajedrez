#pragma once
#include<iostream>
using namespace std;
class Reyna
{
private:
	string forma=" Reyna ";

	int desplazamiento;

public:
	void movimiento(int casillas);
	void capturar(string ficha);
	void eliminado();
	string almacenador();
};

