/**********************************************************************
 *                          Grupo de Estudio C
 * Autor:          Emanuel GP
 * Libro:          Introduccion a la programacion con C
 * Semana:         2
 * Tema:           [I]: Introduccion a C
 * Ejercicio:      21_2
 **********************************************************************/

/*====================================================================*
 * 
 * compilar usando: gcc ej021_2.c -o ejercicio21_2
 * 
 *====================================================================*/

// Version del programa usando el ciclo "for" para obtener el exponente.

#include <stdio.h>
#include <math.h>

void main(void){
   
   int i;
   float x, r;
   
   printf("\nEcuacion a evaluar: x^4 - x^2 + 1 \n");
   
   printf("\n Ingresa el valor de 'x' para evaluar la ecuacion. 'x' debe ser un numero real(con punto decimal)");
   printf("\n x := ");
   scanf("%f", &x);
   r = x;
   for(i=1;i<4;i++){
      r *= x;
   }
   r -= (x*x);
   r += 1;
   printf("\n El valor de la ecuacion es: %f \n", r);
   
}
