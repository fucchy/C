#include<stdio.h>
#include<stdlib.h>

int main(void){
	FILE *file;
	file=fopen("./test.txt","w");
	fclose(file);
	return EXIT_SUCCESS;
}

