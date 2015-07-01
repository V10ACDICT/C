/*
商品コードを入力し、該当する商品の商品名、単価を検索して出力する。繰り返し検索できるようにし、商品コードに99が入力されたら終了する。
*/
#include <stdio.h>

int main(void){
  struct product{
    int no;
    char name[20];
    int price;
  };
  struct product data[]={
    {21,"鉛筆",30},
    {68,"ノート",100},
    {37,"定規",150},
    {40,"消しゴム",50},
    {85,"コンパス",230},
  };
  int code, flag, i;

  while(1){
    flag = 0;
    printf("商品コード==> ");
    scanf("%d", &code);
    if(code == 99){
      break;
    }
    for(i = 0; i< 5; i++){
      if(code == data[i].no){
        printf("商品名:%s\n",data[i].name);
        printf("単価:%d\n",data[i].price);
        flag = 1;
        break;
      }
    }
    if(flag == 0){
      printf("該当する商品はありません。\n");
    }
  }
}
