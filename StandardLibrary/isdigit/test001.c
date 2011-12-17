/*
 * isdigit関数
 *
 */

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc,char *argv[]){
	int a;
	a=getchar(); // キーボードで3を入力すると、3に相当するASCIIコードがaに代入される。
	if(isdigit(a)!=0){
		printf("あなたが入力した数字は%cです。\n",a);
	}
	printf("%d\n",isdigit('x')); // 非数字(0〜9以外の文字の場合は、0が返ってくる)
	printf("%d\n",3);

	return EXIT_SUCCESS;
}

