/*
標準入力より整数を５個入力し、入力順とは逆に標準出力する。ポインタを使用する。
*/
#include <stdio.h>

int main(void){

  int data[5] = {0}, i, *pdata;

  pdata = data;
  for (i = 0; i < 5; i++) {
    printf("整数＝＝＞ ");
    scanf("%d", data + i );
  }
  printf("---逆順出力---\n");
  for (pdata = data+5-1; pdata >= data; pdata--) {
    printf("%d\n", *pdata );
  }
}
