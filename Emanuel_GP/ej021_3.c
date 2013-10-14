/**********************************************************************
 *                          Grupo de Estudio C
 * Autor:          Emanuel GP
 * Libro:          Introduccion a la programacion con C
 * Semana:         2
 * Tema:           [I]: Introduccion a C
 * Ejercicio:      21_3
 **********************************************************************/

/*====================================================================*
 * 
 * compilar usando: gcc ej021_3.c -o ejercicio21_3
 * 
 *====================================================================*/

// Version del programa usando multiplicaciones para obtener el exponente.

#include <stdio.h>
#include <math.h>

void main(void){
   
   int i;
   float x, r;
   
   printf("\nEcuacion a evaluar: x^4 - x^2 + 1 \n");
   
   printf("\n Ingresa el valor de 'x' para evaluar la ecuacion. 'x' debe ser un numero real(con punto decimal)");
   printf("\n x := ");
   scanf("%f", &x);
   r = x*x*x*x;
   r -= (x*x);
   r += 1;
   printf("\n El valor de la ecuacion es: %f \n", r);
   
}
