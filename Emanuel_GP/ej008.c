/**********************************************************************
 *                          Grupo de Estudio C
 * Autor:          Emanuel GP
 * Libro:          Introduccion a la programacion con C
 * Semana:         1
 * Tema:           [I]: Introduccion a C
 * Ejercicio:      8
 **********************************************************************/

/*====================================================================*
 * 
 * compilar usando: gcc ej008.c -o ejercicio8 -lm
 * 
 *====================================================================*/

#include <stdio.h>
#include <math.h>

void main(void){
   int opcion=0;
   float radio, diametro, perimetro, area;
   
   while(opcion != 4){
      printf("\n1) Calcular el diametro: ");
      printf("\n2) Calcular el perimetro: ");
      printf("\n3) Calcular el area: ");
      printf("\n4) Salir. \n");
      
      printf("\nTeclea 1, 2, 3 o 4 y pulsa <Enter>: ");
      scanf("%d", &opcion);
      
      printf("\nDame el radio de un circulo: ");
      scanf("%f", &radio);
      
      if(opcion == 1){
         diametro = 2 * radio;
         printf("\nEl diametro es: %f\n", diametro);
      }
      else if(opcion == 2){
         perimetro = 2 * M_PI * radio;
         printf("\nEl perimetro es: %f\n", perimetro);
      }
      else if(opcion == 3){
         area = M_PI * pow(radio,2);
         printf("\nEl area es: %f\n", area);
      }
      else if((opcion < 0) || (opcion > 4)){
         printf("\nSolo hay cuatro opciones; 1, 2, 3 o 4. Tu has tecleado: %d\n", opcion);
      }
   }
}
