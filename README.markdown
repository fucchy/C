# 標準Cについて

JTC1/SC22/WG14 (標準Cを制定している作業部会)  
http://www.open-std.org/jtc1/sc22/wg14/


The  lastest publically available version of the standard is the combined C99 + TC1 + TC2 + TC3, WG14 N1256, dated 2007-09-07.  
(C99にTechnical Corrigenda(TC;正誤票)を追加した文書。正誤表ではなく正誤票らしい。JISが採用している訳語では。)  
http://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf

次期標準C (通称C1x;西暦201X年に発行を目指しているらしい)  
http://www.open-std.org/jtc1/sc22/wg14/www/docs/n1539.pdf

---
# C言語をコンパイルする際のメモ  

(C99規格に準拠して、なるべく処理系に依存しない方針)  
`$ gcc -std=c99 -pedantic -Wall filename.c -o filename.o`

コメントは//も使える(C99以降採用なので)ので、使っていく。  
タブ文字(ASCII:0x09)は使わない。私の方針として、タブ文字に相当する所は半角スペース2文字で書いていく。  

---
# 今、自分がしなければならない事
1. C99にある標準ヘッダー24個で定義されている関数を扱い慣れる
2. 様々なアルゴリズムに触れて肝を体得する
3. 自分仕様の教科書を作って、使い慣れて、いつでもすぐに参照出来る体制を整える
4. 原文の仕様書を自分なりに日本語に訳してみる
5. 余裕があれば、C1xの新規格で遊んでみる
6. コンパイラによる差異を把握する(GCC, Mcrosoft Visual C++, Borland C++ Compiler, Intel C++ Comiler etc.)
