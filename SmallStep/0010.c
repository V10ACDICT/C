/*******************************************************************************
月(1月〜12月)を入力し、季節(春、夏、秋、冬)を出力する。
switch文を使う。
********************************************************************************/
#include <stdio.h>

int main(void){

  int tuki;
  printf("月＝＝＞");
  scanf("%d",&tuki);

  switch(tuki){
    case 3:
    case 4:
    case 5:
      printf("%d月は、春です\n",tuki);
      break;
    case 6:
    case 7:
    case 8:
      printf("%d月は、夏です\n",tuki);
      break;
    case 9:
    case 10:
    case 11:
      printf("%d月は、秋です\n",tuki);
      break;
    case 12:
    case 1:
    case 2:
      printf("%d月は、冬です\n",tuki);
      break;
    default:
      printf("1から12を入力してください。\n");
      break;
  }
  return 0;
}
