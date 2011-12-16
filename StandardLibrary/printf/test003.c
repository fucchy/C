#include<stdio.h>
#include<stdlib.h>

// Filename    : test001.c
// Target      : ISO C99
// Compile     : GNU gcc
// how to      : $ gcc -std=c99 -pedantic -Wall test001.c -o test001.o
// Description : printf関数のテスト。引数に数値を指定してみる。

int main(int argc,char *argv[]){
	printf("%c\n",'a'); // 文字aが、文字として出力される。
	printf("%d\n",'a'); // 文字aのアスキーコードが数値(10進数)として出力される。
	printf("0x%x\n",'a'); // 文字aのアスキーコードが数値(16進数)として出力される。
	printf("0%o\n",'a'); // 文字aのアスキーコードが数値(8進数)として出力される。
	return EXIT_SUCCESS;
}

