#include<stdio.h>

int main(){
    int num1, num2, sum;

    printf("Inserisci un numero.\n");
    scanf("%d", &num1);
    printf("\nInserisci un\'altro numero.\n");
    scanf("%d", &num2);

    sum = 0;
    for(int i=0; i<num1; i++){
        sum+=num2;
    }
    printf("\nRisulato: %d * %d = %d", num1, num2, sum);
    return 0;
}