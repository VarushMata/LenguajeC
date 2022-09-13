// Mata Prieto Varush
// 13/06/2020
// Lee un dato y muestra su valor y dirección de memoria
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

	int vector[5];
	int i;
	
	for(i=0;i<=5;i++){
		printf("Dame el dato\n");
		scanf("%d",&vector[i]);
	}
	for(i=0;i<=5;i++)
		printf("%d",vector[i]);
	
	getch();
	
	return 0;
	
}
