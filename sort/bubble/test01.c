#include<stdio.h>

int BubSort(int x[],int n);
void ShowData(int x[],int n);
void main(void);

#define NUM_DATA 10
int x[]={9,4,6,2,1,8,0,3,7,5};

int BubSort(int x[],int n){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(x[j-1]>x[j]){
				temp=x[j];
				x[j]=x[j-1];
				x[j-1]=temp;
			}
		}
	}
}

void ShowData(int x[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d,",x[i]);
	}
}

void main(void){
	ShowData(x,NUM_DATA);
	printf("\n");
	BubSort(x,NUM_DATA);
	ShowData(x,NUM_DATA);
	printf("\n");
}
