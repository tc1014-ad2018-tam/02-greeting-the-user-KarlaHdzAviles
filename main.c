/* Este algoritmo nos sirve para saludar al usuario segun la hora
*
* Autor: Karla Alexandra Hernandez Aviles
* Fecha: 27/08/2018
* Correo: A01411843@itesm.mx
*/

#include <stdio.h>

int main() {
    //Declaracion de variables
    int hora;
    char nombre;
    //Aqui le pido al usuario que introduzca la hora en formato 24hrs

    printf("Bienvenido, ingresa tu nombre");
    scanf("%s", &nombre);
    printf("Hola %s, me podrias decir la hora (0-24).");
    scanf("%i", &hora);

    if(hora >= 1 && hora <= 11) {
        printf("Buenos Dias\n.");
    } else {

        if(hora >= 11.01 && hora <= 18) {
            printf("Buenas tardes\n.");
        } else {
            if(hora >= 18.01 && hora <= 24) {
                printf("Buenas noches\n.");
            }
        }
    }

    return 0;

}
