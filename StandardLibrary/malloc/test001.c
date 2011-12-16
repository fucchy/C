#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
	int i;
	int *heap;
	heap=(int *)malloc(sizeof(int)*10);

	if(heap==NULL){
		exit(EXIT_FAILURE);
	}

	for(i=0;i<10;i++){
		heap[i]=i;
	}

	printf("%d\n",heap[5]);

	free(heap);
	return EXIT_SUCCESS;
}

