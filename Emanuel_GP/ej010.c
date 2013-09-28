/**********************************************************************
 *                          Grupo de Estudio C
 * Autor:          Emanuel GP
 * Libro:          Introduccion a la programacion con C
 * Semana:         1
 * Tema:           [I]: Introduccion a C
 * Ejercicio:      10
 **********************************************************************/

#include <stdio.h>

int main(void)
{
   int a, b;
   scanf ("%d", &a);
   scanf ("%d", &b);
   while(a > b) {
      scanf ("%d", &a);
      scanf ("%d", &b);
   }
   printf ("%d %d\n", a, b);
   return 0;
}
