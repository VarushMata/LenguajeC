/* Mata Prieto Varush
   21/02/2020
   */
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Ingrese tres numeros\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a==b&&a==c)
        printf("Los tres son iguales.\n");
    else
        if(a>b&&a>c)
            printf("El mayor es %d",a);
                else
                    if(b>c)
                        printf("El mayor es %d",b);
                    else
                        printf("El mayor es %d",c);
    return 0;
}
