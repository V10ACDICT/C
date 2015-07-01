/*
標準入力より2つの文字列を入力し、文字数を数える。２つの文字列合計文字数が20文字以内の時は、2つ目に入力した文字列の後ろに1つ目の文字列を連結して出力する。
*/
#include <stdio.h>

int main(void){

  int i = 0, j = 0;
  char mojiretu1[256], mojiretu2[256], *pmojiretu1, *pmojiretu2;

  printf("1つ目の文字列==> ");
  scanf("%s", mojiretu1);
  printf("2つ目の文字列==> ");
  scanf("%s", mojiretu2);

  pmojiretu1 = mojiretu1;
  pmojiretu2 = mojiretu2;

  while(*pmojiretu1++){i++;}
  while(*pmojiretu2++){j++;}
  if(i + j >= 20){
    printf("合計で20文字を超えたので連結しません。\n");
  }else{
    j++;
    pmojiretu1--;
    pmojiretu2 -= j;
    for(; j > 0; j--){
      *pmojiretu1++ = *pmojiretu2++;
    }
  printf("連結後の2つ目の文字列:%s\n",mojiretu1);
  }
}
