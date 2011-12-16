#include<stdio.h>
#include<stdlib.h>

int main(void){
	char x[]="abcdefg\n";
	char *p;
	int i;
	p=x;
	for(i=0;i<=8;i++){
		printf("%c",*p);
		p++;
	}
	return EXIT_SUCCESS;
}

