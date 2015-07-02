/*
 演算子と2つの整数値(-99999〜99999)を順に入力し、指定の演算子による演算を行い
 結果を出力する。
 演算子が'/'または'%'で2番目に入力した数値がゼロの場合は、処理負荷のメッセージを表示し、2番目の整数の再入力を行う。
 正常の場合は計算式として入力した2数、演算子および演算結果を見やすいように工夫し表示する。＊2項目目がマイナスの値の時はカッコを付けるなど
 処理は繰り返し行えることとし、演算子に'E'が入力された場合に処理終了する。
 */

#include <stdio.h>
#include <string.h>
int calc(char o, int i1, int i2);
char input(void);
int input_int(int min, int max);
char in_op;
int flag = 0;
int main() {
	int max = 9999, min = -9999, in_1, in_2, ans;
	printf("演算子と二つの整数値(%d〜%d)を順に入力\n", min, max);
	for (;;) {
		printf("演算子==>");
		in_op = input();
		if (in_op == 'E')
			return 0;
		printf("一つ目の整数==>");
		in_1 = input_int(min, max);
		flag = 1;
		printf("二つ目の整数==>");
		in_2 = input_int(min, max);
		flag = 0;
		ans = calc(in_op, in_1, in_2);
		printf("%d %c %d = %d\n", in_1, in_op, in_2, ans);
	}
}
char input(void) {
	char operator[5];
	for (;;) {
		scanf("%s", operator);
		if (!strcmp(operator, "+"))
			return operator[0];
		if (!strcmp(operator, "-"))
			return operator[0];
		if (!strcmp(operator, "*"))
			return operator[0];
		if (!strcmp(operator, "/"))
			return operator[0];
		if (!strcmp(operator, "%"))
			return operator[0];
		if (!strcmp(operator, "E"))
			return operator[0];
		else
			printf("error input again\n");
	}
}
int input_int(int min, int max) {
	int i;
	for (;;) {
		scanf("%d", &i);
		if (((in_op == '/') || (in_op == '%')) && (i == 0) && (flag == 1)) {
			printf("0 error input again\n");
		} else if (i >= min && i <= max) {
			return i;
		} else {
			printf("error input again\n");
		}
	}
}
int calc(char o, int i1, int i2) {
	int answer;
	if (o == '+')
		answer = i1 + i2;
	if (o == '-')
		answer = i1 - i2;
	if (o == '*')
		answer = i1 * i2;
	if (o == '/')
		answer = i1 / i2;
	if (o == '%')
		answer = i1 % i2;
	return answer;
}
