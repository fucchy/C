/*
 * 関数へのポインタ - 標準ライブラリ関数atexit()について
 *
 * 参考URI
 * http://www1.cts.ne.jp/~clab/hsample/Point/Point21.html
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

int main(void){
	atexit(func1); /* 終了の際、func2が先に実行される */
	atexit(func2);
}

/*
 * 自分なりのメモ:
 * main関数内で、atexit(func1)、atexit(func2)が順番に読み込まれて
 * 登録されていく。
 * そして、プログラムが正常終了したとき、即ちmain関数から抜けたとき、
 * 登録されたatexit関数が実行されていく？
 *
 */
