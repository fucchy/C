/*
 *
 *
 */

#include<stdio.h>
#include<stdlib.h>

void func1(void);
void func2(void);
int main(void);

/* atexit()に登録する関数 */
void func1(void){
	printf("func1()を実行しました。\n");
}

/* atexit()に登録する関数 */
void func2(void){
	printf("func2()を実行しました。\n");
}

/* atexit()に登録する関数 */
void func3(void){
	printf("func3()を実行しました。\n");
}

int main(void){
	atexit(func1); /* 終了の際、func2が先に実行される */
	atexit(func2);
	atexit(func3);

	return EXIT_SUCCESS;
}

