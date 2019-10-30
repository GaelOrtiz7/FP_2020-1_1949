#include <stdio.h>
#include <stdlib.h>
int BARAJA(char a){ //Creamos una función que nos ayude a asignarle un valor a cada letra, tal cual en la baraja inglesa (no se me ocurrió otro nombre).
	int y;
	if(a=='j'||a=='J'||a=='Q'||a=='q'||a=='K'||a=='k'){ //Estas letras tienen el valor de 10.
		y=10;
		return y;
	}
	if(a=='a'||a=='A'){ //Estas letras tienen el valor de 11.
		y=11;
		return y; //La función debe regresar el valor de la letra.
	}
}
int main(int argC, char * argu[]){
	int x, z; //Variables que nos ayudarán a guardar el valor de los argumentos introducidos al programa.
	for(int i=1;i<argC;i++){
		z=argu[i][0]=='A'||argu[i][0]=='a'||argu[i][0]=='J'||argu[i][0]=='j'||argu[i][0]=='Q'||argu[i][0]=='q'||argu[i][0]=='K'||argu[i][0]=='k'; //Se establece una comparación, donde se verá si el argumento es un entero o un caracter.
		if(z!=1){ //Si el argumento no es un caracter.
			x=atoi(argu[i]); //Basta con convertir el argumento a entero.
		}
		else{ //Si el argumento sí es un caracter
			x=BARAJA(argu[i][0]); //Utilizamos la función "BARAJA" para asignarle el valor correspondiente.
		}
		printf("%i\n", x); //Mostramos los valores. 
	}
	return 0;
}