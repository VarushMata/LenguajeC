// Mata Prieto Varush.
// 29/05/2020
// Ejecuta el programa usando solo la función principal y la biblioteca.
#include"matriz.h"

int main()
{
	
	int matriz[5][5];
	lectura(matriz);
	sumadiag(matriz);
	sumadiaginv(matriz);
	perimetro(matriz);
	getch(); 
	return 0;
}

