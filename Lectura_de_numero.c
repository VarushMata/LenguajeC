/*Mata Prieto Varush 
17/02/2020 
Realiza la lectura de un número y lo muestre.*/
#include<stdio.h>
int main()
{ 
	int dato1;
	printf("Dame el valor del dato 1\n");
	scanf("%d",&dato1);   				//Se usa %d porque es una variable entera.
    printf("El dato es:%d\n",dato1);    //El %d se usa para indicar la posición de la lectura.
	return 0;
}
