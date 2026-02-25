
#include <stdio.h>
int main(){
    // Ejercicio 9
    int a[5];

    printf("La direccion de a[-1] es: %p\n", &a[-1]);
    printf("La direccion de a[5] es: %p\n", &a[5]);

    return 0;
}
// ¿Por qué compila? Porque el lenguaje C no verifica los límites de nuestro arreglo, confía en el programador para no sobrepasarlos
// ¿Por qué es peligroso? a[-1] y a[5] están fuera del límite de nuestro arreglo y puede generar fallos en nuestro programa
// ¿Qué revela sobre memoria? La memoria almacena datos de manera lineal y contigua, confia en el programador para que no cometa errores

