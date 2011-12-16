#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
	//char	str[]="sample";
	//printf("%s\n",str);

	char		str[]="sample";
	char		*pstr=str;
	const char	s[]="pointer";

	str[5]='a';						// 配列strの5番目のeのところにaを代入

	printf("%s\n",str);				// 表示されるのは、samplaになる
	printf("%d\n",*pstr);
	printf("%s\n",s);				// 表示されるのは、pointer

	return EXIT_SUCCESS;
}

