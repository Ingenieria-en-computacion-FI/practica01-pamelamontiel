#include <stdio.h>
//Ejercicio 3

int main(){
    int a[3];
    int b[3];
    int c[3];

    for (int i=0; i<3; i++)
    {
        printf("La direccion de memoria de a[%i] es %p\n", i, &a[i]);
    }
    printf("\n");

    for (int i=0; i<3; i++)
    {
        printf("La direccion de memoria de b[%i] es %p\n", i, &b[i]);
    }
    printf("\n");

    for (int i=0; i<3; i++)
    {
        printf("La direccion de memoria de c[%i] es %p\n", i, &c[i]);
    }
    printf("\n");

    return 0;
}
