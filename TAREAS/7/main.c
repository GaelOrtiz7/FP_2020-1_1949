#include <stdio.h>
#include <stdlib.h>

int main(int argC, char *argu[]){
	long int x, y, z, w; 
	x=atoi(argu[1]); //Le asignamos a "x" el valor del primer parámetro de entrada (el número que será elevado).
	y=atoi(argu[2]); //Le asignamos a "y" el valor del segundo parámetro de entrada (el exponente).
	z=1; //Inicializamos "z" en 1.
	w=1; //Inicializamos "w" en 1.
	do{ //Iniciamos un ciclo do-while. 
		w=w*x; //"w" será igual a ella misma multiplicada por "x".
		z++; //Cada vez que se multiplique a "w" se le agregará uno a "z"
	}while(z<=y); //Repetiremos este ciclo hasta que "z" sea igual a "y", lo que hará que "x" se multiplique a sí misma "y" veces.
	printf("%li\n", w); //Mostramos "w" que es el resultado de dicha iteración. 
	return 0;
}
