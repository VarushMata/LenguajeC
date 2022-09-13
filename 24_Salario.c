/* Mata Prieto Varush.
   19/02/2020
   Calcula el salario de un trabajador.*/
#include<stdio.h>
int main()
{
	float horas,salario,neto,valor;
	printf("Ingrese las horas trabajadas:\n");
	scanf("%f",&horas);
	printf("Ingrese el valor de la hora:\n");
	scanf("%f",&valor);
	salario=valor*horas;
	neto=salario*0.8;
	printf("El salario neto es: %f",neto);
	return 0;
}
