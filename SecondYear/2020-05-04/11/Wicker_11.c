#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define VETSIZE 10

int main(int argc, char *argv[]) {
	int vett[VETSIZE], i, max, index, min, minindex;
	srand((unsigned) time(NULL));
	for (i=0; i<VETSIZE; i++){
		vett[i] = rand()%100;
		printf("vett[%d] = %d\n", i, vett[i]);
	}
	max = 0;
	min = 0;
	index = 0;
	minindex=0;
	for (i=0; i<VETSIZE; i++){
		if (i == 0){
			max = vett[0];
			min = vett[0];
			continue;
			index = i;
			minindex = i;
		}
		if (vett[i] > max){
			max = vett[i];
			index = i;
		}
		if (vett[i]< min){
			min = vett[i];
			minindex = i;
		}
	}
	printf("\nELEMENTO MAGGIORE: %d - Indice: %d", max, index);
	printf("\nELEMENTO MINORE: %d - Indice: %d", min, minindex);

	return 0;
}
