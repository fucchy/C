/*
 * 配列arrayの中から最大値を見つけて表示するサンプルソース
 *
 */

#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
    int array[]={0,1,2,3,4,1,15,11,16,34,6,444}; // 配列arrayの宣言と初期化
    int arrayNum=sizeof(array)/sizeof(array[0]); // 配列arrayの要素数をarrayNumに代入
    int i;
    int max=array[0]; // とりあえず、array[0]の値を最大値を入れるmaxオブジェクトに代入しておく

    // array[1]から始めて、maxの値より大きければ、maxの値を上書きする
    for(i=1;i<arrayNum;i++){
        if(max<array[i]){
            max=array[i];
        }
    }

    printf("%d\n",max);

    return EXIT_SUCCESS;
}

