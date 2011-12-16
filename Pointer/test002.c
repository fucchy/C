#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
	char c;
	char *p;

	c = 'A';
	p = &c;
	printf("%c\n",*p);

	return EXIT_SUCCESS;
}

