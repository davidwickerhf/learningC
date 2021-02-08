#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int k, input, maxpari, mindispari, cicla;
	
	printf("INSERISCI UN VALORE (int)\n");
	scanf("%d", &k);
	cicla = 1;
	maxpari = -1;
	mindispari = -1;
	
	
	do {
		printf("\nINSERISCI UN VALORE (int) - Inserisci un multiplo di k per uscire\n");
		scanf("%d", &input);
		
		if(input % k == 0){
			printf("\nMultiplo di k inserito, chiudendo il ciclo...");
			cicla = 0;
		}
		else {
			if(input < 0){
				printf("\nPer favore, inserire un numero maggiore o uguale a 0:\n");
			}
			else {
				if(input % 2 == 0){
			
					if (maxpari == -1){
						maxpari = input;
					}
					if (input>maxpari) {
						maxpari = input;
					}
				}
				if(input % 2 != 0){
				
					if (mindispari == -1){
						mindispari = input;
					}
					if (input<mindispari){
						mindispari = input;
					}
				}
			}
		}
		
	} while(cicla == 1);
	
	printf("\n\nNumero Pari Maggiore: %d", maxpari);
	printf("\nNumero Dispari Minore: %d", mindispari);
	printf("\nProdotto: %d", maxpari*mindispari);

	return 0;
}

/*
La variabile input riceve tramite lo scanf i vari input dell'utente nel ciclo
la variabile maxpari salva il numero pari inserito in caso questo sia maggiore del numero inserito in tale variabile precedentemente
la variabile mindispari salva il numero dispari inserito in caso questo sia minore del numero inserito in tale variabile precedentemente
la variabile cicla agisce da condizione per il ciclo do-while()

Ho scelto un ciclo do-while() in quanto la parte di codice deve essere eseguita almeno una volta.
La condizione del do-while è la variabile cicla. Se quest'ultima è 1, il ciclo continuerà a ciclare, altrimenti il ciclo si interromperà
Se il valore inserito in input è minore di zero, il valore non verrà considerato e verrà richiesto di inserire un nuovo valore.
In caso il valore inserito sia un multiplo del valore inserito in k, il ciclo verrà interrotto.
All'interno del ciclo do-while() ho utilizzato più condizioni if() per selezionare un determinato blocco di codice.



*/
