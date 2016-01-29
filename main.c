/** @file main.c
 *  @brief Programa principal que muestra el funcionamiento de la libreria bubble sort
 *
 *  Muestra el funcionamiento de la libreria bubble sort permitiendo acceder a las funciones
 *  prescritas en los archivos bubble_sort.c y bubble_sort.h
 *
 *  @author Josué Hernández Mateo
 *  @bug No hay errores conocidos al momento.
 */

#include <stdio.h>
#include "bubble_sort.h"
 /** @brief Programa principal 
 * 
 *  Permite ingresar un arreglo de 10 numeros y ordenarlos
 *  al ingresar los numeros los valida
 *
 *  @return 0
 */

int main()
{
  int tamano, *a;
  int valida, temp;
  printf("Tamaño del arreglo ");
  valida =scanf("%d", &tamano);
  while(valida!=1)
  {
    while((temp=getchar()) != EOF && temp != '\n');
      printf("Ingresa solo numeros ");
    valida = scanf("%d", &tamano);
  }
  int array[tamano];
  a = array;
  //Llenar el arreglo con valida 
  llenar(a,tamano);
  
  //Imprimir el arreglo como fue ingresado
  printf("Ingresaste: ");
  imprimir(a,tamano);

  //Ordenar el arreglo
  bubble(a, tamano);

  //Arreglo ordenado
  printf("Asi queda ordenado: ");
  imprimir(a,tamano);
  
    
  return 0;
}