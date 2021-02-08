#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define VETSIZE 7

int main(int argc, char *argv[]) {
	int vett[VETSIZE], saved, i, max, index, indexes[2], a;
	srand((unsigned) time(NULL));
	for (i=0; i<VETSIZE; i++){
		vett[i] = rand()%100;
		printf("vett[%d] = %d\n", i, vett[i]);
	}
	saved = -1;
	for (a = 0; a<2; a++){
		for (i=0; i<VETSIZE; i++){
			if (i == 0){
				continue;
				index = i;
			}
			if (vett[i] > vett[index] && i != saved){
				index = i;
				saved = i;
			}
		}
		printf("\nELEMENTO MAGGIORE: %d - Indice: %d", vett[index], index);
	}

	return 0;
}
