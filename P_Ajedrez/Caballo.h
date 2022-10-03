#pragma once
#include<iostream>
using namespace std;
class Caballo
{
	private:
		string forma=" Caballo ";

		int desplazamiento;

	public:
		void movimiento(int casillas);

		void capturar(string ficha);
		void eliminado();
		string almacenador();
};

