#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define VETSIZE 8

int main(int argc, char *argv[]) {
	int vett[VETSIZE], i, var;
	srand((unsigned) time(NULL));
	printf("VETTORE ORIGINALE:");
	for (i=0; i<VETSIZE; i++){
		vett[i] = rand()%100;
		printf("\nvett[%d] = %d", i, vett[i]);
	}
	printf("\n\nVETTORE INVERTITO:");
	for (i=0; i<VETSIZE/2; i++){
		var = vett[i];
		vett[i] = vett[VETSIZE-(i+1)];
		vett[VETSIZE-(i+1)] = var;
	}
	for (i=0; i<VETSIZE; i++){
		printf("\nvett[%d] = %d", i, vett[i]);
	}

	return 0;
}
