/*
2つの整数を入力し、和を計算し出力する。
ポインタを使用する。
*/
#include <stdio.h>

int main(void){
  int seisu1,seisu2,wa;
  int *pseisu1;
  int *pseisu2;

  pseisu1=&seisu1;
  pseisu2=&seisu2;

  printf("1つ目の値を入力してください==>");
  scanf("%d",pseisu1);
  printf("2つ目の値を入力してください==>");
  scanf("%d",pseisu2);

  wa= *pseisu1+*pseisu2;
  printf("%d+%d=%d\n",*pseisu1,*pseisu2,wa);

}
