#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
	char c='A';
	char *p;
	p=&c;

	printf("%c\n",*p);
	*p=*p+2;
	printf("%c\n",*p);

	return EXIT_SUCCESS;
}

