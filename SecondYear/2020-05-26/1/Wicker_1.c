#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, n, k, input, div, x, result;
	printf("Inserisci un numero intero\n");
	scanf("%d", &n);
	
	printf("\nInserisci un'altro numero intero\n");
	scanf("%d", &k);
	div = -1;
	result = 0;
		
	for(i = 0; i<n; i++){
		printf("\nInserisci un numero reale\n");
		scanf("%d", &input);
		
		if (input < 0){
			x = input*-1;
		} else {
			x = input;
		}
		
		if (k % x == 0 && x > div){
			div = input;
			result =1;
		}
	}
	
	if (result == 0){
		printf("\n\nNon e' stato inserito nessun divisore di %d", k);
	} else {
		printf("\n\nIl divisore di k maggiore inerito è: %d ", div);
	}
	return 0;
}
