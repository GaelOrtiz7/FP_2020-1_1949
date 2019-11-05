#include<stdio.h>
#include<stdlib.h>

int main(int argC, char *argu[]){
	int x, sumadigitos; // Declaramos dos variables: "x" que tomará el valor del primer argumento y "sumadigitos" que será el resultado de la suma de sus dígitos (para nada obvio).
	x=atoi(argu[1]); // Hacemos que "x" tome el valor del primer argumento.
	sumadigitos=0; //Inicializamos "sumadigitos" a cero, para no tener problemas al efectuar operaciones.
	do{ // Iniciamos un ciclo "do-while" para realizar los cálculos.
	// "sumadigitos" será igual a ella misma más el módulo de "x" entre 10. Dicho módulo es el último dígito escrito (Ej. 123 % 10 = 3).
		sumadigitos=sumadigitos+(x%10);
		x=(x/10); //Dividimos a "x" entre 10 para quitarle su último dígito (Ej. 123 / 10 = 12.3, pero como "x" es un entero el resultado será 12)
	}while(x!=0); //Repetimos dicho proceso mientras "x" sea diferente de cero, ya que en ese momento se habrán acabado los dígitos para sumar. 
	printf("%i\n", sumadigitos); //Mostramos el resultado de la suma.
	return 0;
}