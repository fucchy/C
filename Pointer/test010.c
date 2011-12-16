/*
 * ポインタの実験
 *
 *
 */

#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
	int a;
	int * p=&a;
	//p=&a;
	//*p=102;
	printf("%x\n",*p);
	return EXIT_SUCCESS;
}

