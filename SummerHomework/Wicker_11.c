#include<stdio.h>

int main(){
    int base, esponente, result;
    printf("Inserisci un numero:\n");
    scanf("%d", &base);
    printf("Inserisci un esponente:\n");
    scanf("%d", &esponente);

    result = base;
    for(int i=1; i<esponente; i++){
        result *= base;
    }

    printf("%d^%d = %d", base, esponente, result);

    return 0;
}