/*******************************************************************************
整数を入力し、階乗を出力する。
********************************************************************************/
#include <stdio.h>
int rec(int n);

int main (void){
  int seisu;
  printf("整数==>");
  scanf("%d",&seisu);
  printf("%dの階乗は、%dです。\n",seisu,rec(seisu));
return 0;
}

int rec(int n){
  int kaijo;
  if(n==0){
    kaijo= 1;
}else{
  kaijo=n*rec(n-1);
  }
  return kaijo;
}
