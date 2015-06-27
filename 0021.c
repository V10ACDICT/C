/*******************************************************************************
0以上の整数を繰り返し入力する。負の整数が入力されたら入力を中止し、合計と平均(小数点以下2位まで)を出力する。
---例---
整数 ==> 10
整数==>25
整数==>36
整数==>-1
合計＝71
平均=23.67
********************************************************************************/
#include <stdio.h>

int main (void){
  int seisu;
  int gokei=0;
  double heikin;
  int i = 1;

  printf("整数 ==> ");
  scanf("%d",&seisu);
  while(seisu>=0){
    gokei=(double)gokei+seisu;
    heikin=(double)gokei/i;
    printf("整数==>");
    scanf("%d",&seisu);
    i++;
  }
  printf("合計＝%d\n",gokei);
  if(i!=1){
    printf("平均=%0.2lf\n",heikin);
  }
  return 0;
}
