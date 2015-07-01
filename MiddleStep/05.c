/*
職級、扶養者及び残業時間数を入力し、給与支給額を算出する。
---処理条件---
各入力項目は整数とする。
職級は1〜7とする。
扶養者数は0〜5人とする。
残業時間数は0〜200時間とする。
職級が1〜3の場合は、残業時間数の入力は行わない。
*/
#include <stdio.h>

int main()
{
  int rank,support,overtime,overtime_pay,base,allowance,price,total_pay;
  printf("給与支給額を求めます。\n  職級(1〜7)、扶養者数(0〜10)、残業時間(0〜200)を整数で入力してください\n\n");
  printf("職    級--> ");
  scanf("%d",&rank);
  if(!(rank==1||rank==2|rank==3|rank==4|rank==5|rank==6|rank==7)){
    printf("エラー。処理を終了します。\n");
    return -1;
  }
  printf("扶養者数--> ");
  scanf("%d",&support);
  if(support>5||support<0){
    printf("エラー。処理を終了します。\n");
    return -1;
  }
  if(rank>=4){
    printf("残業時間--> ");
    scanf("%d",&overtime);
    if(overtime>200||overtime<0){
      printf("エラー。処理を終了します。\n");
      return -1;
    }
  }else{
    overtime=0;
  }
  if(rank==1)base=700000;
  if(rank==2)base=530000;
  if(rank==3)base=400000;
  if(rank==4)base=300000;
  if(rank==5)base=230000;
  if(rank==6)base=200000;
  if(rank==7)base=180000;

  if(support==0)allowance=0;
  if(support==1)allowance=10000;
  if(support==2)allowance=15000;
  if(support>=3)allowance=10000+3000*support;
  price=(int)(base/(20*7.5)/10+0.9)*10;
  overtime_pay=price*overtime;
  total_pay=base+allowance+overtime_pay;

  printf("===================  給与支給額  ============================\n");
  printf("職級    %8d : 基本給   : %8d\n",rank,base);
  printf("扶養者数%8d : 扶養手当 : %8d\n",support,allowance);
  printf("残業時間%8d : 残業手当 : %8d  %d\n",overtime,overtime_pay,price);
  printf("                     支給額 : %8d\n",total_pay);
  return 0;
}
