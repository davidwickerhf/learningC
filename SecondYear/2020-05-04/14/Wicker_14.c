#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	//VARIABILI
	int ripetizioni,a, input, i;
	
	// SCEGLI RIPETIZIONI e INIZIALIZZA VETTORE
	printf("Inserisci un numero di ripetizioni (int):\n");
	scanf("%d", &ripetizioni);
	int vett[ripetizioni];
	
	// RICHIEDI INSERIMENTO VALORI
	int mode = 0;
	int present = 0;
	for(a = 0; a < ripetizioni; a++) {
		if(mode == 0){
			printf("Inserisci un valore (int): [Step %d su %d]\n", a+1, ripetizioni);
		} else {
			printf("Il valore inserito (%d) e gia presente. Si prega di inserire un nuovo valore(int): [Step %d su %d]\n", input, a+1, ripetizioni);
			mode = 0;
		}
		scanf("%d", &input);
		
		for (i = 0; i < ripetizioni; i++){
			if(vett[i] == input){
				present = 1;
				mode = 1;
				a--;
			}
		}
		if(present == 0){
			vett[a] = input;
		}
	}
	
	// STAMPA VALORI OTTENUTI
	printf("\n\nVALORI OTTENUTI: \n");
	for (a = 0; a < ripetizioni; a++){
		printf("%d ", vett[a]);
	}
	

	
	return 0;
}
