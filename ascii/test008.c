#include<stdio.h>
#include<string.h>

int main(){
	FILE *fp;
	char row[46448];
	unsigned int i;

	fp=fopen("./test08.txt","r");
	if(fp==NULL){
		printf("open error.\n");
		return -1;
	}

	while(fgets(row,sizeof(row),fp)!=NULL){
		//printf("row=%s",row);
		for(i=0;i<strlen(row);i++){
			printf("row[%d]=%02d\n",i,row[i]);
		}
	}
	fclose(fp);
	return 0;
}

