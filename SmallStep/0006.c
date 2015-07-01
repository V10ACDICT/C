/*******************************************************************************
半径を入力し、円の面積と球の体積を小数点以下1桁まで出力する。
********************************************************************************/
#include <stdio.h>

int main(void){

  int r;
  double menseki;
  double taiseki;
  const double pi = 3.14;

  printf("半径＝＝＞" );
  scanf("%d", &r);
  menseki = r * r* pi;
  taiseki = ( double ) 4 / 3 * ( r * r * r * pi );
  printf("半径 %d の面積は %0.1lf です。\n", r, menseki );
  printf("半径 %d の体積は %0.1lf です。\n", r, taiseki );
  return 0;
}
