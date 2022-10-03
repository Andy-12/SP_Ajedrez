#include "Rey.h"
void Rey::movimiento(int casillas)
{
	desplazamiento = casillas;
	cout << "El Rey se movio de forma diagonal las casillas: " << desplazamiento << endl;
}

void Rey::enrroque()
{
	cout << "cambia el posicionamiento del rey con  la torre " << endl;
}

void Rey::capturar(string ficha)
{
	cout << "Rey capturo a : " << ficha << endl;
}




void Rey::hake(string mate)
{
	if (mate == "mate")
		cout << "Hake mate 'Fin del juego' " << endl;
	else
		cout << " Hake " << endl;
}

void Rey::enemigo()
{
	cout << " los Reyes nose pueden acercar";
}

	
string Rey::almacenador()
{

	return forma;
}