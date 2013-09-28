/**********************************************************************
 *                          Grupo de Estudio C
 * Autor:          Emanuel GP
 * Libro:          Introduccion a la programacion con C
 * Semana:         1
 * Tema:           [I]: Introduccion a C
 * Ejercicio:      6
 **********************************************************************/

/*====================================================================*
 * 
 * compilar usando: gcc ej006.c -o ejercicio6 -lm
 * 
 *====================================================================*/

#include <stdio.h>
#include <math.h>

void main(void){
   float x=1.0;
   
   while(x < 10.0){
      printf("\n%.1f\t%f", x, log(x));
      x++;
   }
   
   printf("\n");
}
