
#include <stdio.h>
 int main(){
 // Ejerciciol
 int a[6];
 for (int i=0; i<6; i++){
 printf(" La direccion de a [%d] es: %x\n", i, &a[i]);
 }
 return 0;
 }
