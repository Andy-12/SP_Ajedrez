#pragma once
#include<iostream>
using namespace std;
class Rey
{
private:
	string forma= " Rey ";
	int desplazamiento;
	string mate ;

public:
	void movimiento(int casillas);
	void enrroque();
	void capturar(string ficha);
	void hake(string mate);
	void enemigo();
	string almacenador();
};

