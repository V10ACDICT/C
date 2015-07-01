/*
商品マスタ1(syohin1.mst)と商品マスタ2を入力し、マージ処理により商品マスタ3(syhohin3.mst)を出力する。処理後に商品マスタ1,商品マスタ2,商品マスタ3の処理レコード数を標準出力へ出力する。
*/
#include <stdio.h>

int main (void)
{
  FILE *fp1,*fp2,*fpout;
  struct master{
    int code;
    char name[32];
    int price;
  }data1[256],data2[256];
  int i=0,j=0,m=0,n=0;

  fp1=fopen("syohin1.mst","r");
  fp2=fopen("syohin2.mst","r");
  while((fscanf(fp1,"%d%s%d",&data1[i].code,data1[i].name,&data1[i].price))!=EOF){
    i++;
    m=i;
  }
  printf("入力ファイル(商品マスタ1) : %d\n",i);
  i=0;
  while((fscanf(fp2,"%d%s%d",&data2[i].code,data2[i].name,&data2[i].price))!=EOF){
    i++;
    n=i;
  }
  printf("入力ファイル(商品マスタ2) : %d\n",i);
  i=0;
  fpout=fopen("syohin3.mst","a");
  while(1){
    if(i==m||j==n)break;
    if(data1[i].code<data2[j].code){
      fprintf(fpout,"%d%s%d\n",data1[i].code,data1[i].name,data1[i].price);
      i++;
    }else{
      fprintf(fpout,"%d%s%d\n",data2[j].code,data2[j].name,data2[j].price);
      j++;
    }
  }
  if(j==n){
    for(;i<m;i++){
      fprintf(fpout,"%d%s%d\n",data1[i].code,data1[i].name,data1[i].price);
    }
  }
  if(i==m){
    for(;j<n;j++){
      fprintf(fpout,"%d%s%d\n",data2[i].code,data2[i].name,data2[i].price);
    }
  }
  printf("出力ファイル(商品マスタ3) : %d\n",m+n);
  fclose(fp1);
  fclose(fp2);
  fclose(fpout);
  return 0;
}
