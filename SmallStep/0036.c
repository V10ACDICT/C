/*******************************************************************************
整数を入力し、奇数か偶数かを判定し結果を出力する。
********************************************************************************/
#include <stdio.h>
int kansuu4(void);
void kansuu5(int n);


int main(void){
  kansuu5(kansuu4());
return 0;
}

int kansuu4(void){
  int seisu;
  printf("整数==>");
  scanf("%d",&seisu);
  return seisu;
}

void kansuu5(int n){
    if(n%2==1){
      printf("%dは、奇数です。\n",n);
    }else{
      printf("%dは、偶数です。\n",n);
    }


}
