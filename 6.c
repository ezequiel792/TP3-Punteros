#include <stdio.h>

int contar(int *array,int longitud, int eleBuscar);

int main(){
int longitud;
int i;
int eleBuscar;

printf("Ingrese la longitud del vector: ");
scanf("%d",&longitud);

int array[longitud];

for(i=0;i<longitud;i++){
printf("Elemento %d:", i+1);
scanf("%d",&array[i]);
}

printf("Ingrese elemento a buscar: ");
scanf("%d",&eleBuscar);

int ocurrencias=contar(array,longitud,eleBuscar);

printf("El elemento %d tiene %d ocurrencias", eleBuscar,ocurrencias);

}

int contar(int *array,int longitud, int eleBuscar){
int i, contador=0;
for(i=0;i<longitud;i++){
if(*array==eleBuscar){
contador++;
}
array++;
}
return contador;
}
