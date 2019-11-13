#include<stdio.h>
#include<stdlib.h>
// La función es muy parecida a la de un factorial, solo que en vez de multiplicar se suma.
int SALUDOS(int x){ // Creamos la función "SALUDOS" que nos regresará el número de saludos (entero) que se da con cierto número de personas.
	int y, z; // Utilizaremos dos variables.
	y=1; // Inicializamos "y" en 1.
	z=0; // Inicializamos "z" en 0.
	do{ // Iniciamos un ciclo do-while.
		z=z+y; // "z" tendrá el valor de ella misma más el valor de "y"
		y++; // Cada vez que se repita el ciclo aumentaremos el valor de "y" en uno.
	}while(y<x); // Repetiremos el ciclo mientras "y" sea menos que el valor de entrada, ya que este no debe ser tomado en cuenta durante la suma para regresar el número de saludos.
	return z; // Regresamos "z", que será el número total de saludos.
}

int main(int argC, char *argu[]){
	int x, y;
	x=atoi(argu[1]); // Le asignamos a "x" el valor del primer argumento.
	y=SALUDOS(x); // La variable "y" será el resultado de aplicar nuestra función "SALUDOS" al argumento de entrada.
	printf("%d\n", y); // Mostramos el resultado.
	return 0;
}
