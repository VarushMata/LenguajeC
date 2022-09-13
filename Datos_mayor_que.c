/*  Mata Prieto Varush
	19/02/2020
	Introducir dos números y mostrar el mayor */
#include<stdio.h>
int main()
{
    int d1,d2;
	printf("Dame el primer numero:\n ");
	scanf("%d",&d1);
	printf("Dame el segundo numero:\n");
	scanf("%d",&d2);
	if(d1>d2)
	printf("El dato mayor es: %d\n",d1);
	else
	printf("El dato mayor es: %d\n",d2);
	return 0;
}
