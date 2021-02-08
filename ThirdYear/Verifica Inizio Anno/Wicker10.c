#include<stdio.h>

int main(){
    int a;
    printf("Inserisci il valore del lato: ");
    scanf("%d", &a);

    float area = (a*a)/2;
    if (area > 20){
        printf("Area (%d) e' troppo grande.", area);
    } else{
        printf("Area: %d", area);
    }
    return 0;
}