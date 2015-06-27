/*******************************************************************************
みかん、りんご、バナナの数量を入力し、入出力例のように単価、数量、金額、合計金額を、レイアウトを整えて出力する。
---入出力例---
みかん==>40
りんご==>30
バナナ==>50
  *** 商品一覧表 ***
商品名 単価 数量  金額
------ ---- ---- -----
みかん   50   40  2000
りんご   80   30  2400
バナナ  120   50  6000
        合計金額 10400
********************************************************************************/
#include <stdio.h>

int main(void){

  int mikan;
  int ringo;
  int banana;
  int mikankei;
  int ringokei;
  int bananakei;
  int sum;

  printf("みかん==>");
  scanf("%d",&mikan);
  printf("りんご==>");
  scanf("%d",&ringo);
  printf("バナナ==>");
  scanf("%d",&banana);

  mikankei=50*mikan;
  ringokei=80*ringo;
  bananakei=120*banana;
  sum=mikankei+ringokei+bananakei;

  printf("  *** 商品一覧表 ***  \n商品名 単価 数量  金額\n------ ---- ---- -----\nみかん   50 %4d %5d\nりんご   80 %4d %5d\nバナナ  120 %4d %5d\n        合計金額 %5d\n",mikan,mikankei,ringo,ringokei,banana,bananakei,sum);


  return 0;
}
