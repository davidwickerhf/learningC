#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
// VARIABILI
	int VETSIZE, repeat, input, a, i, b, f;
	srand((unsigned) time(NULL));	
	
	// RICHIEDI NUMERO VALORI
	printf("Quanti valori vuoi inserire?\n");
	scanf("%d", &VETSIZE);
	int vett[VETSIZE];
	
	
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
	
	// MODIFICA VETTORE
	for(b = 0; b < VETSIZE; b++) {
		if (vett[b] == 0){
			for (i = b; i < VETSIZE-1; i++){
				vett[i]  = vett[i+1];
			}
			vett[VETSIZE-1] = 0;
		}
	}
	
	// STAMPA VETTORE MODIFICATO
	printf("\n\nVETTORE FINALE\n");
	for(a = 0; a < VETSIZE; a++){
		printf("%d ", vett[a]);
	}
	
	
	
	return 0;
}
