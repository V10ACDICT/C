/*
東海道新幹線の駅名を入力し、東京からの順序番号と距離及び普通運賃を出力する。
処理は繰り返し行えるものとし、入力した駅名が"終了"の時に処理終了とする。
*/
#include <stdio.h>
#include <string.h>
typedef struct station {
	int no;
	char name[10];
	double distance;
	double distance_total;
} station_t;
typedef struct distance_fare {
	int no;
	double distance;
	int fare;
} fare_t;
void calc(int n, station_t *data1, fare_t *data2);

int main(void) {

	int i, j;
	FILE *fp1, *fp2;
	station_t data1[17];
	fare_t data2[35];
	char in_data[10];
	fp1 = fopen("station.txt", "r");
	fp2 = fopen("fare.txt", "r");

	for (i = 0;
			fscanf(fp1, "%d%s%lf", &data1[i].no, data1[i].name,
					&data1[i].distance) != EOF; i++);
	for (i = 0;
			fscanf(fp2, "%d%lf%d", &data2[i].no, &data2[i].distance,
					&data2[i].fare) != EOF; i++);
	printf(
			"東海道新幹線の指定駅の東京駅からの順序番号と距離、運賃を表示します。\n終了する時は”終了”を入力してください。\n\n-------------------------------------------\n");
	for (;;) {
		if (i != 0 && i != 17) {printf("駅名を入力してください(処理終了時:終了)==>");}
		scanf("%s", in_data);
		for (i = 0; i < 17; i++) {
			if (!strcmp(data1[i].name, in_data)) {
				break;
			}
		}
		if (i > 0 && i < 17) {calc(i, data1, data2);
		} else if (i == 0) {printf("東京は始発駅です。もう一度入力してください。==>");
		} else if (!strcmp(in_data, "終了")) {printf("処理を終了します\n");return 0;
		} else if (i == 17) {printf("駅名が違います。もう一度入力してください。==>");
		}
	}
	fclose(fp1);
	fclose(fp2);
}
void calc(int n, station_t *data1, fare_t *data2) {
	int i;
	for (i = 0; i <= n; i++) {
		data1[n].distance_total += data1[i].distance;
	}
	for (i = 0;; i++) {
		if (data1[n].distance_total < data2[i].distance) {
			break;
		}
	}
	printf("%sは%d番目の駅で、東京から%3.1fKmです。\n", data1[n].name, data1[n].no,
			data1[n].distance_total);
	printf("普通運賃は%dです。\n", data2[i].fare);
	data1[n].distance_total = 0;
}
