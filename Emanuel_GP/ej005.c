/**********************************************************************
 *                          Grupo de Estudio C
 * Autor:          Emanuel GP
 * Libro:          Introduccion a la programacion con C
 * Semana:         1
 * Tema:           [I]: Introduccion a C
 * Ejercicio:      5
 **********************************************************************/

#include <stdio.h>

void main(void){
   float a, b, x;
   
   printf("\nValor de a: ");
   scanf("%f", &a);
   printf("\nValor de b: ");
   scanf("%f", &b);
   
   if(a != 0.0){
      x = -b/a;
      printf("\n\nSolucion: %f\n", x);
   }
   else{
      if(b != 0.0){
         printf("\n\nLa ecuacion no tiene solucion.\n");
      }
      else{
         printf("\n\nLa ecuacion tiene infinitas soluciones.\n");
      }
   }
}
