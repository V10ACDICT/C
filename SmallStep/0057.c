/*
標準入力より2つの文字列を入力し、文字数を比較する。比較した結果は次のように標準出力する。
1つ目に入力した文字列が大きい場合：1つ目の文字列>2つ目の文字列
2つ目に入力した文字列が大きい場合：1つ目の文字列<2つ目の文字列
2つの文字列が同じ場合：1つ目の文字列=2つ目の文字列
strcmpを使う。
*/
#include <stdio.h>
#include <string.h>

int main(void){
  char retu1[256], retu2[256];

  printf("1つ目の文字列==> ");
  scanf("%s", retu1);
  printf("2つ目の文字列==> ");
  scanf("%s", retu2);

  if(strcmp(retu1, retu2) > 0)printf("%s > %s\n", retu1, retu2);
  if(strcmp(retu1, retu2) == 0)printf("%s = %s\n", retu1, retu2);
  if(strcmp(retu1, retu2) < 0)printf("%s < %s\n", retu1, retu2);
}
