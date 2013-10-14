/**********************************************************************
 *                          Grupo de Estudio C
 * Autor:          Emanuel GP
 * Libro:          Introduccion a la programacion con C
 * Semana:         2
 * Tema:           [I]: Introduccion a C
 * Ejercicio:      21_1
 **********************************************************************/

/*====================================================================*
 * 
 * compilar usando: gcc ej021_1.c -o ejercicio21_1 -lm
 * 
 *====================================================================*/

// Version del programa usando la funcion "pow()" de la libreria <math.h> para obtener el exponente.

#include <stdio.h>
#include <math.h>

void main(void){
   
   float x;
   
   printf("\nEcuacion a evaluar: x^4 - x^2 + 1 \n");
   
   printf("\n Ingresa el valor de 'x' para evaluar la ecuacion. 'x' debe ser un numero real(con punto decimal)");
   printf("\n x := ");
   scanf("%f", &x);
   
   printf("\n El valor de la ecuacion es: %f \n", (pow(x, 4) - pow(x, 2) + 1));
   
}
