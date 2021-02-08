#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define VETSIZE 10

int main(int argc, char *argv[]) {
	int vett[VETSIZE], i, max, index, encountered;
	srand((unsigned) time(NULL));
	for (i=0; i<VETSIZE; i++){
		vett[i] = rand()%100;
		printf("vett[%d] = %d\n", i, vett[i]);
	}
	printf("\n\n");
	encountered = 0;
	for (i=0; i<VETSIZE; i++){
		if (vett[i] %2 ==0){
			encountered++;
		} else{
			printf("Si sono incontrati %d valori pari. Il valore dispari e\': %d", encountered, vett[i]);
			break;
		}
	}

	return 0;
}
