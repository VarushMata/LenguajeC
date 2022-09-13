/* Mata Prieto Varush
   19/02/2020
   Introducir 3 numeros y mostrar el mayor.*/
#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Dame el primer numero\n");
	scanf("%d",&n1);
	printf("Dame el segundo numero\n");
	scanf("%d",&n2);
	printf("Dame el tercer numero\n");
	scanf("%d",&n3);
	if(n1>n2)
	{
	if(n1>n3)
	printf("%d es el mayor",n1);
	else
	printf("%d es el mayor",n3);
	}
	else
	{
	if(n2>n3)
	printf("%d es el mayor",n2);
	else
	printf("%d es el mayor",n3);
	}
	return 0;
}
