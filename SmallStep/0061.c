/*
構造体変数を2つ定義し、1つ目の構造体変数にデータを入力する。入力後に1つ目の構造体変数の内容を2つ目の構造体変数にコピーし出力する。
*/
#include <stdio.h>

int main(void){

	struct roll{
    int no;
    char name[32];
    double tall;
    double weight;
  };
	struct roll data1,data2;

  printf("コピー元構造体の入力\n" );
  printf("番号 ==> ");
	scanf("%d", &data1.no);
  printf("氏名 ==> ");
	scanf("%s", data1.name);
  printf("身長 ==> ");
	scanf("%lf", &data1.tall);
  printf("体重 ==> ");
	scanf("%lf", &data1.weight);
  printf("\n");

  data2=data1;

  printf("コピー元構造体の出力\n");
  printf("番号 : %d\n氏名 : %s\n身長 : %.1f\n体重 : %.1f\n",data1.no,data1.name,data1.tall,data1.weight);
  printf("コピー先構造体の出力\n");
  printf("番号 : %d\n氏名 : %s\n身長 : %.1f\n体重 : %.1f\n",data2.no,data2.name,data2.tall,data2.weight);
	return 0;
}
