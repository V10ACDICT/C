/*指定の高さで、左下が直角の三角形を*で表示する。
-処理条件-
高さは整数値3〜9の正の数値とする。
-結果例-
高さ = 5
*
**
***
****
*****

*/
#include <stdio.h>

int main()
{
  int i,j,ver;
  scanf("%d",&ver);
  printf("高さ = %d",ver);

  for(i=0;i<=ver;i++){
    for(j=0;j<i;j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
