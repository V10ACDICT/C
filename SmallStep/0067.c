/*
商品マスタを読み込み、商品一覧表を出力する(商品マスタを実行前に作成しておく)。
*/
#include <stdio.h>

int main (void)
{
  int code,price,i;
  char name[32];
  FILE *fp;

  fp=fopen("syohin.mst","r");
  if(fp==NULL){
    return -1;
  }
  printf("***商品一覧表***\n");
  printf("コード 商  品  名  単  価\n");
  printf("--------------------------\n");
  while(fscanf(fp,"%d%s%d",&code,name,&price)!=EOF){
    printf("%5d %s \t%d\n",code,name,price);
  }
  fclose(fp);
  return 0;
}
