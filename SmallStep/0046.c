/*
2つの整数を入力し、データを交換後出力する。
*/
#include <stdio.h>
int seisu1,seisu2;
void koukan(int *a, int *b);

int main(void){

  printf("整数＝＝＞ " );
  scanf("%d", &seisu1);
  printf("整数＝＝＞ " );
  scanf("%d", &seisu2);

  koukan(&seisu1, &seisu2);

  printf("交換後\n");
  printf("整数1＝%d\n", seisu1);
  printf("整数2＝%d\n", seisu2);
}
void koukan(int *a, int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
