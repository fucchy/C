/*
 * ポインタの勉強
 * filename:test001.c
 * 
 * ポインタの使い方:
 * (1)宣言
 * (2)アドレスの設定
 * (3)使用
 *
 */

#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
	int a;					// 変数aの型宣言
	int * p;				// ポインタpの型宣言とポインタ宣言

	a = 100;				// 変数aに整数値100を代入
	printf(" a = %d\n",a);	// 変数pに代入されている値を表示

	p = &a;					// 変数aのアドレスをポインタpに代入
	printf("*p = %d\n",*p);	// ポインタpの参照先(a)の値を表示

	// *p++;				// これだと怒られた。なんで？
	// *(p++);				// これと同じエラーだったので、このように評価されてる？
	(*p)++;					// ポインタpの参照先に1を加える

	printf("*p = %d\n",*p);	// (*p)++で*pの中に+1がされたので、101になるはず
	printf(" a = %d\n",a);	// ポインタpの参照先がaなので、aの値が+1

	return EXIT_SUCCESS;
}

