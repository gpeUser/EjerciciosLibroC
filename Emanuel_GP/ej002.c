/**********************************************************************
 *                          Grupo de Estudio C
 * Autor:          Emanuel GP
 * Libro:          Introduccion a la programacion con C
 * Semana:         1
 * Tema:           [I]: Introduccion a C
 * Ejercicio:      2
 **********************************************************************/

#include <stdio.h>

void main(void){
   int a, b, maximo;
   
   printf("\nDame el primer numero: ");
   scanf("%d", &a);
   printf("\nDame el segundo numero: ");
   scanf("%d", &b);
   
   if(a >= b){
      maximo = a;
   }
   else{
      maximo = b;
   }
   
   printf("\n\nEl maximo es: %d\n\n", maximo);
}
