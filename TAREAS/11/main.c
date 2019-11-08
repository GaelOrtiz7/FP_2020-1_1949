#include<stdio.h>
#include<stdlib.h>
#include<math.h> //Incluimos la librer�a <math.h>, que en esta ocasi�n nos servir� para obtener el valor absoluto de un n�mero.

//Creamos la funci�n "RAIZ" que nos ayudar� a obtener la ra�z cuadrada de un n�mero. 
double RAIZ(float numero, float tolerancia, float candidato){ //"numero" es el n�mero del cual obtendremos la ra�z, "tolerancia" es la tolerancia, "candidato" es el candidato (lo s�, s�per originales los nombres).
	double x, y, z, w; 
	x=numero/candidato; //"x" ser� el resultado de dividir al n�mero entre el candidato.
	y=(x+candidato)/2; //"y" ser� el promedio de "x" m�s el candidato.
	do{ //Inciamos un ciclo do-while.
		z=numero/y; //"z" ser�n los resultados de dividir al n�mero original entre el promedio de los n�meros anteriores.
		w=fabs(z-y); //"w" es la diferencia entre dichos los resultados de las divisiones y los n�meros que dividen al n�mero original (se usa el valor absoluto por si el resultado de la resta es negativo).
		y=(z+y)/2; //Iremos cambiando el promedio para dividir al n�mero original entre nuevos "candidatos"
	}while(w>=tolerancia); //Repetiremos este proceso hasta que "w" sea menor o igual a la tolerancia que se desea.
	return z; //La funci�n regresar� como resultado al "z" que cumpli� con la tolerancia.
}

int main(int argC, char *argu[]){
	double n, t, c, r;
	n=atof(argu[1]); //"n" tiene el valor del primer argumento (n�mero del cu�l se obtendr� la ra�z).
	t=atof(argu[2]); //"t" tiene el valor del segundo argumento (tolerancia deseada).
	c=atof(argu[3]); //"c" tiene el valor del tercer argumento (candidato propuesto.
	r= RAIZ(n, t, c); //Para obtener el resultado "r" llamamos a nuestra funci�n RAIZ y la ponemos a trabajar con "n", "t" y "c" en dicho orden.
	printf("%lf\n", r); //Mostramos el resultado.
	return 0;
}