#include<stdio.h>

int main(){
    int a, b;
    printf("Inserisci un numero intero: ");
    scanf("%d", &a);
    printf("Inserisci un altro numero intero: ");
    scanf("%d", &b);

    int placeholder = a;
    int times = 0;
    int loop = 0; // 0 ->  continue looping | 1 -> stop looping
    int rest = 0;
    while (loop == 0){
        if (placeholder-b < 0){
            rest = placeholder;
            loop = 1;
        } else
        {
            placeholder -= b;
            times += 1;
        }
    }

    // Non funziona (ancora) se a o b sono negativi!

    printf("Il quoziente tra %d e %d e' %d, con resto %d", a, b, times, rest);

    return 0;
}