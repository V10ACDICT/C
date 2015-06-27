/*******************************************************************************
身長と体重を入力し、BMIを小数点以下2桁まで出力するプログラム
---出力例---
身長-->1.72
体重-->55
BMIは18.59です。
*******************************************************************************/
#include <stdio.h>

int main(void){

  double sincho;
  double taiju;
  double BMI;
  printf("身長-->");
  scanf("%lf",&sincho);
  printf("体重-->");
  scanf("%lf",&taiju);
  BMI=taiju/(sincho*sincho);
  printf("BMIは%4.2lfです。\n",BMI);
  return 0;
}
