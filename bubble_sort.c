/** @file buble_sort.c
 *  @brief Definición de las funciones para el funcionamiento de la libreria bubble sort
 *
 *  Este archivo contiene el desarrollo de las funciones indispensables para el ordenamiento
 *  estan las funciones y todo el metodo que se utiliza para la resolucion del problema
 *
 *  @author Josué Hernández Mateo
 *  @bug No hay errores conocidos al momento..
 */
 
#include <stdio.h>
#include "bubble_sort.h"

/** @brief Ordenamiento de un arreglo
 * 
 *  @param *store Apuntador para acceder al arreglo
 *  @param n el tamaño del arreglo
 *
 *  @return Void
 */
void bubble(int *store, int x){
  int tempo, i, j;
  for (i=0; i<(x-1); i++){
    for (j=0 ; j<x-i-1; j++){
      if (store[j] > store[j+1]){ 
        tempo      = store[j];
        store[j]   = store[j+1];
        store[j+1] = tempo;
      }
    }
  }
}


/** @brief Llenar el arreglo para su ordenamiento
 * 
 *  @param *store Apuntador para acceder al arreglo
 *  @param x Variable para conocer el tamaño del arreglo
 *
 *  @return Void
 */
 void llenar(int *store, int x){
    int i;
    for(i=0;i<x;i++){
        printf("Ingresa el numero para la posicion %d: ",i+1);
        validar(store, i);
    }  
 }


/** @brief Imprime lo que este almacenado en el arreglo dado
 * 
 *  @param *store Apuntador para acceder al arreglo
 *  @param x tamaño del arreglo
 *
 *  @return Void
 */
 void imprimir(int *store, int x){
    int c;
     for (c = 0; c < x ; c++ ){
       printf("%d ", store[c]);
     }
    printf("\n");
 }


/** @brief Validar los numeros dados por el usuario
 * 
 *  @param *store Apuntador para acceder al arreglo
 *  @param i Posicion del arreglo a validar
 *
 *  @return Void
 */
void validar(int *store, int i){
     int valida, temp;
        valida = scanf("%d",&store[i]);
        while(valida!=1)
        {
          while((temp=getchar()) != EOF && temp != '\n');
          printf("Eso no es un numero %d: ",i);
          valida = scanf("%d", &store[i]);
        }
 }

