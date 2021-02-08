#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int input, nump, numc, winner, player, cicla, bonus, estratto, estrattoCPU;

	// PLAYER -> 0 = giocatore umano | 1 = CPU
	// CICLA -> 0 = non ciclare | 1 = continua a ciclare
	// WINNER -> 0 = giocatore umano | 1 = CPU
	
	// NUMERI CASUALI:
	srand((unsigned) time(NULL));
	int max, min;
	max = 11;
	min = 1;
	
	printf("GIOCO IN C - INIZIO MANCHE");
	// Estrazione primo numero al giocatore
	estratto = generatoreRandom();
	nump += estratto;
	printf("\nNUM ESTRATTO: %d | PUNTEGGIO ATTUALE CPU: %d", estratto, nump);
	// Inizializzazione primo numero del CPU
	numc = 0;
	// Inizializzazione varibili di configurazione
	player = 0;
	winner = -1;
	cicla = 1;
	bonus = 0;
	
	// CICLO TURNI
	do {
		if (player == 0){
			// TURNO DEL GIOCATORE
			printf("\n\n--> Per estrarre un altro numero digitare '1' altrimenti digitare un altro numero qualunque:\n");
			scanf("%d", &input);
			if (input == 1){
				// GIOCATORE ESTRAE NUOVO NUMERO
				estratto = rand()% max + min;
				nump += estratto;
				printf("\nNUM ESTRATTO: %d | PUNTEGGIO ATTUALE GIOCATORE: %d", estratto, nump);
				if (nump > 21){
					winner = 1;
					cicla = 0;
					bonus -= 5;
				}
			} else {
				// GIOCATORE CHIUDE LA MANCHE
				printf("Giocatore ha chiuso il turno\n\n");
				player = 1;
			}
		} else{ 
			// TURNO DEL CPU
			estrattoCPU = rand()% max + min;
			numc += estrattoCPU;
			printf("\nNUM ESTRATTO DA CPU: %d | PUNTEGGIO ATTUALE CPU: %d", estrattoCPU, numc);
			
			// CALCOLO BONUS E VINCITA
			if (numc > 21){
				winner = 0;
				cicla = 0;
				bonus += 5;
			} else {
				if (numc > nump){
					winner = 1;
					cicla = 0;
					bonus -= (numc - nump);
				} else {
					if (nump > 16 && (nump - numc) < 4 && nump <= 21){
						if (nump == numc){
							winner = -1;
							cicla = 0;
						} else {
							winner = 0;
							cicla = 0;
							bonus += nump - numc;
						}
					}
				}
			}
		}
		
	} while(cicla == 1);
	
	// RESTITUISCI RISULTATI
	printf("\n\n");
	if(winner == 0){
		printf("VINCITORE: GIOCATORE! ");
	} else {
		if (winner == 1){
			printf("VINCITORE: CPU! ");
		} else {
			printf("NESSUN VINCITORE!");
		}
	}
	printf("\nBONUS GIOCATORE: %d", bonus);
	printf("\nPUNTEGGI-> Giocatore: %d | CPU: %d", nump, numc);
	
	return 0;
}

int generatoreRandom(){
	srand((unsigned) time(NULL));
	int max, min;
	max = 11;
	min = 1;
	int num = rand()% max + min;
	return num;
}
