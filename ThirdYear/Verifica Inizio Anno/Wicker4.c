#include<stdio.h>

int main(){
    int a, b;
    printf("Inserisci un numero intero: ");
    scanf("%d", &a);
    printf("\n\nInserisci un'altro numero intero: ");
    scanf("%d", &b);

    int result;
    if (a>b){
        result = a-b;
        printf("La differenza tra %d e %d e' pari a: %d", a, b, result);
    } else{
        result = a+b;
        printf("La somma tra %d e %d e' pari a: %d", a, b, result);
    }

    return 0;
}