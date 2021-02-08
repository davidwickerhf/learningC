#include<stdio.h>

int main(int argc, char *argv[]){
    int n, saved, num;
    printf("Inserisci quanti numeri vorresti confrontare - numero reale\n");
    scanf("%d", &n);

    for (int i = 0; i<n; i++){
        printf("Inserisci un numero da confrontare:\n");
        scanf("%d", &num);
        if(i==0){
            saved=num;
        }
        if (num>saved){
            saved=num;
        } 
    }
    printf("Il numero maggiore e\': %d", saved);
    return 0;
}