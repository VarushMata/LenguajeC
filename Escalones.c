/*Mata Prieto Varush
  04/03/2020
  Ingresar el numero de escalones y mostrar el numero de descansos, la altura y la longitud total.*/
#include<stdio.h>
int main()
{
	int escalones,altura,longitudt,descansos;
	printf("Dame el numero de escalones.\n");
	scanf("%d",&escalones);
		descansos=escalones/3;
		altura=escalones*30;
		longitudt=(descansos*60)+((escalones-descansos)*30)+altura;
	printf("La cantidad de descansos es: %d, la longitud es de: %d cm y la altura es de: %d cm",descansos,longitudt,altura);
	return 0;
}
