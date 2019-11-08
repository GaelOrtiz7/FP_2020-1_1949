#include<stdio.h>
#include<stdlib.h>
#include<math.h> //Incluimos la librería <math.h>, que en esta ocasión nos servirá para obtener el valor absoluto de un número.

//Creamos la función "RAIZ" que nos ayudará a obtener la raíz cuadrada de un número. 
double RAIZ(float numero, float tolerancia, float candidato){ //"numero" es el número del cual obtendremos la raíz, "tolerancia" es la tolerancia, "candidato" es el candidato (lo sé, súper originales los nombres).
	double x, y, z, w; 
	x=numero/candidato; //"x" será el resultado de dividir al número entre el candidato.
	y=(x+candidato)/2; //"y" será el promedio de "x" más el candidato.
	do{ //Inciamos un ciclo do-while.
		z=numero/y; //"z" serán los resultados de dividir al número original entre el promedio de los números anteriores.
		w=fabs(z-y); //"w" es la diferencia entre dichos los resultados de las divisiones y los números que dividen al número original (se usa el valor absoluto por si el resultado de la resta es negativo).
		y=(z+y)/2; //Iremos cambiando el promedio para dividir al número original entre nuevos "candidatos"
	}while(w>=tolerancia); //Repetiremos este proceso hasta que "w" sea menor o igual a la tolerancia que se desea.
	return z; //La función regresará como resultado al "z" que cumplió con la tolerancia.
}

int main(int argC, char *argu[]){
	double n, t, c, r;
	n=atof(argu[1]); //"n" tiene el valor del primer argumento (número del cuál se obtendrá la raíz).
	t=atof(argu[2]); //"t" tiene el valor del segundo argumento (tolerancia deseada).
	c=atof(argu[3]); //"c" tiene el valor del tercer argumento (candidato propuesto.
	r= RAIZ(n, t, c); //Para obtener el resultado "r" llamamos a nuestra función RAIZ y la ponemos a trabajar con "n", "t" y "c" en dicho orden.
	printf("%lf\n", r); //Mostramos el resultado.
	return 0;
}