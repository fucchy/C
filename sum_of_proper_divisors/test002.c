#include<stdio.h>
#include<stdlib.h>

int sum_divisor(int i);

int main(void){
	int sum;
	int x;
	int y=1;
	int z;
	printf("input:\n");
	scanf("%d",&z);
	printf("\nresult:\n");
	for(x=1;x<=z;x++){
		sum=sum_divisor(x);
		if(x<sum){
			printf("%02d:%d\n",y,x);
			y++;
		}
	}
	return EXIT_SUCCESS;
}

int sum_divisor(int i){
	int a;
	int b=1;
	for(a=2;a<=(i/2);a++){
		if(i%a==0){
			b=b+a;
		}
	}
	return b;
}

