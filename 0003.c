/*******************************************************************************
scanf関数で2つの整数を入力し、和、差、積、商、余りを計算し、計算結果を以下のように出力する。

1つ目の整数を入力してください＝＝＞30
2つ目の整数を入力してください＝＝＞20
30 + 20 = 50
30 - 20 = 10
30 * 20 = 600
30 / 20 = 1
30 % 20 = 10
********************************************************************************/
#include <stdio.h>

int main(void) {

  int seisu1;
  int seisu2;
  int seisu3;
  int wa, sa, seki, sho, amari;

  printf("1つ目の整数を入力してください＝＝＞" );
  scanf("%d",&seisu1 );
  printf("2つ目の整数を入力してください＝＝＞" );
  scanf("%d",&seisu2 );

  wa = seisu1 + seisu2;
  sa = seisu1 - seisu2;
  seki = seisu1 * seisu2;
  sho = seisu1 / seisu2;
  amari = seisu1 % seisu2;

  printf("%d + %d = %d\n", seisu1, seisu2, wa );
  printf("%d - %d = %d\n", seisu1, seisu2, sa );
  printf("%d * %d = %d\n", seisu1, seisu2, seki );
  printf("%d / %d = %d\n", seisu1, seisu2, sho );
  printf("%d %% %d = %d\n", seisu1, seisu2, amari );
  return 0;
}
