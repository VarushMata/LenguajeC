/* Mata Prieto Varush.
   21/02/2020.
   Mostrar el mayor de 3 numeros*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Ingrese el primer numero: ");
    scanf("%d",&a);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&b);
    printf("Ingrese el tercer numero: ");
    scanf("%d",&c);
    if(a>b&&a>c)
    printf("El mayor es: %d",a);
    if(b>a&&b>c)
    printf("El mayor es: %d",b);
    if(c>a&&c>b)
    printf("El mayor es: %d",c);
    if(a==b&&a==c)
    printf("Son iguales");
    return 0;
}
