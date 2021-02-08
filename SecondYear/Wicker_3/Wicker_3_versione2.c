#include "stdio.h"
#include "stdlib.h"

#define VETSIZE 10

int main()
{
	// DICHIARAZIONE VARIABILI
	int vett[VETSIZE], i, ror, k;
   	srand((unsigned) time(NULL));	
	
 	for(i=0;i<VETSIZE;i++) {
		vett[i]=rand()%30;
		printf("vett[%d]=%d\n", i, vett[i]);
 	}

	printf("Di quante posizioni vuoi fare la rotazione a sinistra? ");
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

	// STAMPA VALORI A INDICE SPOSTATO (verso sinistra) DEL VETTORE ORIGINALE
	printf("\nDopo   | ");
	for(i = ror; i > 0; i--) {
		int a = vett[VETSIZE-1];
		for(k = VETSIZE-1; k > 0; k--){
			vett[k] = vett[(k - 1 + ror*VETSIZE)%VETSIZE];
		}		
		vett[0] = a;
	}
	for(i = VETSIZE-1; i >= 0; i--){
		printf("%2d ", vett[i]);
	}
 	return(0);
}
