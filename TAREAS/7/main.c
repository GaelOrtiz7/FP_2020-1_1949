#include <stdio.h>
#include <stdlib.h>
#include <math.h> //Incluimos la librer�a "<math.h>", la cual nos permitir� elevar un n�mero a determinada potencia.
int main(int argC, char *argu[]){
	long int x, y, z; //Asignamos tres variables, una para el n�mero que vamos a elevar, otra para la potencia y otra que guardar� este resultado.
	x=atoi(argu[1]); // "x" es el n�mero a elevar.
	y=atoi(argu[2]); // "y" es la potencia a la que elevaremos "x".
	z=pow(x, y); // "z" guarda el valor de "x" elevado a la "y".
	printf("%li\n", z); //mostramos "z"
	return 0;
}