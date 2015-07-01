/*******************************************************************************
整数を入力し、入力した数値の二乗を出力する。一つの整数を引数とし、その二乗を戻り値として返す関数を作成する。
********************************************************************************/
#include <stdio.h>
int kansuu1(int n);
int main(void){
  int seisuu;
  printf("整数==>");
  scanf("%d",&seisuu);
  printf("%dの二乗は、%dです。\n",seisuu,kansuu1(seisuu));
return 0;
}
int kansuu1(int n){
  int nijou;
  nijou=n*n;
  return nijou;
}
