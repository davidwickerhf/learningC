#include<stdio.h>

int main(){
    int n, quadrato;
    printf("Inserisci un numero.\n");
    scanf("%d", &n);

    quadrato = 0;
    for(int i = 0; i <= n/2; i++){
        if (i*i==n){
            quadrato = 1;
        }
    }
    if (quadrato == 1){
        printf("%d e\' un quadrato perfetto!", n);
    } else {
        printf("%d NON e\' un quadrato perfetto.", n);
    }
    return 0;
}