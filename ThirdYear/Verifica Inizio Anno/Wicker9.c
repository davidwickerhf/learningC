#include<stdio.h>

int main(){
    int n;
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    int prod = 1;
    for (int i=n; i>0; i--){
        prod *= i;
    }
    printf("Fattoriale di %d e' pari a: %d", n, prod);
    return 0;
}