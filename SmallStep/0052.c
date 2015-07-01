/*

標準入力より2つの文字列を入力し、文字数を比較する。比較した結果は次のように標準出力する。
1つ目に入力した文字列が大きい場合：1つ目の文字列>2つ目の文字列
2つ目に入力した文字列が大きい場合：1つ目の文字列<2つ目の文字列
2つの文字列が同じ場合：1つ目の文字列=2つ目の文字列
*/
#include <stdio.h>

int main(void){
  char retu1[256], retu2[256];
  char *pretu1, *pretu2;

  printf("1つ目の文字列==> ");
  scanf("%s", retu1);
  printf("2つ目の文字列==> ");
  scanf("%s", retu2);
  pretu1 = retu1;
  pretu2 = retu2;

  for(; *pretu1 == *pretu2; pretu1++, pretu2++){
    if(*pretu1 == '\0'){
      printf("%s = %s\n", retu1, retu2);
      return 0;
    }
  }
  if(*pretu1 > *pretu2){
    printf("%s > %s\n", retu1, retu2);
  }else{
    printf("%s < %s\n", retu1, retu2);    
  }
}
