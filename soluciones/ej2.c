#include <stdio.h>
//Ejercicio 2

//Sin ejecutar determina cuál dirección es mayor:
//La dirección de &a[5] porque la del &a[4] va siempre antes que la del &a[5] en la memoria.

int main() {
    int a[5];

    printf("La direccion de memoria de a[4] es: %p\n", &a[4]);
    printf("La direccion de memoria de v[5] es: %p\n", &a[5]);

    if (&a[4] < &a[5]){
        printf("La direccion de a[5] es mayor que la de a[4]\n");
    }
    else if (&a[4] > &a[5]){
        printf("La direccion de a[4] es mayor que la de a[5]\n");
    }
    return 0;
}

