#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define VETSIZE 10

int main(int argc, char *argv[]) {
	int vett[VETSIZE], i, dispari, pari, npari, ndispari;
	srand((unsigned) time(NULL));
	for (i = 0; i<VETSIZE; i++){
		vett[i] = rand()%100;
		printf("vett[%d] = %d\n", i, vett[i]);
	}
	pari = 0;
	dispari = 0;
	npari = 0;
	ndispari = 0;
	for (i = 0; i<VETSIZE; i++){
		if (vett[i] %2 == 0){
			pari += vett[i];
			npari++;
		} else {
			dispari += vett[i];
			ndispari++;
		}
	}
	printf("\MEDIA NUMERI PARI: %d \MEDIA NUMERI DISPARI: %d", pari/npari, dispari/ndispari);
	return 0;
}
