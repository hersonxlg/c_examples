/*  Autor: Herson Xavier Lozano Gomez
 *  Fecha: 08/02/2023
 *
 *  Titulo: InputWithScanf_2
 *
 *  Descripcion: Aplicacion de la funcion "scanf"
 *  para multiples variables a la vez.
 *
*/

#include <stdio.h>

int main(){
    char name[20];
    int age;
    float height;
    // Ingresar los datos.
    printf("\n\n");
    printf("Escribe: \"Primer_Nombre\" \"Edad\" \"Altura(m)\" \n");
    scanf("%s %d %f", name, &age, &height);
    // Mostrar los datos ingresados.
    printf("\n**********************************\n");
    printf("Su nombre es: %s.\n",name);
    printf("Su Edad es: %d anios.\n",age);
    printf("Su Altura es: %.2f metros.",height);
    printf("\n**********************************\n");
    printf("\n\n");

    return 0;
}
