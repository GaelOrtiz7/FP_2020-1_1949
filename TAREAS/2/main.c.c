#include <stdio.h>
#include <stdlib.h>
int main(int argC, char *argu[]){
	int x;
	x=atoi(argu[1]);
	(x%2==0) ? printf("1\n") : printf("0\n");
	return 0;
}
