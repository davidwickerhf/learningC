#include<stdio.h>
int mcd(int num1, int num2);

int main(){
    int num1, num2, result;
    printf("Inserisci un numero:\n");
    scanf("%d", &num1);
    printf("Inserisci un numero:\n");
    scanf("%d", &num2);

    result = mcd(num1, num2); // recursive function
    printf("MCD(%d, %d) = %d", num1, num2, result);
    return 0;
}

int mcd(int num1, int num2){
    if (num1 == 0){
        return num2;
    }
    if (num2 == 0){
        return num1;
    }
    return mcd((num1-num2), num2);
}