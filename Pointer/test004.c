#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
	int a=611,*ptr;

	ptr=&a;
	printf("変数aのアドレス = %p\n",(void *)&a);
	printf("変数aの値 = %d\n",a);
	printf("ポインタptrの値 = %p\n",(void *)ptr);
	printf("ポインタptrの指す値 = %d\n",*ptr);

	return EXIT_SUCCESS;
}

