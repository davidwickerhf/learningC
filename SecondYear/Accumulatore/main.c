#include <stdio.h>
#include <stdlib.h>

// ACCUMULATORE -  David Wicker
  
int main() {
	int a;
	int num;
	int sum;
	int i;

	
	start:
		printf("\n");
		printf("INSERISCI UN NUMERO DI CICLI\n");
		scanf("%d", &a);
		
	
	if (a <= 0) {
		printf("\n");
		printf("INSERISCI UN NUMERO DI CICLI MAGGIORE A ZERO\n");
		printf("Premi qualsiasi tasto per continuare\n");
		getch();
		goto start;
	}
	
	for(i = 0; i < a; i++) {
		printf("\n");
		printf("INSERISCI UN NUMERO - - - - - - - -\n");
		printf("Numeri rimanenti: %d	Somma: %d\n", a - i, sum);
		scanf("%d", &num);
		sum += num;
	}
	printf("\n");
	printf("SOMMA FINALE: %d\n", sum);
	printf("Premi qualsiasi tasto per riprovare\n");
	getch();
	goto start;
	
	return 0;
}
