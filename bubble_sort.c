/** @file bubble_sort.c
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


void llenar(int *store, int x){
    int i;
    for(i=0;i<x;i++){
        printf("Ingresa el numero para la posicion %d: ",i+1);
        validar(store, i);
    }  
 }


void imprimir(int *store, int x){
    int c;
     for (c = 0; c < x ; c++ ){
       printf("%d ", store[c]);
     }
    printf("\n");
 }


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