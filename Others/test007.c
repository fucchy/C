#include<stdio.h>
#include<stdlib.h>

int atai(int a){
  return a*a;
}

void pointa(int *b){
  *b=2;
}

int main(int argc,char *argv[]){
  int x=3;
  printf("%d\n",x);
  printf("%d\n",atai(x));
  printf("%d\n",x);
  pointa(&x);
  printf("%d\n",x);
  return EXIT_SUCCESS;
}

