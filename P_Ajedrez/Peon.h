#pragma once
#include <iostream>

using namespace std;
 
class Peon
{
private:
	string forma=" Peon ";
	
	int desplazamiento;
	string final = "f";
	
public:
	void movimiento(string casilla);
	void Coronar(string casiilaf);
	void capturar(string ficha);
	void eliminado();
	string almacenador();
};

