/*******************************************************************************
平均故障間隔(MTBF)と平均修理時間(MTTR)を整数で入力し、稼働率(%)を小数点以下１位まで出力する。
********************************************************************************/
#include <stdio.h>

double kansuu3(int bf,int tr);

int main(void){
  int mtbf,mttr;
  printf("MTBF==> ");
  scanf("%d",&mtbf);
  printf("MTBF==> ");
  scanf("%d",&mttr);
  printf("             MTBF\n");
  printf("稼働率 = ------------- = %4.1f%%\n",kansuu3(mtbf,mttr));
  printf("          MTBF + MTTR\n");
return 0;
}

double kansuu3(int bf,int tr){
  double kadoritu;
  kadoritu=((double)bf/(bf+tr))*100;
  return kadoritu;
}
