#include "stdio.h"
#include "stdlib.h"

#define VETSIZE 10

int main()
{
	// DICHIARAZIONE VARIABILI
	int vett[VETSIZE], i, ror;
   	srand((unsigned) time(NULL));	
   	int tempVett[VETSIZE];
	
 	for(i=0;i<VETSIZE;i++) {
		vett[i]=rand()%30;
		printf("vett[%d]=%d\n", i, vett[i]);
		tempVett[i]=vett[i];
 	}

	printf("Di quante posizioni vuoi fare la rotazione a dx? ");
	scanf("%d",&ror);

	// STAMPA INTESTAZIONE
	printf("\nIndice | ");
 	for(i=VETSIZE-1;i>=0;i--) {
 		printf(" %d ", i);
 	}
 	printf("\n--------------------------------------\n");

	// STAMPA VETTORE ORIGINALE
	printf("Prima  | ");
 	for(i=VETSIZE-1;i>=0;i--) {
 		printf("%2d ", vett[i]);
 	}

	// STAMPA STAMPA VETTORE ROTATO (verso destra)
	printf("\nDopo   | ");
 	for(i=VETSIZE-1;i>=0;i--) {
 		vett[i]=tempVett[(i+ror)%VETSIZE];
 		printf("%2d ", vett[i]);
 	}
 	printf("\n--------------------------------------\n");

 	return(0);
}
