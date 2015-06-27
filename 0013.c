/*******************************************************************************
西暦を入力し、うるう年か否かを出力する。if文を使用し、論理演算子を使用しない。
********************************************************************************/
#include <stdio.h>

int main(void) {
  int seireki;
  int uruu;
  printf("西暦４桁==> ");
  scanf("%d", &seireki);
  uruu = seireki % 400;
  if(uruu == 0){
    printf("%d年はうるう年です。\n", seireki);
  }else{
    uruu = seireki % 4;
    if(uruu == 0){
      uruu = seireki % 100;
      if(uruu == 0){
        printf("%d年はうるう年ではありません。\n", seireki);
      }else{
        printf("%d年はうるう年です。\n", seireki);
      }
    }else{
      printf("%d年はうるう年ではありません。\n", seireki);
    }
  }
  return 0;
}
