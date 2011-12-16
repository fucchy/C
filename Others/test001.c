/*
 * コマンドライン引数の取得
 * 
 * 参考URI
 * http://www.fireproject.jp/feature/c-language/basic-library/getargs.html
 */ 

#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
	int i;

	for(i=0;i<argc;i++){
		fprintf(stdout,"arg %2d is %s\n",i,argv[i]);
	}
	return EXIT_SUCCESS;
}

