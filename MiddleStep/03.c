/*身長と体重を入力し、身長から計算した理想体重と入力した体重とを比較して、それぞれ該当するメッセージを出力する。*/
#include <stdio.h>
int errmsg(int tall, double weight);

int main(){
  int tall;
  double weight,max_ideal,min_ideal;

  printf("理想体重の計算:身長と体重を入力\n");
  printf("身長 >>");
  scanf("%d",&tall);
  printf("体重 >>");
  scanf("%lf",&weight);

  if(errmsg(tall,weight)==1)return -1;
  max_ideal=(tall-100)*0.9*1.05;
  min_ideal=(tall-100)*0.9*0.95;
  printf("身長 : %d\n",tall);
  printf("体重 : %.2f\n",weight);
  printf("理想体重 : %.2f〜%.2f\n",min_ideal,max_ideal);
  if(weight>max_ideal){
    printf("少し痩せましょう\n");
  }else if(weight<min_ideal){
    printf("もっと食べましょう\n");
  }else{
    printf("理想的です\n");
  }
  return 0;
}
int errmsg(int tall, double weight){
  int flag=0;
  if(tall<130)flag=1;
  if(tall>250)flag=1;
  if(weight>=300)flag=1;
  if(weight<20)flag=1;
  if(flag==1)
  printf("身長は130〜250以下、体重は20〜300以下を入力してください。\n");
  return flag;
}
