#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
	printf("%s\n",__DATE__);
	printf("%s\n",__TIME__);
	printf("%s\n",__FILE__);
	printf("%d\n",__LINE__);
	printf("%s\n",__func__);
	return EXIT_SUCCESS;
}

