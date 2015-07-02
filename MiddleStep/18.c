/*
 4つの実数型データ(A,B,C,D)を読み込み、そのうち3つの数の組をすべて取り出し、三角形となるものについてのみ、面積を計算する。
 また、その形状が、直角三角形、鋭角三角形、鈍角三角形のいずれであるかを求める。
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
int f_tri(double a, double b, double c);
double area(double a, double b, double c);
void geo(double a, double b, double c);
int main(void) {
	int i;
	double side[4], s;

	for (i = 0; i < 4; i++) {
		scanf("%lf", &side[i]);
	}
	if (f_tri(side[0], side[1], side[2]) == 0) {
		s = area(side[0], side[1], side[2]);
		printf("4つのうちa = %.2f b= %.2f c = %.2fとすると\n", side[0], side[1],
				side[2]);
		printf("面積 %.2f\n", s);
		geo(side[0], side[1], side[2]);
	} else {
		printf("4つのうちa = %.2f b= %.2f c = %.2fとすると\n", side[0], side[1],
				side[2]);
		printf("三角形になりません。\n");
	}

	if (f_tri(side[0], side[1], side[3]) == 0) {
		s = area(side[0], side[1], side[3]);
		printf("4つのうちa = %.2f b= %.2f c = %.2fとすると\n", side[0], side[1],
				side[3]);
		printf("面積 %.2f\n", s);
		geo(side[0], side[1], side[3]);
	} else {
		printf("4つのうちa = %.2f b= %.2f c = %.2fとすると\n", side[0], side[1],
				side[3]);
		printf("三角形になりません。\n");
	}

	if (f_tri(side[0], side[2], side[3]) == 0) {
		s = area(side[0], side[2], side[3]);
		printf("4つのうちa = %.2f b= %.2f c = %.2fとすると\n", side[0], side[2],
				side[3]);
		printf("面積 %.2f\n", s);
		geo(side[0], side[2], side[3]);
	} else {
		printf("4つのうちa = %.2f b= %.2f c = %.2fとすると\n", side[0], side[2],
				side[3]);
		printf("三角形になりません。\n");
	}

	if (f_tri(side[1], side[2], side[3]) == 0) {
		s = area(side[1], side[2], side[3]);
		printf("4つのうちa = %.2f b= %.2f c = %.2fとすると\n", side[1], side[2],
				side[3]);
		printf("面積 %.2f\n", s);
		geo(side[1], side[2], side[3]);
	} else {
		printf("4つのうちa = %.2f b= %.2f c = %.2fとすると\n", side[1], side[2],
				side[3]);
		printf("三角形になりません。\n");
	}
}
/*********三角形になるかどうか******************************
 辺の長さ3つを引数として三角形なら0,そうでないなら−1を返す。
 *****************************************************/
int f_tri(double a, double b, double c) {
	if ((a + b > c) && (fabs(a - b) < c))
		return 0;
	else
		return -1;
}
/**********************
 三角形の面積を求めて返す
 **********************/
double area(double a, double b, double c) {
	double h, s_before, s;
	h = (a + b + c) / 2;
	s_before = h * (h - a) * (h - b) * (h - c);
	s = sqrt(s_before);
	return s;
}
/*********
 形状の判定
 *********/
void geo(double a, double b, double c) {
	double data[3], tmp = 0, fab_d;
	int i, j;
	data[0] = a;
	data[1] = b;
	data[2] = c;
	for (i = 0; i < 2; i++) {
		for (j = i + 1; j < 3; j++) {
			if (data[i] > data[j]) {
				tmp = data[i];
				data[i] = data[j];
				data[j] = tmp;
			}
		}
	}
	fab_d = ((data[2] * data[2]) / (data[0] * data[0] + data[1] * data[1])) - 1;
	if (fab_d <= 1e-4 && fab_d >= -(1e-4)) {
		printf("直角三角形\n");
	} else if (fab_d > 1e-4) {
		printf("鈍角三角形\n");
	} else
		printf("鋭角三角形\n");
}
