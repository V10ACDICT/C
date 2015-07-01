/*
 正の整数(3〜999)を入力し、入力した値までの素数を出力する。
 処理は繰り返し行えることとし、入力値が0の場合に処理終了とする。
 */
#include <stdio.h>

int main() {
	int i, j, n, k = 0, d[200], cnt = 0;
	for (;;) {
		printf("整数3〜999を入力-->");
		scanf("%d", &n);
		if (n >= 3 && n <= 999) {
			//break;
			for (i = 2; i <= n; i++) {
				cnt = 0;
				for (j = 2; j <= i; j++) {
					if (i % j == 0) {
						cnt++;
					}
				}
				if (cnt == 1) {
					d[k] = i;
					k++;
					d[k + 1] = -1;
				}
			}
			for (k = 0, i = 1; d[k] != -1; k++, i++) {
				printf("%4d", d[k]);
				if (i % 10 == 0) {
					printf("\n");
				}
			}
			printf("\n %dまでの素数は%d個です\n", n, i - 1);
			k = 0;
		} else if (n == 0) {
			return 0;
		} else
			printf("error\n");
	}
}
