/*整数値(0〜900)を入力し、ランクを判定し入力値とともに判定結果を出力する。*/
#include <stdio.h>

int main()
{
  int rank;
  printf("ランクの判定\n整数値を入力");
  scanf("%d",&rank);

  if(rank>=0&&rank<=100)printf("F\n");
  if(rank>=101&&rank<=200)printf("E\n");
  if(rank>=201&&rank<=300)printf("D\n");
  if(rank>=301&&rank<=400)printf("V\n");
  if(rank>=401&&rank<=600)printf("B\n");
  if(rank>=601&&rank<=900)printf("A\n");
  if(rank<0||rank>900)printf("X\n");
  return 0;
}
