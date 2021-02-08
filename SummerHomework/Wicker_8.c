#include<stdio.h>

int main(){
    int num1, num2, count, times;

    printf("Inserisci un numero.\n");
    scanf("%d", &num1);
    printf("\nInserisci un\'altro numero.\n");
    scanf("%d", &num2);

    times = 0;
    count = num1;
    while(count - num2 >= 0){
        count -= num2;
        times++;
    }
    printf("\nRisulato -> %d : %d = %d con resto %d", num1, num2, times, count);
    return 0;
}