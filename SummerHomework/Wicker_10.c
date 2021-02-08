#include<stdio.h>

int main(){
    int n, fattoriale;
    printf("Inserisci un numero.\n");
    scanf("%d", &n);

    fattoriale = n;
    for (int i=1; i<n; i++ ){
        fattoriale *= i;
    }

    printf("Il fattoriale di %d e\' %d", n, fattoriale);

    return 0;
}