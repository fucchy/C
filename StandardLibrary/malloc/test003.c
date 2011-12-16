#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int main(int argc,char *argv[]){
	//int data[50];
	//int size=sizeof(data);
	//printf("%d\n",size);

	int *data;
	data=(int *)malloc(sizeof(int)*100);
	int size=sizeof(data);
	printf("%d\n",size);
	return EXIT_SUCCESS;
}

