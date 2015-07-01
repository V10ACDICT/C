/*
社員名簿の構造体配列を初期化し、年齢の降順に出力する。
*/
#include <stdio.h>
#include <string.h>
int main(void){

  struct birthday{
     int y;
     int m;
     int d;
  };
  struct roll{
     int num;
     char name[20];
     int ny;
     int nm;
     int nd;
     struct birthday ymd;
   };
  struct roll data[5],tmp;
  int i,j,n=5;

  data[0].num=1212;
  strcpy(data[0].name,"sato");
  data[0].ny=2002;
  data[0].nm=4;
  data[0].nd=1;
  data[0].ymd.y=1982;
  data[0].ymd.m=6;
  data[0].ymd.d=23;

  data[1].num=2353;
  strcpy(data[1].name,"suzuki");
  data[1].ny=2001;
  data[1].nm=4;
  data[1].nd=1;
  data[1].ymd.y=1984;
  data[1].ymd.m=9;
  data[1].ymd.d=30;

  data[4].num=6447;
  strcpy(data[4].name,"watanabe");
  data[4].ny =1988;
  data[4].nm=3;
  data[4].nd=25;
  data[4].ymd.y=1985;
  data[4].ymd.m=4;
  data[4].ymd.d=20;

  data[3].num=5206;
  strcpy(data[3].name,"tanaka");
  data[3].ny=1995;
  data[3].nm=4;
  data[3].nd=20;
  data[3].ymd.y=1986;
  data[3].ymd.m =10;
  data[3].ymd.d=10;

  data[2].num=3147;
  strcpy(data[2].name,"takahashi");
  data[2].ny=2001;
  data[2].nm=10;
  data[2].nd =1;
  data[2].ymd.y=1986;
  data[2].ymd.m=10;
  data[2].ymd.d=11;

  for(i=0;i<n-1;i++){
     for(j=i+1;j<n;j++){
      if(data[i].ymd.y>data[j].ymd.y){
         tmp=data[i];
         data[i]=data[j];
         data[j]=tmp;
       }
     }
  }
  for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
     if(data[i].ymd.y==data[j].ymd.y){
       if(data[i].ymd.m>data[j].ymd.m){
         tmp=data[i];
         data[i]=data[j];
         data[j]=tmp;
       }
     }
    }
  }
  for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
      if((data[i].ymd.y==data[j].ymd.y)&&(data[i].ymd.m==data[j].ymd.m)){
        if(data[i].ymd.d>data[j].ymd.d){
          tmp=data[i];
          data[i]=data[j];
          data[j]=tmp;
        }
      }
    }
  }

  printf("社員番号 氏   名 入社年月日  生年月日\n");
  printf("-------- -------- -------- ------\n");
  for(i = 0;i < n;i++){
  printf(" %d %s \t%d/%2d/%2d %d/%2d/%2d\n", data[i].num,data[i].name,data[i].ny,data[i].nm,data[i].nd,data[i].ymd.y,data[i].ymd.m,data[i].ymd.d);
  }
  return 0;
}
