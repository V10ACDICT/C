/*
標準入力よりパスワード(文字列)を入力し、以下の条件に一致しているかチェックする。条件に一致した場合、「正しいパスワード文字列です」と出力し、一致しない場合その内容を出力する。
*/
#include <stdio.h>

int main(void){
  char d[256];
  char *p;
  int suuji, komoji, oomoji, i;
  suuji = komoji = oomoji = i = 0;
  printf("パスワード==> ");
  scanf("%s", d);
  p = d;

  while(*p++ != '\0'){
    i++;
    if(*p >= 0x30 && *p <= 0x39)suuji++;
    if(*p >= 0x41 && *p <= 0x5A)oomoji++;
    if(*p >= 0x61 && *p <= 0x7A)komoji++;
  }
  if( (i > 10) || (i < 6)) printf("エラー：文字数は6文字以上10文字以内です。\n");
  if(suuji == 0)printf("エラー：数字(0-9)は1文字以上必要です。\n");
  if(oomoji == 0)printf("エラー：アルファベット大文字は1文字以上必要です。\n");
  if(komoji == 0)printf("エラー：アルファベット小文字は1文字以上必要です。\n");
}
