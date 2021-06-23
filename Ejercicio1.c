#include<stdio.h>
#include<stdlib.h>

void main ()
{
    int a=0, b=0;
    printf ("Ingrese el primer valor ");//Debo respetar los espacios entre las comillas
    scanf ("%d",&a);
    printf("Ingrese el segundo valor ");
    scanf("%d", &b);
    /*system ("cls");
utilizo esto para cometar mas de una linea*/
    system("color 3A");
    printf("Los valores ingresados fueron: \n%d\n%d", a, b);
}