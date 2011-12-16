#include<stdio.h>
#include<stdlib.h>

int main(void){
	printf("char:%dBytes\n",sizeof(char));
	printf("int:%dBytes\n",sizeof(int));
	printf("long:%dBytes\n",sizeof(long));
	printf("float:%dBytes\n",sizeof(float));
	printf("double:%dBytes\n",sizeof(double));

	return EXIT_SUCCESS;
}

