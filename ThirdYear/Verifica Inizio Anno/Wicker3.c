#include<stdio.h>

int main(){
    int min = 6;
    int max = 20;
    int prod = 1;

    for(int i=min; i<=max; i++){
        if (i%2!=0){
            prod *= i;
        }
    }

    printf("Il prodotto dei numeri dispari da %d a %d e' %d", min, max, prod);
    return 0;
}