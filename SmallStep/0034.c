/*******************************************************************************
アルファベットまたは記号または数字を入力して文字がアルファベットの小文字の時は大文字に変換し、大文字の時は小文字に変換して出力する。記号または数字が入力されたら変換せずに出力する。
********************************************************************************/
#include <stdio.h>
char kansuu2(char n);
int main(void){
  char henkan;
  printf("文字==>");
  scanf("%c",&henkan);
  printf("%cの変換後は、%cです。\n",henkan,kansuu2(henkan));

return 0;
}

char kansuu2(char n){
  char after;
  int distance;
  distance='a'-'A';
  if((97<=n)&&(n<=122)){
    after=n-distance;
  }else{
    if((65<=n)&&(n<=90)){
      after=n+distance;
    }else{
      after=n;
    }
  }
  return after;
}
