/*
標準入力より文字列を入力し、別の文字列をにコピーして出力する。
*/
#include <stdio.h>
int main(void){

  int i;
  char data1[255], data2[255];
  printf("コピー元文字列の入力==>");
  scanf("%s", data1);
  for(i = 0; data1[i] !='\0'; i++){
    data2[i] = data1[i];
  }
  data2[i] = '\0';
  printf("コピー元文字列の出力 %s\n", data1);
  printf("コピー先文字列の出力 %s\n", data2);
}
