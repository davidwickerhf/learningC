#include<stdio.h>

int main(){
    int n1, n2, sum1, sum2;
    printf("Inserire un numero intero maggiore di 0\n");
    scanf("%d", &n1);
    printf("Inserire un numero intero maggiore di 0\n");
    scanf("%d", &n2);

    sum1 = 0;
    for(int i=1; i<n1; i++){
        if(n1%i==0){
            sum1+=i;
        }
    }

    sum2 = 0;
    for(int i=1; i<n2; i++){
        if(n2%i==0){
            sum2+=i;
        }
    }

    if (n1 == sum2 && n2 == sum1){
        printf("%d e %d sono amicabili", n1, n2);
    } else {
        printf("%d e %d NON sono amicabili", n1, n2);
    }
    return 0;
}