// Mata Prieto Varush
// 04/03/2020
// Mostrar n términos de la serie de Fibonacci.
#include<stdio.h>
int main()
{
	int x=0,y=1,z=0,i,num;
	printf("Ingrese el numero de digitos en la serie: \n");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		z=x+y;
		x=y;
		y=z;
		printf("%d, ",z);
	}
	return 0;
}
