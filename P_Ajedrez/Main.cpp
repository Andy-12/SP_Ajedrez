#include "Tablero.h"
#include "Alfil.h"
#include "Caballo.h"
#include "Peon.h"
#include "Rey.h"
#include "Reyna.h"
#include "Torre.h"

int main() {

	Tablero Tb = Tablero();
	Tb.tablero();
	Alfil Al = Alfil();
	Peon Pe = Peon();
	Caballo Ca = Caballo();
	Torre To = Torre();
	Rey Ry = Rey();
	Reyna Rna = Reyna();
	Tb.formacion();
	Al.capturar(To.almacenador());
	Pe.Coronar("f");
	Ca.eliminado();
	Rna.movimiento(5);
	Ry.hake("hake");
	Tb.setjugada("Blanca");
	Tb.turno(1);
	return 0;
}