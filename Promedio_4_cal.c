/* Mata Prieto Varush
   19/02/2020
   Calcula el promedio de 4 calificaciones*/
#include<stdio.h>
int main()
{
	float c1,c2,c3,c4,prom;
	printf("Introduzca la primer calificacion:\n");
	scanf("%f",&c1);
	printf("Introduzca la segunda calificacion:\n");
	scanf("%f",&c2);
	printf("Introduzca la tercer calificacion:\n");
	scanf("%f",&c3);
	printf("Introduzca la cuarta calificacion:\n");
	scanf("%f",&c4);
	prom=(c1+c2+c3+c4)/4;
	printf("El promedio es: %.2f",prom);
	return 0;
	
}
