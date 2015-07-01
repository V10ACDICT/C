/*
標準入力より文字列を入力し、別の文字列をにコピーして出力する。strcpyと同等の機能を持つstr_copyを作る。
*/
#include <stdio.h>
#include <string.h>
void str_copy(char *p1, char *p2);

int main(void){

  char data1[255], data2[255];
  char *p1, *p2;
  printf("コピー元文字列の入力==>");
  scanf("%s", data1);
  p1 = data1;
  p2 = data2;
  printf("コピー元文字列の出力 %s\n", data1);
  str_copy(data1, data2);
  printf("コピー先文字列の出力 %s\n", data2);
}
void str_copy(char *p1, char *p2){
  for(; *p1 != '\0'; ){
    *p2++ = *p1++;
  }
  *(p2 + 1) = '\0';
}
