/*
 入力した月に該当する名称を指定の言語で出力する。
 言語区分(1:英語 2:日本語 0:終了)と月(1-12)を入力する。
 入力値をチェックしエラーの場合は再入力できるようにする。
 処理は繰り返し行えることとし、言語区分に0が入力された場合に処理終了とする。
 入力促進メッセージはメイン関数で出力する。
 */
#include <stdio.h>
#include <string.h>
int division(void);
int input_month(int min, int max);
void output(int div, int month);
int div;

int main() {
	for (;;) {
		printf("言語区分(1:英語 2:日本語0:終了)と月(1〜12)を入力\n");
		if (division() == 0)
			return 0;
		output(div, input_month(1, 12));
	}
}
int division(void) {
	for (;;) {
		printf("言語区分==>");
		scanf("%d", &div);
		if (div == 0)
			return 0;
		if (div == 1)
			return 1;
		if (div == 2)
			return 2;
		else
			printf("error\n");
	}
}
int input_month(int min, int max) {
	for (;;) {
		int month;
		printf("月==>");
		scanf("%d", &month);
		if (month >= 1 && month <= 12)
			return month;
		else
			printf("error\n");
	}
}
void output(int div, int month) {
	char *eng[] = { 0, "January", "February", "March", "April", "May", "June",
			"July", "August", "September", "October", "November", "Decenber" };
	char *japa[] = { 0, "睦月", "如月", "弥生", "卯月", "皐月", "水無月", "文月", "葉月", "長月",
			"神無月", "霜月", "師走" };
	if (div == 1)
		printf("%s\n", eng[month]);
	if (div == 2)
		printf("%s\n", japa[month]);
}
