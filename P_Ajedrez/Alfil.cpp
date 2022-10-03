#include "Alfil.h"
#include "Peon.h"

void Alfil::movimiento(int casillas)
{
	desplazamiento = casillas;
	cout << "El alfil se movio de forma diagonal las casillas: " << desplazamiento << endl;
}

void Alfil::eliminado()
{
	cout << "el alfil fue capturado";
}

void Alfil::capturar(string ficha )
{
	cout << "alfil capturo a : " <<ficha<<endl ;
}
