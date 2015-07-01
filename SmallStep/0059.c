/*
標準入力より2つの文字列を入力し、文字数を数える。2つの文字列合計文字数が20文字以内の時は2つ目に入力した文字列の後ろに1つ目の文字列を連結し出力する。2つの文字列合計文字数が20を超えるときは連結しない。strlen、strcatと同等の機能を持つstr_length,str_catを作る。
*/
#include <stdio.h>
void str_cat(char *p1,char *p2);
int str_length(char *p);

int main(void){
  char d1[256]={0};
  char d2[256]={0};
  char *p1;
  char *p2;

  printf("一つ目の文字列 ==> ");
  scanf("%s",d1);
  printf("二つ目の文字列 ==> ");
  scanf("%s",d2);
  p1=d1;
  p2=d2;

  if(str_length(p1)+str_length(p2)>20)
  {
    printf("合計で20文字を超えたので連結しません。\n");
  }else{
    str_cat(p1,p2);
    printf("連結後の２つ目の文字列==> %s\n",p2);
  }
}
int str_length(char *p){
  char *pp;
  pp = p;
  while(*pp++ != '\0')
    ;
  return pp - p;
}
void str_cat(char *p1,char *p2){
  while(*p2++ != '\0')
    ;
  p2--;
  while(*p1 != '\0'){
    *p2++ = *p1++;
  }
  *p2 = '\0';
}
