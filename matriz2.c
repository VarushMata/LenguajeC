// Mata Prieto Varush.
// 29/05/2020
// Ejecuta el programa con las variables ya definidas dentro del main,
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void lectura(int matriz[5][5]);
void sumadiag(int matriz[5][5]); 
void sumadiaginv(int matriz[5][5]);
void perimetro(int matriz[5][5]);

//int matriz[5][5];   //global

int main(){
	
	int matriz[5][5];
	lectura(matriz);
	sumadiag(matriz);
	sumadiaginv(matriz);
	perimetro(matriz);

	getch(); 
	return 0;
}

void lectura(int matriz[5][5]){
	int i,j;
	for(i=0;i<5;i++){ 				// filas
		for(j=0;j<5;j++){ 				// columnas
			printf("\nIngresa eldato %d, %d: ",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	for(i=0;i<5;i++){   		 // filas
		for(j=0;j<5;j++){ 			// columnas
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
}

void sumadiag(int matriz[5][5]){
	
	int i,j,acumd=0;
	for(i=0;i<5;i++){ // filas
		for(j=0;j<5;j++){ // columnas
			if(i==j)
				acumd+=matriz[i][j];
		}
	}
	printf("\nLa suma de la diagonal principal es: %d",acumd);
}

void sumadiaginv(int matriz[5][5]){
	
	int i,j,acumdinv=0;
	for(i=0;i<5;i++){ // filas
		for(j=0;j<5;j++){ // columnas
			if(i+j==4)
				acumdinv+=matriz[i][j];
		}
	}
	printf("\nLa suma de la diagonal inversa es: %d",acumdinv);
}

void perimetro(int matriz[5][5]){
	
	int i,j,acumper=0;
	for(i=0;i<5;i++){ // filas
		for(j=0;j<5;j++){ // columnas
			if(i==0||j==0||i==4||j==4)
				acumper+=matriz[i][j];
		}
	}
	printf("\nLa suma del perimetro es: %d",acumper);
}	

