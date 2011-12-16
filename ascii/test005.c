#include<stdio.h>

int main(){

	char Meibo[5][10]={"Asano","Fukushima","Furuichi","Hirao","Nanbo"};
	int i;
	for(i=0;i<10;i++){
	printf("Address:Data\n");
	printf("     %02d:%s\n",i+1,&Meibo[0][i]);
	}
	//printf("%s\n",&Meibo[1][0]);
	//printf("%s\n",&Meibo[2][0]);
	//printf("%s\n",&Meibo[3][0]);
	//printf("%s\n",&Meibo[4][0]);
	return 0;
}

