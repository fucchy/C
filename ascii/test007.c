#include<stdio.h>

int main(){
	char* a[5]={"Asano","Fukushima","Furuichi","Hirao","Nanbo"};
	int i;
	for(i=0;i<5;i++){
	printf("%p\n",&a[i]);
	}

	return 0;
}

