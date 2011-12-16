#include<stdio.h>
#include<stdlib.h>

int main(void){
	int x=1;
	int i=1;

	while(x<1000000000){
		printf("i = %02d : x = %9d\n",i,x);
		x*=2; // x = x * 2
		i++; // i = i + 1
	}
	return EXIT_SUCCESS;
}

