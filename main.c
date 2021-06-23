#include<stdio.h>
#include<stdlib.h>

void main ()
{
    int a=0, b=0;
    printf ("Ingrese el primer valor ");
    scanf ("%d",&a);
    printf("Ingrese el segundo valor ");
    scanf("%d", &b);
    system ("cls");
    printf("Los valores ingresados fueron: \n%d\n%d", a, b);
}