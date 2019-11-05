#include<stdio.h>
#include<stdlib.h>

int main(int argC, char *argu[]){
	int x; // Declaramos la variable "x" como un entero, que tomar� el valor del primer argumento y ser� la comparada en un if.
	float y, faren, cels; // Declaramos "y", que tendr� el valor del segundo argumento para efectuar los c�lculos. "faren" se refiere a �F y "cels" a �C, son variables que ser�n utilizadas para guardar los resultados.
	x=atoi(argu[1]); // Hacemos que "x" tome el valor del primer argumento.
	y=atof(argu[2]); // Hacemos que "y" tome el valor del segundo argumento.
	if(x==0){ //Se usa un if para comparar "x", si esta es igual a cero, se transformar� a "y" de grados �C a �F.
		faren= (y*(1.8))+32; // Se utiliza la f�rmula, d�nde multiplicamos los �C por 9/5 (o sea 1.8) y le restamos treinta y dos.
		printf("%.2f\n", faren); //Mostramos el resultado de los �F.
	}
	else{ //Si "x" es diferente de cero, se transformar� a "y" de �F a �C.
		cels=(y-32)*(0.55555555555555555555555555555556); //Utilizamos la f�rmula, en la que a los �F les restamos 32 y al resultado lo multiplicamos por 5/9 (o sea 0.5555...).
		printf("%.2f\n", cels); //Mostramos el resultado de los �C.
	}
	return 0;
}