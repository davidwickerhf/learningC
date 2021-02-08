#include<stdio.h>

int main() {
    int n;
    printf("Inserisci un numero intero per indicare il numero di numeri che si desidera inserire: ");
    scanf("%d", &n);

    int vett[n];
    int num;
    for (int i = 0; i < n; i++){
        printf("\nInserisci un numero da comparare: ");
        scanf("%d", &num);
        vett[i] = num;
    }

    int big = vett[0];
    for (int i = 0; i < n; i++){
        if (vett[i] > big){
            big = vett[i];
        }
    }

    printf("Il numero maggiore riscontrato tra i %d elementi e': %d", n, big);
    return 0;
}