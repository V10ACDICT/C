/*
標準入力より2つの文字列を入力し、文字数を数える。2つの文字列合計文字数が20文字以内の時は2つ目に入力した文字列の後ろに1つ目の文字列を連結し出力する。2つの文字列合計文字数が20を超えるときは連結しない。strlen、strcatを使う。
*/
#include <stdio.h>
#include <string.h>
int main(void){

  char data1[255], data2[255];
  printf("1つ目の文字列==>");
  scanf("%s", data1);
  printf("2つ目の文字列==>");
  scanf("%s", data2);

  if(strlen(data1) + strlen(data2) > 20){
    printf("合計20文字を超えたので連結しません。\n");
  }else{
    strcat(data2, data1);
    printf("連結後の2つ目の文字列==> %s\n",data2);
  }
}
