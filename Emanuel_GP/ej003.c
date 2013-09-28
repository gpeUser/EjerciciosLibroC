/**********************************************************************
 *                          Grupo de Estudio C
 * Autor:          Emanuel GP
 * Libro:          Introduccion a la programacion con C
 * Semana:         1
 * Tema:           [I]: Introduccion a C
 * Ejercicio:      3
 **********************************************************************/

#include <stdio.h>

void main(void){
   int n, m;
   
   printf("\nDame un numero: ");
   scanf("%d", &n);
   printf("\nDame otro numero: ");
   scanf("%d", &m);
   
   if((n*m)==100){
      printf("\n\nEl producto de %d * %d es igual a 100\n", n, m);
   }
   else{
      printf("\n\nEl producto de %d * %d es distinto de 100\n", n, m);
   }
}
