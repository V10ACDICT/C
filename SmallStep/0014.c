/*******************************************************************************
西暦を入力し、うるう年か否かを出力する。論理演算子を使用し、if文は一つだけで書く。
********************************************************************************/
#include <stdio.h>

int main(void){

  int seireki;

  printf("西暦4桁==> ");
  scanf("%d",&seireki);
  if(seireki % 400 == 0 || ( seireki % 4 == 0 && !( seireki % 100 == 0 ) ) ){
    printf("%d年は、うるう年です。\n",seireki);
  }else{
    printf("%d年は、うるう年ではありません。\n",seireki);
  }
  return 0;
}