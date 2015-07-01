/*******************************************************************************
リダイレクション入力とリダイレクション出力によりファイルをコピーする。
ファイルは一行にNo.、身長、体重が入力されていて複数行ある。
--実行例---
SmallStepper$ ./a.out <bmi1.dat >bmi2.dat
********************************************************************************/
#include <stdio.h>

int main(void) {
  int moji1;
  double moji2, moji3;
  int i=0;

  while(scanf("%d%lf%lf", &moji1, &moji2, &moji3) != EOF){
    printf("%d %3.2f %3.1f\n", moji1, moji2, moji3);
    i++;
  }
  return 0;
}
