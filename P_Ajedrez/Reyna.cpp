#include "Reyna.h"
void Reyna::movimiento(int casillas)
{
	desplazamiento = casillas;
	cout << "La Reyna se movio de forma diagonal las casillas: " << desplazamiento << endl;
}

void Reyna::eliminado()
{
	cout << "la Reyna fue capturada";
}

void Reyna::capturar(string ficha)
{
	cout << "La Reyna capturo a : " << ficha << endl;
}
string Reyna::almacenador()
{

	return forma;
}