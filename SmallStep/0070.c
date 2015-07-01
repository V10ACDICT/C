/*
商品コードを入力し、該当する商品の商品名、単価を検索(syohin.mstより)して出力する。繰り返し検索できるようにし、商品コードに99が入力されたら終了する。
*/
#include <stdio.h>

int main (void)
{
  int code,price,cnt=0,in_code,kensuu=0, i;
  char name[32],readname[32],writename[32];
  FILE *fp,*fpout;

  fp=fopen("syohin.mst","r");
  for(i=0;fscanf(fp,"%d%s%d",&code,name,&price)!=EOF;i++){}
  kensuu=i;

  while(1){
    printf("商品コード==> ");
    scanf("%d",&in_code);
    if(in_code==99){
      return 0;
    }
    fp=fopen("syohin.mst","r");
    for(i=0;fscanf(fp,"%d%s%d",&code,name,&price)!=EOF;i++){
      if(code==in_code){
        printf("商品名 : %s\n",name);
        printf("単価 : %d\n",price);
        break;
      }
    }
    if(i==kensuu){
      printf("該当する商品はありません。\n");
    }
  }
  fclose(fp);
  return 0;
}
