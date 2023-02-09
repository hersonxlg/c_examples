/*  Autor: Herson Xavier Lozano Gomez
 *  Fecha: 08/02/2023
 *  Titulo: simpleReadTerminal
 *
 *  Descripcion: Aplicacion de la funcion "scanf".
 *
*/

#include <stdio.h>

int main(){
    char name[30];
    printf("Escribe tu nombre:\n");
    scanf("%s",name);
    printf("\n\n*******************\n");
    printf("Su nombre es: %s",name);
    printf("\n*******************\n");
    return 0;
}
