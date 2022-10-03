#include "Peon.h"


void Peon::movimiento(string casilla)
{
   
    if (casilla == "i") {
        desplazamiento = 2;
        cout << "avanzo su peon 2 cassillas" << endl;
    }
    else {
        desplazamiento = 1;
        cout << " avanzo el peon 1 casiila" << endl;
    }
        
}

void Peon::Coronar(string casillaf)
{
    if (casillaf == final) {
        cout << "Puede tomar la forma de una ficha que no sea Peon o Rey "<<endl;

    }
}

void Peon::capturar(string ficha)
{
    cout << "capturar a alguien en su diagonal:  "<<ficha << endl;
}

void Peon::eliminado()
{
    cout << "fue eliminado" << endl;
}

string Peon::almacenador()
{

   return forma ;
}
