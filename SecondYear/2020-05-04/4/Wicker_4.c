#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define VETSIZE 8

int main(int argc, char *argv[]) {
	int vett[VETSIZE], i;
	srand((unsigned) time(NULL));
	
	for (i = 0; i<VETSIZE; i++){
		vett[i] = rand()%100;
		if (vett[i] % 2 == 0){
			printf("vett[%d] = %d --> pari\n", i, vett[i]);
		} else {
			printf("vett[%d] = %d --> dispari\n", i, vett[i]);

		}
	}
	return 0;
}
