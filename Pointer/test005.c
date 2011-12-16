#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
	static const char a[]="1\n";
	//char a='a';
	//char *p;
	//char a[]="ABC";

	//p=&a;
	//printf("%d\n",*p);


	//static const char a[]="Hello world\n";	// これで通る
	//char a[]="Hello world\n";					// これじゃエラー
	printf(a);

	return EXIT_SUCCESS;
}

