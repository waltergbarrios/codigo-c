#include <stdio.h>

int main()
{
	void mayorMenor(); /* declaracion */
	int nro1, nro2;
	printf("Ingrese un nro");
	scanf("%i", &nro1);
	
	printf("Ingrese un nro");
	scanf("%i", &nro2);
	
	mayorMenor(nro1, nro2);
 
}


void mayorMenor (int nro1, int nro2) 
{
	if(nro1 > nro2)
		printf("%i es mayor que %i ", nro1, nro2 );
	else if(nro1 < nro2)
		printf("%i es mayor que %i ", nro2, nro1 );
	else
		printf("%i es igual que %i ", nro2, nro1 );

}

