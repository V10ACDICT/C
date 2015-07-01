#include <stdio.h>
int main (void){
  int i;
  int koukan;
  int array1[10]={2,4,6,8,10,12,14,16,18,20};
  int array2[10]={3,6,9,12,15,18,21,24,27,30};
  int *p1,*p2;

  p1=array1;
  p2=array2;
  printf("***交換前***\n");
  printf("arrayl=");
  for(i=0;i<10;i++){
    printf("%3d",*(p1+i));
  }
  printf("\n");
  printf("array2=");
  for(i=0;i<10;i++){
    printf("%3d",*(p2+i));
  }
  printf("\n");
  for(i=0;i<10;i++){
    koukan = *(p1+i);
    *(p1+i)=*(p2+i);
    *(p2+i)=koukan;
  }
  printf("***交換後***\n");
  printf("arrayl=");
  for(i=0;i<10;i++){
    printf("%3d",*(p1+i));
  }
  printf("\n");
  printf("array2=");
  for(i=0;i<10;i++){
    printf("%3d",*(p2+i));
  }
  printf("\n");
}
