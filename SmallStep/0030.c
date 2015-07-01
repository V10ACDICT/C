/*******************************************************************************
リダイレクション入力により配列にデータを格納し配列の要素を昇順に並べ替えて出力する。
********************************************************************************/
#include <stdio.h>

int main (void){
  int i=0;
  int j=0;
  int d[10];
  int temp;
  int n=0;
  while((scanf("%d",&d[i])) != EOF){
    i++;
  }
  printf("***ソート前***\n");
  for(j=0;j<i;j++){
    printf("%d ",d[j]);
  }
  printf("\n");
  n=i;
  for(j=0;j<(n-1);j++){
    for(i=n-1;i>j;i--){
      if(d[i-1]>d[i]){
        temp=d[i-1];
        d[i-1]=d[i];
        d[i]=temp;
      }
    }
  }
  printf("***ソート後***\n");
  for(j=0;j<n;j++){
    printf("%d ",d[j]);
  }
  printf("\n");

return 0;
}
