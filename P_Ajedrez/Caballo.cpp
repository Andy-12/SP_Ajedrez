#include "Caballo.h"
void Caballo::movimiento(int casillas)
{
	desplazamiento = casillas;
	cout << "El Caballo se movio de forma diagonal las casillas: " << desplazamiento << endl;
}

void Caballo::eliminado()
{
	cout << "el Caballo fue capturado"<<endl;
}

void Caballo::capturar(string ficha)
{
	cout << "Caballo capturo a peon: " << ficha << endl;
}
string Caballo::almacenador()
{

	return forma;
}