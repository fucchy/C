#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int dat[]={11,22,33,44,55,66};
	int j,*p,sum=0;

	printf("配列を使ったとき\n");
	for(j=0;j<6;j++){
		sum+=dat[j];
	}
	printf("合計=%d\n",sum);

	printf("ポインタを使ったとき\n");
	sum=0;
	p=dat;
	for(j=0;j<6;j++){
		sum+=*p;
		p++;
	}

	printf("合計=%d\n",sum);
	return EXIT_SUCCESS;
}

