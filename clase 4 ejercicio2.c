#include <stdio.h>

int main()
{
    int numero;

    printf("Ingrese un numero: ");
    scanf( "%d", &numero );

    if ( numero % 2 == 0 )
        printf( "\n Es par" );
    else
        printf( "\n Es impar" );

    getch(); /* Pausa */

    return 0;
}
