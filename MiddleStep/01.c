/*
2つの整数値を入力し、以下の計算を行い結果を出力する。
①整数1 + 整数2
②整数1 - 整数2
③整数1 × 整数2
④整数1 ÷ 整数2 の商と余り
⑤整数1 ÷ 整数2
*/
# include <stdio.h>

int main(void){
  int seisu1, seisu2;
  short shortWa, shortSa,shortSeki, shortShou, shortAmari;
  int intWa, intSa, intSeki, intShou, intAmari;
  float floatShou;

  printf("四則演算を行います。2個の整数を入力してください。\n" );
  printf("整数1 入力=> ");
  scanf("%d", &seisu1);
  printf("整数2 入力=> ");
  scanf("%d", &seisu2);

  printf("\n整数1:%d(%#x)\t",seisu1, seisu1 );
  printf("\n整数2:%d(%#x)\n\n",seisu2, seisu2 );

  shortWa = seisu1 + seisu2;
  shortSa = seisu1 - seisu2;
  shortSeki = seisu1 * seisu2;
  shortShou = seisu1 / seisu2;
  shortAmari = seisu1 % seisu2;

  intWa = seisu1 + seisu2;
  intSa = seisu1 - seisu2;
  intSeki = seisu1 *seisu2;
  intShou = seisu1 / seisu2;
  intAmari = seisu1 % seisu2;

  floatShou = (float)seisu1 / seisu2;

  printf("和       =>  short%12d(%#8x)  int%12d(%#8x)\n",shortWa, shortWa, intWa, intWa);
  printf("差       =>  short%12d(%#8x)  int%12d(%#8x)\n",shortSa, shortSa, intSa, intSa);
  printf("積       =>  short%12d(%#8x)  int%12d(%#8x)\n",shortSeki, shortSeki, intSeki, intSeki);
  printf("商と余り =>  short%12d・・・%2d(%#8x・・・%#8x)\n",shortShou, shortAmari, shortShou, shortAmari);
  printf("商と余り =>  int%12d・・・%2d(%#8x・・・%#8x)\n",intShou, intAmari, intShou, intAmari);
  printf("商       =>  float 少数以下2桁：%.2f 少数以下3桁： %.3f 少数以下6桁：%.6f\n",floatShou, floatShou, floatShou);
}
