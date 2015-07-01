/*******************************************************************************
２次元配列に初期化された成績データを元に、各人の合計と平均、各科目の合計と平均を求め、成績一覧表を出力する。
********************************************************************************/
#include <stdio.h>

int main(void){

int i;
int j;
int yokokei=0;
double yokoheikin=0;
int tatekei=0;
double tateheikin[4]={0};
int data[4][5]={
  {25,50,73,80,52},
  {42,62,95,70,43},
  {52,39,42,52,63},
  {77,58,73,82,80},
};
printf("***成績一覧表***\n");
printf("  No |  英 |  数 |  国 |  理 |  社 | 合計 平均\n");
printf("-----+-----+-----+-----+-----+-----+----------\n");
for(j=0;j<4;j++){
  printf("   %d |",j+1);
  for(i=0;i<5;i++){
    printf("  %d |",data[j][i]);
  }
  for(i=0;i<5;i++){
    yokokei=yokokei+data[j][i];
  }
  yokoheikin=(double)yokokei/5;
  printf("  %d  %.1lf\n",yokokei,yokoheikin);
  yokokei=0;
}
printf("-----+-----+-----+-----+-----+-----+----------\n");
printf("合計 |");
for(j=0;j<5;j++){
  for(i=0;i<4;i++){
    tatekei=tatekei+data[i][j];
  }
  tateheikin[j]=(double)tatekei/4;
  printf("%d  |",tatekei);
  tatekei=0;
}
printf("\n平均 |");
for(i=0;i<5;i++){
  printf(" %.1lf|",tateheikin[i]);
}
printf("\n");
return 0;
}
