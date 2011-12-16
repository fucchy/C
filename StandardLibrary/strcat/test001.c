#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char *argv[]){
	char str1[]="ABC";
	char str2[]="123";

	strcat(str1,str2);

	printf("%s\n",str1);
	printf("%s\n",(char)str1[0]);

	return EXIT_SUCCESS;
}

