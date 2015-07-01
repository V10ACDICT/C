/*
戦闘でデータ件数を入力し、件数分の整数を順次入力し、全データ入力後に入力したデータの合計、平均、最小値、最大値、負の個数、ゼロの個数、正の個数を出力する。
---処理条件--
データ件数(0〜99)と件数分の整数データ(-9999〜9999の範囲の整数)をファイルに作成しておく。エラーデータはないこととする。
整数データは1行に10個ずつ出力する。
*/
#include <stdio.h>

int main()
{
  int num,*p,data[99],total,min,max,minus,plus,zero,i,j;
  double ave;

  p=data;
  scanf("%d",&num);
  if(num==0){
    printf("データ件数0。処理を終了します。");
    return -1;
  }
  for(i=0;i<num;i++,p++){
    scanf("%d",p);
    if(i==0)max=*p;
    if(i==0)min=*p;
    if(max<*p)max=*p;
    if(min>*p)min=*p;
    if(*p==0)zero++;
    if(*p<0)minus++;
    if(*p>0)plus++;
    total+=*p;
    ave=(double)total/num;
  }
    for(i=0;i<num;i++){
      if(i>1&&i%10==0)printf("\n");
      printf("%6d ",data[i]);
    }
      printf("\n合計 %d\n",total);
      printf("平均 %.2f\n",ave);
      printf("最小値 %d\n",min);
      printf("最大値 %d\n",max);
      printf("負の個数 %d\n",minus);
      printf("ゼロの個数 %d\n",zero);
      printf("正の個数 %d\n",plus);
  return 0;
}
