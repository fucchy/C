#include<stdio.h>
#include<stdlib.h>

int main(void){
	char *str;

	/* 文字列のためのメモリを確保 */
	str=(char *)malloc(100);
	if(str==NULL){
		printf("メモリが確保できません\n");
		exit(EXIT_FAILURE);
	}

	gets(str);
	puts(str);
	free(str);

	return EXIT_SUCCESS;
}

