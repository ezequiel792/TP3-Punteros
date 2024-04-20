#include <stdio.h>
#include <string.h>

//strcat
//strcat(cadena1,cadena2);

void concatenar(char *cadena1, char *cadena2);


int main(){
char cadena1[100];
char cadena2[100];

printf("Ingrese cadena 1: ");
scanf("%s",&cadena1);

printf("Ingrese cadena 2: ");
scanf("%s",&cadena2);

concatenar(cadena1,cadena2);

}

void concatenar(char *cadena1, char *cadena2){
strcat(cadena1, " ");
strcat(cadena1, cadena2);
printf("Cadena concatenada: %s", cadena1);
}

