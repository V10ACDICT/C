/*******************************************************************************
2つの初期化されている配列の要素を交換して表示する。
********************************************************************************/
#include <stdio.h>

int main (void){
  int i;
  int koukan;
  int array1[]={2,4,6,8,10,12,14,16,18,20};
  int array2[]={3,6,9,12,15,18,21,24,27,30};

  printf("*** 交換前 ***\n");
  printf("array1 = ");
  for(i=0;i<sizeof array1/sizeof array1[0];i++){
    printf("%3d",array1[i]);}
  printf("\n");
  printf("array2 = ");
  for(i=0;i<sizeof array2/sizeof array2[0];i++){
    printf("%3d",array2[i]);}
  printf("\n");

  for(i=0;i<sizeof array1/sizeof array1[0];i++){
    koukan=array1[i];
    array1[i]=array2[i];
    array2[i]=koukan;
  }

  printf("*** 交換後 ***\n");
  printf("array1 = ");
  for(i=0;i<sizeof array1/sizeof array1[0];i++){
    printf("%3d",array1[i]);}
  printf("\n");
  printf("array2 = ");
  for(i=0;i<sizeof array2/sizeof array2[0];i++){
    printf("%3d",array2[i]);}
  printf("\n");

  return 0;
}
