#!/bin/sh

# 第一引数を${string_filename}に代入
string_filename=$1

# ${string_filename}の末尾から、.cという文字列を削除したものを${string_filename_without_extension}に代入
string_filename_without_extension=${string_filename%.c}

# ${string_filename_without_extension}の末尾に.oという文字列を追加したものを${string_filename_to_objectfile}に代入
string_filename_to_objectfile=${string_filename_without_extension}.o

# 例えば、$ c99 test.c とすると、第一引数はtest.cなので、
# ${string_filename}=test.c
# ${string_filename_without_extension}=test
# ${string_filename_to_objectfile}=test.o
# とそれぞれなるはず。

gcc -std=c99 -pedantic -Wall $1 -o ${string_filename_to_objectfile}

# 確認用
#echo ${string_filename}
#echo ${string_filename_without_extension}
#echo ${string_filename_to_objectfile}

# 参考URI
# http://www.kishiro.com/FreeBSD/get_filename_in_shellscript.html
