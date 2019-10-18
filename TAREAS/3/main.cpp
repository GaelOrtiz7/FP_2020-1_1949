#include <stdio.h>
#include <stdlib.h>

int main(int argC, char *argu[]){
	float x, y, suma, resta, mult, div;
	x=atof(argu[1]);
	y=atof(argu[2]);
	suma=x+y;
	resta=x-y;
	mult=x*y;
	div=x/y;
	printf("%.2f\n", suma);
	printf("%.2f\n", resta);
	printf("%.2f\n", mult);
	printf("%.2f\n", div);
	return 0;
}
