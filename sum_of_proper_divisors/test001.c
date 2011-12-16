/*
 * ある自然数を投げると、それまでの過剰数の和を計算する
 */
#include<stdio.h>
#include<stdlib.h>

int sum_divisor(int i);

int main(void){
	int j;
	int x;
	int sum=0;
	int abundant=12; /* 最小の過剰数 */
	printf("自然数xまでの過剰数の和を求めます。\n");
	printf("自然数xを入力して下さい:");
	scanf("%d",&x);
	if(x<12){
		printf("最小の過剰数は12です。\n");
	}
	if(12<=x){
		for(j=13;j<=x;j++){ /* 最小の過剰数は12なので、13から計算始める */
			if(j<sum_divisor(j)){
				abundant=abundant+j;
			}
		}
		printf("過剰数の和は%dです。\n",abundant);
	}
	return EXIT_SUCCESS;
}

/* sum_divisor関数は、真の約数の和を返す */
/* 例えば、i=10を投げると、真の約数は1,2,5なので、
   1+2+5=8をbの値として返す */
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

