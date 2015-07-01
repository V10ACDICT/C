/*
標準入力より商品コード、商品名、単価を入力し、商品マスタ(syohin.mst)に追加出力する。1回の実行で1レコードのみの出力とする。
次の2レコードを追加する。
74 分度器 370
85 コンパス 230
*/
#include <stdio.h>

int main (void)
{
  int code,price,cnt=0;
  char name[32],readname[32],writename[32];
  FILE *fp,*fpout;

  printf("商品マスタに1レコード追加します。\n");
  printf("商品コード==> ");
  scanf("%d",&code);
  printf("商品名==> ");
  scanf("%s",name);
  printf("単価==> ");
  scanf("%d",&price);
  fp=fopen("syohin.mst","a");
  if(fp==NULL){
    printf("入力ファイル%sが見つかりません。\n",readname);
    return -1;
  }
  fprintf(fp,"%d %s %d\n",code,name,price);
  printf("商品マスタに1レコード追加しました。\n");
  fclose(fp);
  return 0;
}
