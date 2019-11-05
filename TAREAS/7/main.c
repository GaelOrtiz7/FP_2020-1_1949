#include <stdio.h>
#include <stdlib.h>
#include <math.h> //Incluimos la librería "<math.h>", la cual nos permitirá elevar un número a determinada potencia.
int main(int argC, char *argu[]){
	long int x, y, z; //Asignamos tres variables, una para el número que vamos a elevar, otra para la potencia y otra que guardará este resultado.
	x=atoi(argu[1]); // "x" es el número a elevar.
	y=atoi(argu[2]); // "y" es la potencia a la que elevaremos "x".
	z=pow(x, y); // "z" guarda el valor de "x" elevado a la "y".
	printf("%li\n", z); //mostramos "z"
	return 0;
}