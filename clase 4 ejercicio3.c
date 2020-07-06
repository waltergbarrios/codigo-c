#include <stdio.h>

int main()
{
    int n1, n2, n3;

    printf( "Ingrese primer numero: ");
    scanf( "%d", &n1 );
    printf( "Ingrese segundo numero: ");
    scanf( "%d", &n2 );
    printf( "Ingrese tercer numero: ");
    scanf( "%d", &n3 );

    if ( n1 >= n2 && n1 >= n3 )
        printf( "\n %d es el mas grande", n1 );
    else
        if ( n2 > n3 )
            printf( "\n %d es el mas grande", n2 );
        else
            printf( "\n %d es el mas grande", n3 );
 
    getch(); /* Pausa */

    return 0;
}
