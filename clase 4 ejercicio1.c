#include <stdio.h>

int main()
{
    int n1, n2;

    printf( "Ingrese el primer numero:");
    scanf( "%d", &n1 );
    printf( "Ingrese el segundo numero:");
    scanf( "%d", &n2 );

    if ( n1 > n2 )
        printf( "Son iguales");
    else
		printf("Son distintos");
 
    getch(); /* Pausa */

    return 0;
}
