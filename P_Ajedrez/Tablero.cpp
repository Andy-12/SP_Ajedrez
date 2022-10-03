#include "Tablero.h"


void Tablero::tablero()
{
	int dimensiones;
	dimensiones = largo * ancho;
	cout << "Tabllero armado: " << dimensiones << " casiilas "<<"\n" << endl;
	
}

void Tablero::turno(int jugador )
{
	if (jugador == 1) {
		cout << "jugada de blanco" << endl;
		jugador = 2;
	}
		
	else {
		cout << "jugada de negro" << endl;
		jugador = 1;
	}
		
}

void Tablero::formacion()

{
	cout << " Peon--Peon--Peon--Peon--Peon--Peon--Peon--Peon " << "\n" << endl;
	cout << " Torre--caballo--alfil--Rey--Reyna--alfil--caballo--Torre " << "\n" << endl;
}
