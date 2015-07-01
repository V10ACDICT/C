/*
商品の個数を入力し、商品名、単価、個数、金額を出力する。
最後に全ての商品の合計金額を出力する。
*/
#include <stdio.h>
#include <string.h>

typedef struct menu{
  char name[32];
  int price;
  int num;
  int sum;
}menu_t;

int main(void){

  menu_t menu[4];
  int i, allsum = 0;

  strcpy(menu[0].name, "コーヒー");
  menu[0].price = 500;
  strcpy(menu[1].name, "紅茶");
  menu[1].price = 450;
  strcpy(menu[2].name, "ジュース");
  menu[2].price = 480;
  strcpy(menu[3].name, "プリン");
  menu[3].price = 360;

  for(i = 0; i < 4; i++){
    printf("%sの個数を入力=> ",menu[i].name );
    scanf("%d", &menu[i].num);
    menu[i].sum = menu[i].num * menu[i].price;
  }
  for(i = 0; i < 4; i++){
    printf("%10s:\t単価は%d円%6d個%8d円\n",menu[i].name, menu[i].price, menu[i].num, menu[i].sum);
    allsum += menu[i].sum;
  }
  printf("合計金額：               %d円", allsum);
}
