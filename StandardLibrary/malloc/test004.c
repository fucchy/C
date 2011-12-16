#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int main(int argc,char *argv[]){
	char *data;
	data=(char*)malloc(90);
	printf("%s\n",data);
	printf("%p\n",data);
	printf("%d\n",sizeof(data));
	printf("%d\n",malloc_usable_size(data));
	free(data);
	return EXIT_SUCCESS;
}

