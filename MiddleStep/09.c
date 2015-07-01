/*
年を西暦4桁(1000〜9999)、月を1桁か2桁(1〜12)の正の整数で入力し、指定の月のカレンダーを作成する。
-出力例-
年を西暦4桁(1000〜9999)、月を1桁または2桁(1〜12)で入力
年==>2015
月==>6

 日 月 火 水 木 金 土
     1  2  3  4  5  6
  7  8  9 10 11 12 13
 14 15 16 17 18 19 20
 21 22 23 24 25 26 27
 28 29 30

*/
#include <stdio.h>
int is_leap_year(int y);
int n_days_month(int year,int month );
void print_cal(int year, int month);
int ndays[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main()
{
  int year, month;
  for (;;){
    printf("年を西暦4桁(1000〜9999)、月を1桁または2桁(1〜12)で入力\n");
    printf("年==>");
    scanf("%d", &year);
    printf("月==>");
    scanf("%d", &month);
    if(year>9999 || year<1000 || month>12 || month<0){
      printf("エラー。入力しなおしてください。\n");
    }else{
      break;
    }
  }
    print_cal(year, month);
  return 0;
}
// うるう年の判定関数(1:うるう年 0:平年)
int is_leap_year(int year)
{
   if (year % 400 == 0) return 1;
   else if (year % 100 == 0) return 0;
   else if (year % 4 == 0) return 1;
   else return 0;
}
//通算日数s
int n_days_month(int year, int month ){
   int i, s = 0;
   for (i = 1; i < year; i++) s += (is_leap_year(i)?366:365);
   for (i = 1; i < month; i++){
     int days = ndays[ i - 1 ];
     if (i == 2 && is_leap_year(year)) days = 29;
     s += days;
   } /* for */
   return s;
 }
 void print_cal(int year, int month){
   int d = (n_days_month(year, month) + 1) % 7;
   int days = ndays[ month - 1 ];
   int i;
   //printf("d=%d\n",d);
   //printf("days=%d\n",days);
   //printf("n_days_month=%d\n",n_days_month(year, month));
   printf( "\n 日 月 火 水 木 金 土\n" );
   if (is_leap_year(year) && month == 2) days = 29;
   for (i = 0; i < d; i++) printf( "   " );
   for (i = 1; i <= days; i++){
      printf( "%3d", i );
      d = (d + 1) % 7;
      if (d == 0) printf("\n");
   } /* for */
   printf( "\n" );
}
