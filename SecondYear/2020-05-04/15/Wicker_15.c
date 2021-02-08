#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	// VARIABILI
	int VETSIZE, repeat, input, a, i, b, f, index;
	srand((unsigned) time(NULL));	
	
	// RICHIEDI NUMERO VALORI
	printf("Quanti valori vuoi inserire?\n");
	scanf("%d", &VETSIZE);
	int vett[VETSIZE];
	int vettFinale[VETSIZE];
	
	
	// GENERA VETTORE 
	repeat  = 1;
	for(a = 0; a < VETSIZE; a++){
		printf("Inserisci un valore (int)\n", a+1, VETSIZE);
		scanf("%d", &input);
		vett[a] = input;
	}
	
	// STAMPA VETT INIZIALE
	printf("\n\nVETTORE INIZIALE\n");
	for(a = 0; a < VETSIZE; a++){
		printf("%d ", vett[a]);
	}
	
	// MODIFICA E STAMPA VETTORE
	printf("\n\nVETTORE FINALE\n");
	index = 0;
	for(b = 0; b < VETSIZE; b++) {
		if(vett[b] != 0){
			vettFinale[index] = vett[b];
			printf("%d ", vettFinale[index]);
			index++;
		}
	}
	for(f = 1; f < (VETSIZE - index +1); f++) {
		vettFinale[index+f] = 0;
		printf("%d ", vettFinale[index+f]);
	}
	
	return 0;
}
