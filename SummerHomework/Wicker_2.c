#include<stdio.h>

int main(int argc, char *argv[]){
    int n, sum;
    printf("Inserisci un numero: \n");
    scanf("%d", &n);

    sum = 0;
    for(int i = n; i > 0; i--){
        sum += i;
    }
    printf("\nIl totale risulta: %d", sum);
    return 0;
}