#include <stdio.h>
#include <stdlib.h>

// CONTROLLO - David Wicker


int main() {
	int n1;
	int n2;
	int i;
	
	start:
		printf("(1)  INSERISCI UN NUMERO\n");
		scanf("%d", &n1);
		printf("\n");
		
		printf("(2)  INSERISCI UN ALTRO NUMERO\n");
		scanf("%d", &n2);
		printf("\n");
	
	if(n1 >= n2) {
		printf("ERRORE - Prova di nuovo - - - - - - - - - - - - - - - ");
		printf("\n");
		printf("\n");
		goto start;
	}
	
	printf("NUMERI DISPARI COMPRESI TRA %d E %d: ", n1, n2);
	for (i = n1 + 1; i < n2; i++) {
		if(i%2 != 0)
		printf("%d ", i);
	}
	
	return 0;
}
