/* Mata Prieto Varush
   19/02/2020
   Calcula el área de un círculo*/
#include<stdio.h>
#define pi 3.1416
int main()
{
	float r,a;
	printf("Introduzca el valor del radio:\n");
	scanf("%f",&r);
	a=pi*(r*r);
	printf("El area del circulo es:%.2f\n",a);
	return 0;
}
