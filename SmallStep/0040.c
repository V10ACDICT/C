/*******************************************************************************
char型の変数a、int型の変数b、float型の変数c、double型の変数d、それぞれの変数に対応するポインタ変数を宣言し、ポインタ変数を使って標準入力よりデータを入力する。それぞれの変数のアドレス、サイズ(バイト数)、値を表示する。アドレスとポインタの変数の値は、16進表示する。
********************************************************************************/
#include <stdio.h>

int main (void){
char a;
int b;
float c;
double d;
char *pa;
int *pb;
float *pc;
double *pd;

pa=&a;
pb=&b;
pc=&c;
pd=&d;

printf("please input a==>");
scanf("%s",pa);
printf("please input b==>");
scanf("%d",pb);
printf("please input c==>");
scanf("%f",pc);
printf("please input d==>");
scanf("%lf",pd);

printf("  変数          アドレス         サイズ           値\n");
printf("----- ------------------- ----------- -----------------------\n");
printf("a       %p       %6d        %8c\n",&a,sizeof a,a);
printf("pa      %p       %6d        %p\n",&pa,sizeof pa,pa);
printf("b       %p       %6d        %8d\n",&b,sizeof b,b);
printf("pb      %p       %6d        %p\n",&pb,sizeof pb,pb);
printf("c       %p       %6d        %8f\n",&c,sizeof c,c);
printf("pc      %p       %6d        %p\n",&pc,sizeof pc,pc);
printf("d       %p       %6d        %8f\n",&d,sizeof d,d);
printf("pd      %p       %6d        %p\n",&pd,sizeof pd,pd);

return 0;
}
