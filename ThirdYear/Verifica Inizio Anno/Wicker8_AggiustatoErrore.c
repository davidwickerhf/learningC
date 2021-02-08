#include<stdio.h>

int main(){
    int n;
    printf("Inserisci un numero intero: ");
    scanf("%d", &n);

    int num = n;
    int count = 1;
    while (num > 0){
        num = num - count;
        count = count + 2;
    }

    if (num == 0){
        printf("%d e' un quadrato perfetto.", n);
    } else {
        printf("%d NON e' un quadrato perfetto.", n);
    }
    return 0;


}