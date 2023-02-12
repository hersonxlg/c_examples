/*  Autor: Herson Xavier Lozano Gomez
 *  Fecha: 08/02/2023
 *  Titulo: simpleReadTerminal
 *
 *  Descripcion:
 *  Aplicacion de la funcion "fgets".
 *
*/

#include <stdio.h>

int main(){
    char firstName[10];
    char lastName[10];

    printf("Escribe tu nombre: \n");
    fgets(firstName,sizeof(firstName),stdin); // Se lee el buffer de stdin (incluyendo el salto de linea).
    fflush(stdin);  // Se limpia el buffer, cuando a la variable no le cabe todo el contenido del buffer.
    printf("\n");
    printf("Escribe tu apellido: \n");
    fgets(lastName,sizeof(lastName),stdin);
    fflush(stdin);
    printf("\n");
    printf("Su Nombre es: \"%s\"\nSu apellido es: \"%s\"\n",firstName,lastName);
    return 0;
}

/* **************************************************************
 * NOTA:
 * **************************************************************
 * La funcion "fgets" tambien agrega el salto de linea a la variable String,
 * por lo que debe tenerse en cuenta esta particularidad, debido a que la funcion
 * "fgets" se usa para leer multiples lineas de texto en un buffer el cual ha sido
 * cargado con el contenido de un archivo y lo unico que separa
 * una linea de otra en el bufer es el salto de linea.
 *
 */

