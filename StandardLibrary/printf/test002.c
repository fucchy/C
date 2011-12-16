#include<stdio.h>
#include<stdlib.h>

// Filename    : test001.c
// Target      : ISO C99
// Compile     : GNU gcc
// how to      : $ gcc -std=c99 -pedantic -Wall test001.c -o test001.o
// Description : printf関数のテスト。引数に数値を指定してみる。

int main(int argc,char *argv[]){
	printf("%d\n",100);
	return EXIT_SUCCESS;
}

