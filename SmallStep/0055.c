/*
標準入力より文字列を入力し、別の文字列をにコピーして出力する。strcpyを使う。
*/
#include <stdio.h>
#include <string.h>
int main(void){

  char data1[255], data2[255];
  printf("コピー元文字列の入力==>");
  scanf("%s", data1);
  printf("コピー元文字列の出力 %s\n", data1);
  strcpy(data2, data1);
  printf("コピー先文字列の出力 %s\n", data2);
}
