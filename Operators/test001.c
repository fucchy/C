/*
 * 演算子に使い慣れる
 *
 */

#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
	printf("1+2*3=%d\n",1+2*3); // 二項+演算子と二項*演算子との優先順位を比較すると、1+(2*3)をしている事と同じになる
	printf("(1+2)*3=%d\n",(1+2)*3);
	return EXIT_SUCCESS;
}

