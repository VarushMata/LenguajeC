//Variable de indirecci�n, guardan direcciones de memoria no dato

#include<stdio.h>
#include<conio.h>

int main(){
	int var=5;
	int *ap;
	
	ap=&var; // asigno la direcci�n de memoria de ap
	
	printf("%d\n",ap);
	printf("%d\n",*ap);
	printf("%d\n",&var);
	printf("%d\n",var);
	
	getch();
	return 0;
}
