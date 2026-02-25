
#include <stdio.h>
int main(){
    // Ejercicio 10
    int gigante[1000000];

    return 0;
}

// ¿Por que falla? El arreglo intenta reservar 40 MB y la capacidad maxima de la Pila(Stack) es de 8MB
//¿Donde se almacena? Toda variable declarada en main (), se guarda en la pila (Stack)
// ¿Solución? Declararla como una variable global
