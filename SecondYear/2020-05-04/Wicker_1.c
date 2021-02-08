#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int repetitions = 10;
	int vett[repetitions];
	int input;

	for (i = 1; i<=repetitions; i++) {
		printf("\nINSERISCI UN NUMERO  [Passo %d su %d]\n", i, repetitions);
		scanf("%d", &input);
		vett[i - 1] = input;
	}
	printf("\n\nVETTORE COSTRUITO: \n");
	for (i = 1; i <= repetitions; i++) {
		printf("%d ", vett[i-1]);
	}
	return 0;
}
