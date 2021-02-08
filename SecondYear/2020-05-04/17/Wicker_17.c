#include <stdio.h>
#include <stdlib.h>

#define VETSIZE 10

int main(int argc, char *argv[]) {
	
	// VARIABILI
	int vett[VETSIZE], i, j, repeat, temp, f;
	srand((unsigned) time(NULL));	
	
	// GENERA VETTORE RANDOM
	printf("VETTORE INIZIALE: \n");
	for (i = 0; i < VETSIZE; i++){
		vett[i] = rand()%20;
		printf("%d ", vett[i]);
	}
	
	// ALGORITMO DI SORTING - NON EFFICIENTE (ma veloce da programare)
	repeat = 1
	while (repeat != 0){
		repeat = 0;
		for(j = 1; j <= VETSIZE; j++){
			if (vett[j] < vett[j-1]){ 
				repeat = 1;
				temp = vett[j-1];
				vett[j-1] = vett[j];
				vett[j] = temp;
			}
		}	
	}
	
	// STAMPA OUTPUT
	printf("\nVETTORE ORDINATO: \n");
	for (f = 0; f < VETSIZE; f++) {
		printf("%d ", vett[f]);
	}
}

