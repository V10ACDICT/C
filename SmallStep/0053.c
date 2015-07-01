/*
標準入力より文字列を入力し、入力した文字列が全て数字で構成されているかチェックする。
*/
#include <stdio.h>
int main (void){
  char d[256], *p;
  int n=0;
  printf("文字列== >");
  scanf("%s",d);
  p=d;
  for(;*p != '\0'; p++){
    if( ( *p < 0x30 ) || ( *p > 0x39 ) ){
      n++;
    }
  }
  if(n > 0){
    printf("数字以外の文字列が%d文字混在しています。\n",n);
  }else{
    printf("すべて数字で構成されています。\n");
  }
}
