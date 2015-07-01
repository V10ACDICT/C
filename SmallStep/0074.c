/*
商品マスタ3(syohin3.mst)と変更ファイル(henko.trn)を入力し、マッチング処理に寄り商品マスタ4を出力する。処理後に各処理の処理件数を標準出力へ出力する。
---処理区分---
AD:追加データ UP:単価変更データ DL:削除データ
*/
#include <stdio.h>
#include <string.h>

int main (void)
{
  FILE *fp1,*fp2,*fpout;
  struct master{
    char kubun[5];
    int code;
    char name[32];
    int price;
  }data1[256],data2[256];
  int i=0,j=0,m=0,n=0,k;
  int add=0,chn=0,del=0,sty=0;

  fp1=fopen("syohin3.mst","r");
  fp2=fopen("henko.trn","r");
  fpout=fopen("syohin4.mst","a");
  while((fscanf(fp1,"%d%s%d",&data1[i].code,data1[i].name,&data1[i].price))!=EOF){
    i++;
    m=i;
  }
  data1[i].code=0;
  i=0;
  while((fscanf(fp2,"%s%d%s%d",data2[i].kubun,&data2[i].code,data2[i].name,&data2[i].price))!=EOF){
    i++;
    n=i;
  }
  data2[i].code=0;
  i=0;

  for(;;){
    if(data2[j].code==0)break;
    if(data1[i].code==data2[j].code){
      if(strcmp(data2[j].kubun,"UP")==0){
        fprintf(fpout,"%d %s %d\n",data2[j].code,data2[j].name,data2[j].price);
        chn++;
      }else{
        del++;
      }
      if(i<m)i++;
      if(j<n)j++;
    }
    if(data1[i].code>data2[j].code){
      fprintf(fpout,"%d %s %d\n",data2[j].code,data2[j].name,data2[j].price);
      if(j<n)j++;
      add++;
    }
    if(data1[i].code<data2[j].code){
      fprintf(fpout,"%d %s %d\n",data1[i].code,data1[i].name,data1[i].price);
      if(i<m)i++;
      sty++;
    }
  }
    printf("変更なし:%d\n", sty);
    printf("追加処理:%d\n", add);
    printf("変更処理:%d\n", chn);
    printf("削除処理:%d\n", del);
  fclose(fp1);
  fclose(fp2);
  fclose(fpout);
  return 0;
}
