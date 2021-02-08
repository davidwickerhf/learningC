#include<stdio.h>

// Calcola la somma dei primi n numeri pari. 0 Non viene considerato.

int main(){
    int n, sum;
    printf("Inserisci un numero intero positivo:\n");
    scanf("%d", &n);
    
    sum = 0;

    for(int i=0; i<=n*2; i++){
        if (i%2 == 0 && i!=0){
            sum += i;
            //printf("\n%d - sum: %d", i, sum);
        }
    }

    printf("\n\nSomma dei primi %d numeri pari: %d", n, sum);
    return 0;
}