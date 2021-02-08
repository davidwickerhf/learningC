#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define VETSIZE 10

int main(int argc, char *argv[]) {
	int vett[VETSIZE], i, pari, dispari;
	srand((unsigned) time(NULL));
	for (i = 0; i<VETSIZE; i++){
		vett[i] = rand()%100;
		printf("vett[%d] = %d\n", i, vett[i]);
	}
	pari = 0;
	dispari = 0;
	for (i = 0; i<VETSIZE; i++){
		if (vett[i] %2 == 0){
			pari += vett[i];
		} else {
			dispari += vett[i];
		}
	}
	printf("\nSOMMA NUMERI PARI: %d \nSOMMA NUMERI DISPARI: %d", pari, dispari);
	return 0;
}
