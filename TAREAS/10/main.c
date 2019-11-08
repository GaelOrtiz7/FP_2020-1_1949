#include<stdio.h>
#include <stdlib.h>
#include<math.h> //Incluimos la librer�a <math.h> que nos ayudar� a realizar ra�ces cuadradas.

int main(int argC, char *argu[]){
	double a, b, c, y, x, x1, x2; //Declaramos las variables necesarias para resolver las ecuaciones.
	a=atof(argu[1]); //"a" tendr� el valor del primer argumento, o sea el t�rmino cuadr�tico de la ecuaci�n.
	b=atof(argu[2]); //"b" tendr� el valor del segundo argumento, o sea el t�rmino lineal de la ecuaci�n.
	c=atof(argu[3]); //"c" tendr� el valor del tercer argumento, o sea el t�rmino independiente de la ecuaci�n.
	y= ((b*b)-(4*a*c)); //"y" ser� el determinante de nuestra soluci�n.
	if(y==0){ //Si el determinante es igual a cero, la ecuaci�n tendr� solamente una soluci�n.
		x=(-b)/(2*a); //Aqu� le damos el valor a "x".
		printf("%.2lf\n", x); //Mostramos nuestra soluci�n a "x".
	}
	if(y>0){ // Si el determinante es positivo, realizaremos las siguientes operaciones:
		x1=(-b+sqrt(y))/(2*a); // "x1" ser� -"b" + la ra�z (sqrt) del determinante y todo esto ser� dividido entre 2 por "a".
		x2=(-b-sqrt(y))/(2*a); // "x2" ser� -"b" - la ra�z (sqrt) del determinante y todo esto ser� dividido entre 2 por "a".
		printf("%.2lf\n", x1); // Mostramos "x1".
		printf("%.2lf\n", x2); // Mostramos "x2".
	}
	if(y<0){ // Si el determinante es negativo, las soluciones ser�n imaginarias, por lo tanto realizaremos lo siguiente:
		y=(-1*y); // Multiplicamos el determinante por -1 para hacerlo positivo y poder obtener su ra�z. 
		x1=(-b+sqrt(y))/(2*a); // Despu�s repetimos las operaciones del proceso anterior tanto para "x1" como para "x2".
		x2=(-b-sqrt(y))/(2*a);
		printf("%.2lf\n", x1); // Mostramos "x1".
		printf("%.2lf\n", x2); // Mostramos "x2".
	}
	
	return 0;
}