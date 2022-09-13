// Mata Prieto Varush
// 13/06/2020
// Llama la biblioteca ejecuta_vector

#include"vec_apu.h"

int main()
{
	
	int vector[10];
	lectura(&vector[0]);
	visualizar(&vector[0]);
	sumar(&vector[0]);

	getch(); 
	return 0;
}

