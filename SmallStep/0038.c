/*******************************************************************************
西暦の年、月、日を入力し、正しい日付ならば"正しい日付です"、正しくない日付ならば"誤った日付です"と出力する。
---出力例---
SmallStepper$ ./a.out
年==>2012
月==>2
日==>29
2012年2月29日は、正しい日付です。
SmallStepper$ ./a.out
年==>2013
月==>2
日==>29
2013年2月29日は、誤った日付です。
SmallStepper$ ./a.out
年==>1899
月==>1
日==>15
1899年1月15日は、誤った日付です。
SmallStepper$ ./a.out
年==>1900
月==>1
日==>1
1900年1月1日は、正しい日付です。
SmallStepper$ ./a.out
年==>2100
月==>12
日==>31
2100年12月31日は、正しい日付です。
SmallStepper$ ./a.out
年==>2101
月==>1
日==>1
2101年1月1日は、誤った日付です。
SmallStepper$ ./a.out
年==>2013
月==>13
日==>31
2013年13月31日は、誤った日付です。
SmallStepper$ ./a.out
年==>2013
月==>0
日==>1
2013年0月1日は、誤った日付です。
SmallStepper$ ./a.out
年==>2013
月==>5
日==>31
2013年5月31日は、正しい日付です。
SmallStepper$ ./a.out
年==>2013
月==>6
日==>31
2013年6月31日は、誤った日付です。
SmallStepper$

********************************************************************************/
#include <stdio.h>
int ymd(int y, int m, int d);
int uruu(int seireki);



int main(void){
int y,m,d;
printf("年==>");
scanf("%d",&y);
printf("月==>");
scanf("%d",&m);
printf("日==>");
scanf("%d",&d);

if(ymd(y,m,d) == 1){
  printf("%d年%d月%d日は、正しい日付です。\n",y,m,d);
}else{
  printf("%d年%d月%d日は、誤った日付です。\n",y,m,d);
}
// printf("flag=%d\n",ymd(y,m,d));
  return 0;
}

int ymd(int y, int m, int d){
  int flag;
  if((y>=1900)&&(y<=2100)&&(m>=1)&&(m<=12)&&(d>=1)){
    if(((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12))&&(d<=31)){
      flag=1;
    }else{
      if(((m==4)||(m==6)||(m==9)||(m==11))&&(d<=30)){
        flag=1;
      }else{
        if(uruu(y) == 1){
          if(d<=29){
            flag=1;
          }else{
            flag=0;
          }
        }else{
          if(d<=28){
            flag=1;
          }else{
            flag=0;
          }
        }
      }
    }
  }else{
    flag=0;
  }
  return flag;
  }


int uruu(int seireki){
  int hantei;
  if(seireki%400==0||(seireki%4==0&&!(seireki%100==0))){
      hantei=1;
  }else{
      hantei=0;
    }
  return hantei;

  }
