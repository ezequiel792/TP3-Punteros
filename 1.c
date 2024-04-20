#include <stdio.h>

int x=5;
int y=10;
int intercambiar(int *x,int *y){
int temp = *x;
*x=*y;
*y=temp;
}


int main(){

printf("Variales antes de intercambiar: x= %d, y= %d", x, y);

intercambiar(&x,&y);

printf("\nVariales despues de intercambiar: x= %d, y= %d", x, y);

}
