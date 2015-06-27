/*******************************************************************************
整数を5つ入力し、その最大値と最小値を出力する。
********************************************************************************/
#include <stdio.h>

int main(void) {
  int seisu = 0, i, max, min;

  printf("整数==> ");
  scanf("%d", &seisu);
  max = seisu;
  min = seisu;

  for (i = 0; i < 5-1; i++) {
    printf("整数==> ");
    scanf("%d", &seisu);
    if(seisu >= max){
      max = seisu;
    }else{
      if(seisu <= min){
        min = seisu;
      }
    }
  }
  printf("最大値 = %d\n", max);
  printf("最小値 = %d\n", min);
  return 0;
}
