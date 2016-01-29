/** @file bubble_sort.h
 *  @brief Declaración de las funciones lara la libreria de ordenamiento bubble sort.
 *
 *  Este archivo contiene las decalraciones de las funciones
 *  asi como las variables globales que se necesiten
 *
 *  @author Josué Hernández Mateo
 *  @bug No hay errores conocidos al momento.
 */

#ifndef BUBLESORT
#define BUBLESORT 
#include <stdio.h>


/** @brief Ordenamiento de un arreglo
 * 
 *  @param *store Apuntador para acceder al arreglo
 *  @param x el tamaño del arreglo
 *
 *  @return Void
 */
void bubble(int *, int);
/** @brief Llenar el arreglo para su ordenamiento
 * 
 *  @param *store Apuntador para acceder al arreglo
 *  @param x Variable para conocer el tamaño del arreglo
 *
 *  @return Void
 */
void llenar(int *, int);
/** @brief Imprime lo que este almacenado en el arreglo dado
 * 
 *  @param *store Apuntador para acceder al arreglo
 *  @param x tamaño del arreglo
 *
 *  @return Void
 */
void imprimir(int *, int);
/** @brief Validar los numeros dados por el usuario
 * 
 *  @param *store Apuntador para acceder al arreglo
 *  @param i Posicion del arreglo a validar
 *
 *  @return Void
 */
void validar(int *,int);

#endif