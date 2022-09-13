/* Mata Prieto Varush
   19/02/2020
   Introducir una edad y decir si es mayor de edad o no.*/
#include<stdio.h>
int main()
{
	int edad;
	printf("Introduzca una edad:\n");
	scanf("%d",&edad);
	if(edad>=18)
	printf("Es mayor de edad\n");
	else
	printf("Es menor de edad\n");
	return 0;
}
