/*二つの正の整数(1〜100)を入力し、その2数の範囲内にある7の倍数を出力する。入力値がエラーの場合はエラーメッセージを出力し、再入力できるようにする。
-処理条件-
繰り返し処理の初期値、増分値については、入力した小さい方の値以上で直近の7の倍数を初期値とし、増分値は7とする。7の倍数は1行に5個並べて出力する。出力順は昇順とする。
*/
#include <stdio.h>

int main()
{
  int m,n,i,j,flag,num;
  for(;;){
    printf("2つの整数(1〜100)を入力してください\n");
    printf("1==>");
    scanf("%d",&m);
    printf("2==>");
    scanf("%d",&n);
    if(m<1||n<1||m>100||n>100){
      printf("エラー。入力し直してください\n");
    }else{
      break;
    }
  }
  if(m>n){
    flag=m;
    i=n;
  }else{
    flag=n;
    i=m;
  }
  for(;i%7!=0;i++)
  ;
  for(;i<=flag;i+=7){
    if(num>0&&num%5==0){
      printf("\n");
    }
    printf("%d ",i);
    num++;
  }
  if(num==0){
    printf("\n7の倍数がありません。\n");
  }else{
    printf("\n7の倍数は%2d個です。\n",num);

  }

  return 0;
}
