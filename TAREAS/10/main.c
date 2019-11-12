#include<stdio.h>
#include <stdlib.h>
#include<math.h> //Incluimos la librería <math.h> que nos ayudará a realizar raíces cuadradas.

int main(int argC, char *argu[]){
	double a, b, c, y, x, x1, x2, i; //Declaramos las variables necesarias para resolver las ecuaciones.
	a=atof(argu[1]); //"a" tendrá el valor del primer argumento, o sea el término cuadrático de la ecuación.
	b=atof(argu[2]); //"b" tendrá el valor del segundo argumento, o sea el término lineal de la ecuación.
	c=atof(argu[3]); //"c" tendrá el valor del tercer argumento, o sea el término independiente de la ecuación.
	y= ((b*b)-(4*a*c)); //"y" será el determinante de nuestra solución.
	if(y==0){ //Si el determinante es igual a cero, la ecuación tendrá solamente una solución.
		x=(-b)/(2*a); //Aquí le damos el valor a "x".
		printf("%.2lf\n", x); //Mostramos nuestra solución a "x".
	}
	if(y>0){ // Si el determinante es positivo, realizaremos las siguientes operaciones:
		x1=(-b+sqrt(y))/(2*a); // "x1" será -"b" + la raíz (sqrt) del determinante y todo esto será dividido entre 2 por "a".
		x2=(-b-sqrt(y))/(2*a); // "x2" será -"b" - la raíz (sqrt) del determinante y todo esto será dividido entre 2 por "a".
		printf("%.2lf\n", x1); // Mostramos "x1".
		printf("%.2lf\n", x2); // Mostramos "x2".
	}
	if(y<0){ // Si el determinante es negativo, las soluciones serán imaginarias, por lo tanto realizaremos lo siguiente:
		y=(-1*y); // Multiplicamos el determinante por -1 para hacerlo positivo y poder obtener su raíz. 
		x=(-b)/(2*a); // Realizamos las operaciones para la parte real de la solución.
		i=(sqrt(y))/(2*a); //Realizamos las operaciones para la parte imaginaria de la solución.
		printf("%.2lf+%.2lfi\n", x, i); // Mostramos la primera solución, sumando la parte imaginaria. 
		printf("%.2lf-%.2lfi\n", x, i); // Mostramos la segunda solución, restando la parte imaginaria.
	}
	
	return 0;
}
