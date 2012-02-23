#include<stdio.h>
#include<stdlib.h>

void AAA(void){
  printf("HELLO WORLD.\n");
}

void aaa(void){
  printf("hello world.\n");
}

int main(int argc,char *argv[]){
  AAA();
  aaa();
  return EXIT_SUCCESS;
}

