/*
ポインタを使い身長と体重からBMIを計算する。
*/
#include<stdio.h>

int main(void){
double sincho,taijuu,bmi;
double *psincho,*ptaijuu,*pbmi;

psincho=&sincho;
ptaijuu=&taijuu;
pbmi=&bmi;

printf("身長(m)==>");
scanf("%lf",psincho);
printf("体重(kg)==>");
scanf("%lf",ptaijuu);
*pbmi = *ptaijuu / ( *psincho * *psincho );
printf("BMIは%.2lfです\n",*pbmi);
return 0;
}
