/*
売上げデータをリダイレクション入力(uriage.txt)し、該当する商品の商品名、単価を検索して売上一覧表を出力する。
*/
#include <stdio.h>

int main(void){
  struct product{
    int code;
    char name[20];
    int price;
    int amount;
    int sum;
  };
  struct product data[]={
    {21,"鉛筆",30},
    {68,"ノート",100},
    {37,"定規",150},
    {40,"消しゴム",50},
    {85,"コンパス",230},
  };
  int code, i, j, amount, allsum;

  printf("***売上一覧表***\n");
  printf("コード 商品名 単価 数量 金額\n");
  printf("---------------------------\n");
  for(j=0;j<5;j++){
    scanf("%d%d", &code, &amount);
    for(i=0;i<5;i++){
      if(code==data[i].code){
        data[i].amount=amount;
        data[i].sum=data[i].price*data[i].amount;
        allsum+=data[i].sum;
        printf("%6d %s\t%5d%5d%6d\n", data[i].code,data[i].name,data[i].price,data[i].amount,data[i].sum);
      }
    }
  }
  printf("--------------------------\n               合計金額%d\n",allsum);
}
