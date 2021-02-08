#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define VETSIZE 8

int main(int argc, char *argv[]) {
	int vett[VETSIZE], i, input;
	int sum = 0;
	
	for (i = 0; i < VETSIZE; i++) {
		printf("INSERISCI UN VALORE (int) [Step %d su %d]\n", i+1, VETSIZE);
		scanf("%d", &input);
		vett[i] = input;
		sum += input;
	} 
	printf("Somma dei valori inseriti: %d", sum);
	
	return 0;
}
