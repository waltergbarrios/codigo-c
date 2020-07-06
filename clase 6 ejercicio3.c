#include <stdio.h>

int main()
{
	void asteriscos(); /* declaracion */
	int nroAsteriscos;
	printf("Ingrese un cantidad de astericos ");
	scanf("%i", &nroAsteriscos);
	
	asteriscos(nroAsteriscos);
}


void asteriscos (int asteriscos) 
{
	int i;
	for(i=1; i<=asteriscos; i++)
 		printf("*");


}
