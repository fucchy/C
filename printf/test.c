// C99に準拠
//   ISO/IEC 9899:1999とISO/IEC 9899:1999 TC1
//   (JIS X 3010:2003)
//
// 7.19.6.3 printf関数
//
//   形式
//       #include <stdio.h>
//       int printf(const char * restrict format, ...);
//
//   機能
//       printf関数は、与えられた実引数の前にstdoutを実引数として
//       付加したfprintf関数と等価とする。
//
//   返却値
//       printf関数は、書き出された文字数を返す。
//       出力エラー又は表現形式がエラーが発生した場合、負の値を返
//       す。
//
// 7.19.6.1 fprintf関数
//
//   形式
//       #include <stdio.h>
//       int fprintf(FILE * restrict stream,
//                   const char * restrict format, ...);
//
//   機能
//       fprintf関数は、formatが指す文字列(書式)の制御に従って、
//       streamが指すストリームへ書き込む。
//       (以下略)

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  printf("hello world.\n");
  
  // 数字を表示
  printf("%d\n",10); 

  // 数66が格納されている変数aをそれぞれの書式で出力
  // %d : 10進数で出力(a=66の場合、「66」と表示)
  // %x : 16進数で出力(a=66の場合、「42」と表示)
  // %c : 文字で出力(a=66の場合、
  //      その環境の文字コードの66に該当する文字を出力
  int a = 66;
  printf("%d %x %c\n", a, a, a);

  // 5.2.1.1 3文字表記(trigraph sequence)
  fprintf(stdout, "Eh??=\n");

  // printf関数の型はint
  // printf関数の返却値は、書き出された文字数を返す。
  // 出力エラー又は表現形式エラーが発生した場合、負の値を返す。
  int b = 0;
  b = printf("hello!\n");
  printf("%d\n",b);
  printf("helloworld:%d\n", printf("aaa"));

  return EXIT_SUCCESS;
}
