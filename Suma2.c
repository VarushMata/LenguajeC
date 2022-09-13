/*Mata Prieto Varush 
17/02/2020 
Lee dos valores y los suma.*/
#include<stdio.h>
int main()
{
	int dato1,dato2;
	printf("Ingrese el primer numero:\n");
	scanf("%d",&dato1);
	printf("Ingrese el segundo numero:\n");
	scanf("%d",&dato2);
	dato1+=dato2; 							//Se utiliza esta expresión para ahorrarnos una variable.
	printf("La suma es: %d\n",dato1);
	return 0;
}
