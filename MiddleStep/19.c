/*
2つの整数(-9999〜9999)を入力し、入力した2数の四則演算を行う。
入力データと演算結果を見やすいようにレイアウトして出力する。
和差積の結果は整数、商は実数とし、出力は小数点以下2桁までとする。
四則演算関数の戻り値がエラーの場合、商には'***'を出力する。
処理は繰り返し行えることとし、どちらかのデータ入力がEOFの場合に処理終了する。
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
int input(int max , int min , int*p);
  int calc(int data1, int data2, int *add, int *sub,int *mult,double *div);

int main(void){
  int in_data[2],max,min,mult,add,sub;
  double div;
  max=9999;
  min=-9999;
  printf("一つ目のデータ==> ");
  input(max,min,&in_data[0]);
  printf("二つ目のデータ==> ");
  input(max,min,&in_data[1]);
  printf("一つ目のデータ%d\n二つ目のデータ%d\n",in_data[0],in_data[1]);
  if(calc(in_data[0],in_data[1],&add,&sub,&mult,&div)==0){
    printf("和 = %d\n差 = %d\n積 = %d\n商 = %.2f\n",add,sub,mult,div);
  }else{
    printf("和 = %d\n差 = %d\n積 = %d\n商 = ***\n",add,sub,mult);
  }
}
int input(int max , int min , int*p){
  int i=0;
  for(;;){
    i=scanf("%d",p);
    if(i==EOF)return 0;
    if(*p > -9999&&*p < 9999){
      return i;
    }else{
      printf("エラー。再入力してください。\n");
    }
  }
}
int calc(int data1, int data2, int *add, int *sub,int *mult,double *div){
  *add=data1+data2;
  *sub=data1-data2;
  *mult=data1*data2;
  if(data2==0)return -1;
  *div=(double)data1/data2;
  return 0;
}
