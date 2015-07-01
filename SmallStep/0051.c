/*
標準入力よりパスワード(文字列)を入力し、char型配列に初期化したパスワード(文字数)と比較し、一致した場合は"パスワード一致"、一致しない場合"パスワード不一致"と出力する。
*/
#include <stdio.h>

int main(void){
  char password[] = "iidabashi";
  char mojiretu[256];
  int i;

  printf("パスワードを入力してください==> ");
  scanf("%s", mojiretu);
  for(i = 0; password[i] == mojiretu[i]; i++){
    if(mojiretu[i] == '\0'){
      printf("パスワード一致\n");
      return 0;
    }
  }
  printf("パスワード不一致\n");
}
