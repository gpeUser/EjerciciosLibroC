/**********************************************************************
 *                          Grupo de Estudio C
 * Autor:          Emanuel GP
 * Libro:          Introduccion a la programacion con C
 * Semana:         2
 * Tema:           [I]: Introduccion a C
 * Ejercicio:      17
 **********************************************************************/

#include <stdio.h>

void main(void){
   
   int i;
   
   printf("\n+---------+----------+");
   printf("\n| Decimal | Caracter |");
   printf("\n+---------+----------+");
   for(i=32;i<127;i++){
      if(i<100){
         printf("\n|      %d |         %c|", i, (char)i);
      }
      else{
         printf("\n|     %d |         %c|", i, (char)i);
      }
   }
   printf("\n+---------+----------+\n");
   
}
