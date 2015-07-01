/*
成績データをリダイレクション入力(seiseki.txt)し構造体配列に格納する。3科目の成績一覧表を出力する。
---出力例---
成績一覧表(英語)
No 氏名     英語   順位
-----------------------
 147 takahashi	   81    1
 206 tanaka	   81    1
 553 suzuki	   70    3
 447 watanabe	   65    4
 312 sato	   60    5
成績一覧表(数学)
No 氏名     数学   順位
-----------------------
 553 suzuki	   92    1
 447 watanabe	   88    2
 312 sato	   82    3
 147 takahashi	   66    4
 206 tanaka	   66    4
成績一覧表(国語)
No 氏名     国語   順位
-----------------------
 447 watanabe	   90    1
 147 takahashi	   74    2
 312 sato	   74    2
 553 suzuki	   74    2
 206 tanaka	   70    5
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
            struct rank{
              int r_ei;
              int r_su;
              int r_koku;
            }ran;
  }data[5];
  int i,j,n=5;
  struct roll tmp;

  for(i=0;i<n;i++){
    scanf("%d%s%d%d%d",&data[i].no,
                         data[i].name,
                        &data[i].ei,
                        &data[i].su,
                        &data[i].koku);
  }
  for(i=0;i<n;i++){
    data[i].ran.r_ei=data[i].ei;
    data[i].ran.r_su=data[i].su;
    data[i].ran.r_koku=data[i].koku;
  }
/*英語*/
  for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
      if(data[i].ei<data[j].ei){
        tmp=data[j];
        data[j]=data[i];
        data[i]=tmp;
      }else if(data[i].ei==data[j].ei&&data[i].no>data[j].no){
        tmp=data[j];
        data[j]=data[i];
        data[i]=tmp;
      }
    }
  }
  data[0].ran.r_ei=1;
  for(i=0;i<n;i++){
    if(data[i].ei==data[i+1].ei){
      data[i+1].ran.r_ei=data[i].ran.r_ei;
    }else{
      data[i+1].ran.r_ei=i+2;
    }
  }
  printf("成績一覧表(英語)\n");
  printf("No 氏名     英語   順位\n");
  printf("-----------------------\n");
  for(i=0;i<n;i++){
    printf("%4d %s\t%5d%5d\n",data[i].no,
                                   data[i].name,
                                    data[i].ei,
                                    data[i].ran.r_ei);
  }
/*数学*/
  for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
      if(data[i].su<data[j].su){
        tmp=data[j];
        data[j]=data[i];
        data[i]=tmp;
      }else if(data[i].su==data[j].su&&data[i].no>data[j].no){
        tmp=data[j];
        data[j]=data[i];
        data[i]=tmp;
      }
    }
  }
  data[0].ran.r_su=1;
  for(i=0;i<n;i++){
    if(data[i].su==data[i+1].su){
      data[i+1].ran.r_su=data[i].ran.r_su;
    }else{
      data[i+1].ran.r_su=i+2;
    }
  }
  printf("成績一覧表(数学)\n");
  printf("No 氏名     数学   順位\n");
  printf("-----------------------\n");
  for(i=0;i<n;i++){
    printf("%4d %s\t%5d%5d\n",data[i].no,
                                   data[i].name,
                                    data[i].su,
                                    data[i].ran.r_su);
  }
/*国語*/
  for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
      if(data[i].koku<data[j].koku){
        tmp=data[j];
        data[j]=data[i];
        data[i]=tmp;
      }else if(data[i].koku==data[j].koku&&data[i].no>data[j].no){
        tmp=data[j];
        data[j]=data[i];
        data[i]=tmp;
      }
    }
  }
  data[0].ran.r_koku=1;
  for(i=0;i<n;i++){
    if(data[i].koku==data[i+1].koku){
      data[i+1].ran.r_koku=data[i].ran.r_koku;
    }else{
      data[i+1].ran.r_koku=i+2;
    }
  }
  printf("成績一覧表(国語)\n");
  printf("No 氏名     国語   順位\n");
  printf("-----------------------\n");
  for(i=0;i<n;i++){
    printf("%4d %s\t%5d%5d\n",data[i].no,
                                   data[i].name,
                                    data[i].koku,
                                    data[i].ran.r_koku);
  }

}
