// Mata Prieto Varush
// 13/06/2020
// Biblioteca que lee un dato y muestra su valor y dirección de memoria
#ifndef _vec_apu_h_
#define _vec_apu_h_

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

void lectura(int *vec);
void visualizar(int *vec);
void sumar(int *vec);

void lectura(int *vec){
	int i;
	for(i=1;i<=10;i++){
		printf("Ingresa el dato\n");
		scanf("%d",vec);
		vec++;	
	}
} 

void visualizar(int *vec){
	int i;
	for(i=1;i<=10;i++){ 
		printf("%d ",*vec);
		vec++;
	}
}

void sumar(int *vec){
	int i,sum=0;
	for(i=1;i<=10;i++){ 
		sum+=*vec;
		vec++;
	}
	printf("La suma es: %d",sum);
}
#endif
