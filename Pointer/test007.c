/*
 * このプログラムにはバグがあります。
 * 原因をつきとめて修正して下さい。
 *
 */

#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
	char	str[]="sample";
	char	*pstr;
	
	pstr=str;

	pstr[5]="a";

	return EXIT_SUCCESS;
}

