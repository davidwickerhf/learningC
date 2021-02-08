#include<stdio.h>

int main(){
    int n1, n2, num1, num2;
    printf("Inserisci un numero:\n");
    scanf("%d", &n1);
    printf("Inserisci un numero:\n");
    scanf("%d", &n2);

    num1 = n1;
    num2 = n2;
    while (num2 > 0)
    {
        int r = num1 % num2;
        num1 = num2;
        num2 = r;
    }
    printf ("MCD(%d,%d) = %d \n",n1,n2,num1);
    return 0;
}