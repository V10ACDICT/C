/*
整数を5つ入力し配列に代入し、最大値と最小値を探し出力する。ポインタを引数とする関数を作成する。
*/
#include <stdio.h>
void minmax(int *p);

int main(void){
  int seisu[5];
  int *p_seisu;

  p_seisu = seisu;
  for(; p_seisu < seisu + 5; p_seisu++){
    printf("整数==> ");
    scanf("%d", p_seisu);
  }
  minmax(seisu);
  printf("最大値 = %d\n", *seisu);
  printf("最小値 = %d\n", *(seisu+4));
}
void minmax(int *p){
  int tmp, i, j;
  for( i= 0; i < 5-1;i++){
    for(j = i+1; j < 5; j++){
      if(*(p+i) < *(p+j)){
        tmp = *(p+i);
        *(p+i) = *(p+j);
        *(p+j) = tmp;
      }
    }
  }
}
