#include<stdio.h>

int main(int argc, char *argv[]){
    int n, sum;
    printf("Inserire un numero intero maggiore di 0\n");
    scanf("%d", &n);

    sum = 0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        printf("%d e\' un numero perfetto.", n);
    }else{
        printf("%d NON e\' un numero perfetto.", n);
        printf("%d", sum);
    }

    return 0;
}