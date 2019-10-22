#include <stdio.h>
#include <stdlib.h>
int main(int argC, char *argu[]){
	int lista[argC];
	float sum, prom;
	sum=0;
	for(int i=1;i<argC;i++){
		lista[i]=atof(argu[i]);
	}
	for(int i=1; i<argC; i++){
		sum=sum+lista[i];
	}
	prom=sum/(argC-1);
	printf("%.2f\n", prom);
	return 0;
}
