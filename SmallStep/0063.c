/*
成績データをリダイレクション入力し、構造体配列に格納し、成績一覧表を出力する。
*/
#include <stdio.h>

int main (void)
{
  struct roll{
            int no;
            char name[20];
            int ei;
            int su;
            int koku;
            int sum;
            double ave;
            int rank;
  };
  struct roll data[5];
  int i=0,j=0,n=5,tmp;

  for(i=0;i<n;i++){
    scanf("%d%s%d%d%d",&data[i].no,
                         data[i].name,
                        &data[i].ei,
                        &data[i].su,
                        &data[i].koku);
  }

  for(i=0,j=5;i<n;i++,j--){
    data[i].rank=j;
    data[i].sum=data[i].ei+data[i].su+data[i].koku;
    data[i].ave=(double)data[i].sum/3;
  }
  for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
      if(data[i].sum>data[j].sum){
        tmp=data[j].rank;
        data[j].rank=data[i].rank;
        data[i].rank=tmp;
      }
    }
  }
  printf("No 氏名     英語  数学   国語   合計    平均   順位\n");
  printf("----------------------------------------------------\n");
  for(i=0;i<n;i++){
    printf("%4d %s\t%5d%5d%5d%5d%6.1f%5d\n",data[i].no,
                                           data[i].name,
                                          data[i].ei,
                                          data[i].su,
                                          data[i].koku,
                                          data[i].sum,
                                          data[i].ave,
                                          data[i].rank);
  }
}
