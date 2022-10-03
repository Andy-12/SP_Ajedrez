#pragma once
#include<iostream>
using namespace std;
class Alfil
{
private:

	string forma = "Alfil";
	int desplazamiento;

public:
	void movimiento(int casillas);
	void eliminado();
	void capturar(string ficha);
};

