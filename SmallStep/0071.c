/*
売上データ(uriage.dat)より、売上一覧表を出力する。
*/
#include <stdio.h>

int main (void)
{
  struct uriage{
    int denpyou;
    int code;
    char name[32];
    int price;
    int num;
    int sum;
  }data[256];
  int i=0,j=0,gtotal=0,total=0,n=0;
  FILE *fp;

    fp=fopen("uriage.dat","r");
    while((fscanf(fp,"%d%d%s%d%d",&data[i].denpyou,&data[i].code,data[i].name,&data[i].price,&data[i].num))!=EOF){
      data[i].sum=data[i].price*data[i].num;
      i++;
    }
    n=i;
    for(i=0;i<n;i++){
        if(data[i].code==data[i+1].code){
          printf("%4d%7d %-10s%7d%6d%7d\n",data[i].denpyou,data[i].code,data[i].name,data[i].price,data[i].num,data[i].sum);
          gtotal+=data[i].sum;
        }
        if(data[i].code!=data[i+1].code){
          printf("%4d%7d %-10s%7d%6d%7d\n",data[i].denpyou,data[i].code,data[i].name,data[i].price,data[i].num,data[i].sum);
          gtotal+=data[i].sum;
          printf("\t\t\t***商品計***%7d\n",gtotal);
          total+=gtotal;
          gtotal=0;
        }
    }
        printf("\t\t\t***総合計***%7d\n",total);
  fclose(fp);
  return 0;
}
