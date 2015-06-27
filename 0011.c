/*******************************************************************************
整数型の変数i, jに整数を入力し、iをjで割った商と余りを出力する。
---例1---
Please input i ==> 7
Please input j ==> 2
i / j = 3 ... 1
---例2---
Please input i ==> 6
Please input j ==> 2
i / j = 3
---例3---
Please input i ==> 5
Please input j ==> 0
０で割れません
********************************************************************************/
#include <stdio.h>

int main(void){

  int i;
  int j;
  int sho;
  int amari;

  printf("Please input i ==> ");
  scanf("%d",&i);
  printf("Please input j ==> ");
  scanf("%d",&j);

  if(j == 0){
    printf("０で割れません\n");
  }else{
    sho = i / j;
    amari = i % j;
    if(amari == 0){
      printf("i / j = %d\n", sho);
    }else{
      printf("i / j = %d ... %d\n", sho, amari);
    }
  }

  return 0;
}
