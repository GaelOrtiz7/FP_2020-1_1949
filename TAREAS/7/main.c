#include <stdio.h>
#include <stdlib.h>

int main(int argC, char *argu[]){
	long int x, y, z, w; 
	x=atoi(argu[1]); //Le asignamos a "x" el valor del primer par�metro de entrada (el n�mero que ser� elevado).
	y=atoi(argu[2]); //Le asignamos a "y" el valor del segundo par�metro de entrada (el exponente).
	z=1; //Inicializamos "z" en 1.
	w=1; //Inicializamos "w" en 1.
	do{ //Iniciamos un ciclo do-while. 
		w=w*x; //"w" ser� igual a ella misma multiplicada por "x".
		z++; //Cada vez que se multiplique a "w" se le agregar� uno a "z"
	}while(z<=y); //Repetiremos este ciclo hasta que "z" sea igual a "y", lo que har� que "x" se multiplique a s� misma "y" veces.
	printf("%li\n", w); //Mostramos "w" que es el resultado de dicha iteraci�n. 
	return 0;
}
