#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void out(char *p);

int main(int argc,char *argv[]){
  int b[10]={0};
  char *a="test";
  out(a);
  printf("%p\n",(void*)b);
  printf("%d\n",b[0]);
  printf("%d\n",b[0]);
  printf("%d\n",b[1]);
  printf("%d\n",sizeof(b)/sizeof(b[0]));
  return EXIT_SUCCESS;
}

void out(char *p){
    printf("%s\n",p);
}

