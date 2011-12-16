#include <stdio.h>
#include <string.h>
#include <search.h>

int compare(const void *x,const void *y);

int main(int argc,char *argv[]){
    char a[] = "orange";
    char b[] = "apple";
    char c[] = "melon";
    char *table[3];
    int i;

    
    table[0] = a;
    table[1] = b;
    table[2] = c;

    printf("ソート前\n");
    for(i=0;i<3;i++){
        printf("%s\n",table[i]);
    }

    qsort(table,3,sizeof(char *),compare);

    printf("ソート後\n");
    for(i=0;i<3;i++){
        printf("%s\n",table[i]);
    }
}

int compare(const void *x,const void *y){
    return strcmp( * (char **) x, * (char **) y);
}
