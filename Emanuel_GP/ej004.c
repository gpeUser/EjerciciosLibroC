/**********************************************************************
 *                          Grupo de Estudio C
 * Autor:          Emanuel GP
 * Libro:          Introduccion a la programacion con C
 * Semana:         1
 * Tema:           [I]: Introduccion a C
 * Ejercicio:      4
 **********************************************************************/

/*====================================================================*
 * 
 * compilar usando: gcc ej004.c -o ejercicio4 -lm
 * 
 *====================================================================*/

#include <stdio.h>
#include <math.h>

void main(void){
   float x1, x2, y1, y2, dx, dy;
   double distancia;
   
   printf("\nPunto 1, coordenada x: ");
   scanf("%f", &x1);
   printf("\nPunto 1, coordenada y: ");
   scanf("%f", &y1);
   printf("\nPunto 2, coordenada x: ");
   scanf("%f", &x2);
   printf("\nPunto 2, coordenada y: ");
   scanf("%f", &y2);
   dx = x2 - x1;
   dy = y2 - y1;
   distancia = sqrt(pow(dx,2) + pow(dy,2));
   printf("\n\nLa distancia entre los puntos es: %f\n", distancia);
}
