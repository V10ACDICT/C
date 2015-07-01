/*
2〜10000までの正の整数を2つ入力し、2数の最大公約数と最小公倍数を求める。
どちらか整数の入力時にゼロが入力された場合に処理終了とする。
*/
#include <stdio.h>

int input(int *data);
int errcheck(int x, int y);
int gcd(int x, int y);

int main()
{
  int data[2],flag;
  printf("最大公約数と最小公倍数を求めます。\n2〜10000の整数を2つ入力してください。\n");
  for(;;){
    input(data);
    flag=errcheck(data[0], data[1]);
    if(flag == 0)break;
    if(flag==1){
      printf("処理を終了します\n");
      return 0;
    }
  }
  printf("最大公約数 = %d\n",gcd(data[0], data[1]));
  printf("最小公倍数 = %d\n",data[0]*data[1]/gcd(data[0], data[1]));
  return 0;
}

int input(int *data)
{
  printf("1つめ==> ");
  scanf("%d",data);
  printf("2つめ==> ");
  scanf("%d",data+1);
  return 0;
}

int errcheck(int x, int y)
{
  if(x == 0 || y == 0)return 1;
  if(x<2 || x>10000 || y<2 || y>10000){
    printf("エラー。再入力してください。\n");
    return -1;
  }
  else return 0;
}

int gcd(int a, int b)
{
  int z;
  if( a != b){
    if( a > b)z = gcd(a-b, b);
    else z = gcd(a, b-a);
  }
  else
    z = a;
    return z;
}
