/*
要素数5の整数型配列に整数を5つ入力し昇順にソートし出力する。入力、ソート、出力の関数を作成する。
*/
#include <stdio.h>
void minmax(int *p);
void shuturyoku(int *p);
void nyuuryoku(int *p);

int main(void){
  int seisu[5];

  nyuuryoku(seisu);
  printf("ソート前\n");
  shuturyoku(seisu);
  minmax(seisu);
  printf("ソート後\n");
  shuturyoku(seisu);
}
void shuturyoku(int *p){
  int *pp, i;
  pp = p;
  for(p = pp; p< pp+5; p++){
    printf("%d\n", *p);
  }
}
void nyuuryoku(int *p){
  int *pp, i;
  pp = p;
  for(p = pp; p< pp+5; p++){
    printf("整数==> ");
    scanf("%d", p);
  }
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
