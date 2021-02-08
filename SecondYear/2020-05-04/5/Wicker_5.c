#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define VETSIZE 8

int main(int argc, char *argv[]) {
	int vett[VETSIZE], input, i, sum, considered;
	for (i=0; i<VETSIZE; i++){
		printf("Inserisci un valore (int) [Step %d su %d]\n", i+1, VETSIZE);
		scanf("%d", &input);
		vett[i] = input;
	}
	sum = 0;
	considered = 0;
	for (i=0; i<VETSIZE; i++) {
		if (vett[i] != 0){
			sum += vett[i];
			considered++;
		}
		else {
			printf("\nSomma: %d | Valori considerati: %d | Indice del primo zero: %d", sum, considered, i);
			break;
		}
	}

	return 0;
}
