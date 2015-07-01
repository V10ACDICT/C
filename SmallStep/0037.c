/*******************************************************************************
半径を入力し、円の面積を小数点以下２位まで出力する。
********************************************************************************/
#include <stdio.h>
#define PI 3.14
int nyuuryoku(void);
double menseki(int r);
void shuturyoku(int r,double men);

int main (void){
  int r;
  printf("半径==>");
  r=nyuuryoku();
  shuturyoku(r,menseki(r));
return 0;
}

int nyuuryoku(void){
  int seisu;
  scanf("%d",&seisu);
  return seisu;
}

double menseki(int r){
  double men;
  men=(double)(r*r*PI);
  return men;
}

void shuturyoku(int r,double men){
  printf("半径%dの、円の面積は%.2fです。\n",r,men);
}
