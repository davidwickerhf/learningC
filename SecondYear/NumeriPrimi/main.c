#include <stdio.h>
#include <stdlib.h>

// NUMERI PRIMI - David Wicker

int main() {
	printf("NUMERI PRIMI DA 1 A 100\n");
	printf("Premi qualsiasi tasto per visualizzare...\n");
	getch();
	
	// i => contatore da 1 a 100
	// check => Un numero primo è divisibile per due numeri: da 1 e da se stesso
	// i => contatore da 0 a 100 per controllare la divisibilità del numero
	int i,check,a;
    for(i=1; i<=100; i++)
    {
        check=0;
        for(a=1; a<=i; a++)
        {
            if(i%a==0)
                check++;
        }
        if(check==2)
            printf("%d\n" ,i);
    }
	printf("\nPremi qualsiasi tasto per chiudere");
	getch();
	return 0;
}
