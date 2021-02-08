
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i;
	int repetitions = 15;
	int vett[repetitions];

	printf("VETTORE COSTRUITO\n");
	printf("Indice	|	Valore");
	for (i = 0; i <= repetitions; i++) {
		vett[i] = i;
		printf("\n%d	-	%d", i, vett[i]);
	}
}
