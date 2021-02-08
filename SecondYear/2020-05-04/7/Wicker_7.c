#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define VETSIZE 12

int main(int argc, char *argv[]) {
	int vett[VETSIZE], i, positive, negative, highest, lowest;
	srand((unsigned) time(NULL));
	highest = 100;
	lowest = -100;
	
	for (i=0; i<VETSIZE; i++){
		vett[i] = lowest+(rand()%(highest-lowest));
		printf("vett[%d] = %d\n", i, vett[i]);
	}
	negative = 0;
	positive = 0;
	for (i=0; i<VETSIZE; i++){
		if (vett[i] < 0){
			negative += vett[i];
		}
		else{
			positive += vett[i];
		}
	}
	printf("\nSOMMA POSITIVI: %d \nSOMMA NEGATIVI: %d", positive, negative);
	return 0;
}
