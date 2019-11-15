#include<stdio.h>
#include<stdlib.h>

int main(int argC, char *argu[]){
	int lista[argC-1]; // Creamos la lista de números (enteros).
	int i, j, num; // Declaramos las variables necesarias, dos contadores y otra que guarde los argumentos.
	i=0; // Inicializamos "i" en 1.
	j=1; // Inicializamos "j" en 0.
	do{ // Creamos un ciclo do-while.
		num=atoi(argu[j]); // Copiamos los argumentos en una nueva lista.
		lista[i]=num;
		i++; // Incrementamos a "i" en uno cada vez que se repita el ciclo.
		j++; // Incrementamos a "j" en uno cada vez que se repita el ciclo.
	}while(i<argC-1); // Repetiremos este ciclo mientras "i" sea menor al argC-1.	
	int variable; // Cremos una nueva variable que nos ayudará a guardar datos.
	for(i=1;i<argC-1;i++){
		for(j=0;j<argC-1-i;j++){ 
			if(lista[j]>lista[j+1]){ // Ordenamos los números de menor a mayor, comparando de dos en dos los números.
				variable=lista[j]; // Guardamos este dato en la variable.
				lista[j]=lista[j+1]; // Retrocedemos al siguiente número.
				lista[j+1]=variable; // Cambiamos el siguiente por el guardado en nuestra variable.
			}
		}
	}
	for(i=0;i<argC-1;i++){
		printf("%i\n", lista[i]); // Mostramos nuestra lista ya ordenada. 
	}
	return 0;
}
