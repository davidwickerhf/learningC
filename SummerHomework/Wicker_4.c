#include<stdio.h>

int main(){
    int n;
    printf("Inserisci un numero intero per trovare i suoi divisori:\n");
    scanf("%d", &n);
    for(int i = 1; i<n+1; i++){
        if (n%i == 0){
            printf("\n%d", i);
        }
    }
    return 0;
}