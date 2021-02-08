#include <stdio.h>

int main(int argc, char *argv[]){
    int year, bisestile;
    printf("Inserisci un anno\n");
    scanf("%d", &year);
    bisestile = 0;
    if (year%4==0){
        if(year%100==0){
            if (year%400==0){
                bisestile = 1;
            }
        } else{
            bisestile = 1;
        }
    }

    if (bisestile==0){
        printf("\n%d non e\' bisestile.", year);
    } else{
        printf("\n%d e\' bisestile.", year);
    }
    return 0;
}