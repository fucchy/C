#include<stdio.h>
#include<string.h>
#include<search.h>

int compare(const void *x,const void *y);

int main(void){
	int n;
	
	FILE *fp_i,*fp_o;
	int person=3;
	char name[person][10];//名前の配列(5163人*100文字まで)
	int i,k;//ソート部用
	char temp[10];//ソート部一時文字列
	
	if((fp_i=fopen("before.txt","r"))==NULL){
		printf("fopen failed\n");
		return 0;
	}

	if((fp_o=fopen("after.txt","w"))==NULL){
		printf("fopen failed\n");
		return 0;
	}

	//char a[]="orange";
	//char b[]="apple";
	//char c[]="melon";
	//char *name[3];

	//name[0]=a;
	//name[1]=b;
	//name[2]=c;

	for(n=0;n<person;n++){
		fscanf(fp_i,"%s",&name[n][0]);
	}

	printf("ソート前\n");
	for(n=0;n<3;n++){
		printf("%s\n",name[n]);
	}

	qsort(name,3,sizeof(char *),compare);

	printf("ソート後\n");
	for(n=0;n<3;n++){
		printf("%s\n",name[n]);
	}
	fclose(fp_i);
	fclose(fp_o);
}

int compare(const void *x,const void *y){
	return strcmp(*(char **)x,*(char **)y);
}

