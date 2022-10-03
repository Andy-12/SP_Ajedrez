#include "Torre.h"
void Torre::movimiento(int casillas)
{
	desplazamiento = casillas;
	cout << "La Torre se movio de forma diagonal las casillas: " << desplazamiento << endl;
}

void Torre::eliminado()
{
	cout << "La torre fue capturada";
}

void Torre::capturar(string ficha)
{
	cout << "La torre capturo a : " << ficha << endl;
}
string Torre::almacenador()
{

	return forma;
}