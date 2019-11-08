#include <stdio.h>
#include <stdlib.h>

int main(int argC, char *argu[]){
	long int x, y, z, w; 
	x=atoi(argu[1]); 
	y=atoi(argu[2]); 
	z=1;
	w=1;
	do{
		w=w*x;
		z++;
	}while(z<=y);
	printf("%li\n", w);
	return 0;
}
