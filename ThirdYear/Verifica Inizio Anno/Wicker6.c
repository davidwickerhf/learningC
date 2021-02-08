#include<stdio.h>

int main() {
    int n;
    printf("Inserisci un numero intero per indicare il numero di numeri che si desidera considerare per la media: ");
    scanf("%d", &n);

    int num;
    int sum = 0;
    for (int i = 0; i < n; i++){
        printf("Inserisci un numero da considerare: ");
        scanf("%d", &num);
        // Not fail safe !
        sum += num;
    }

    float average = (float)sum/n;
    printf("\nLa media dei %d numeri inseriti e': %.1f", n, average);
    return 0;

}