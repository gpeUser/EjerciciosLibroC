/**********************************************************************
 *                          Grupo de Estudio C
 * Autor:          Emanuel GP
 * Libro:          Introduccion a la programacion con C
 * Semana:         1
 * Tema:           [I]: Introduccion a C
 * Ejercicio:      7
 **********************************************************************/

#include <stdio.h>

void main(void){
   int n=1, i;
   
   while(n < 6){
      i = 1;
      while(i < 6){
         printf("%d\t", (n*i));
         i++;
      }
      printf("\n");
      n++;
   }
}
