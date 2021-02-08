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


	printf("\nDopo   | ");
	for(i = ror; i > 0; i--) {
		for(k=0;k<=VETSIZE -1;k++){
			vett[k] = vett[(k + 1)%VETSIZE];
		}		
	}
	for(i = VETSIZE-1; i >= 0; i--){
		printf("%2d ", vett[i]);
	}
	// STAMPA VALORI A INDICE SPOSTATO (verso destra) DEL VETTORE ORIGINALE
 	return(0);
}
