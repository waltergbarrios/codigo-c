/* Programa para sumar dos numeros enteros

*/

#include <stdio.h>

int main(){
	int operando1, operando2, suma; /* declaraci�n de variables*/
	
	printf("Ingrese operando1: ");  /* solicita datos*/
	scanf("%d", &operando1);        /* lee el primer dato*/
	printf("Ingrese operando2: ");  /* solicita dato*/
	scanf("%d", &operando2);        /* lee el segundo operand0*/
	suma= operando1 + operando2;    /* operaci�n de suma y asignaci�n*/
	printf("Resultado de la suma es: %d\n", suma); /*muestra suma*/
	
	return 0;
}
