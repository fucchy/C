/*
 * エラトステネスの篩
 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define NUM 100  /* NUM以下の素数を求める */

int main(void){
	unsigned i,j;
	unsigned sq_num=(int)sqrt((double)NUM);
	unsigned prime[NUM];

	/* flag1が立っているものが素数 */
	/* flag0が立っているものが合成数(素数ではない)*/

	for(i=0;i<NUM;i++){
		prime[i]=1; /* 全ての数にflag1を立てる */
		prime[0]=0; /* 1は素数ではない */
	}

	for(i=1;i<sq_num;i++){
		if(prime[i]==1){ /* prime[i]が素数なら */
			for(j=(i+1);(i+1)*j<=NUM;j++){
				prime[(i+1)*j-1]=0; /* 素数の倍数は素数ではない */
			}
		}
	}
	
	for(i=0;i<NUM;i++){
		if(prime[i]==1){ /* flag1が立っているものが素数 */
			printf("%d\n",i+1);
		}
	}
	printf("\n");

	return EXIT_SUCCESS;
}
