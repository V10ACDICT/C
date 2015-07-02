/*
 契約アンペアと使用電力量を入力し、基本料金、従量料金、消費税、電気料金を算出し処理結果を出力する。
 処理は繰り返し行えることとし、契約アンペアまたは使用電力量の入力がEOFの場合に処理終了とする。
 -処理条件-
 契約アンペア、契約アンペアに対する基本料金、従量料金算出の基となる従量基本料金は配列に初期設定し、配列データは使用する関数内に定義する。
 各処理を関数として定義する。
 ①契約アンペアを入力する関数
 入力データのチェックを行う。エラーの場合はメッセージを表示し再入力する。
 ②契約アンペアをもとに基本料金を求める関数
 契約アンペアが該当なしの場合も考慮する
 ③整数を入力する関数(範囲チェック機能付き)
 入力の終了は正常データが入力されたかCtrl+Zが入力された場合とする
 ④使用電力量から従量電気料金を算出する関数
 ※従量電気料金の算出は⑨の従量基本料金を参照
 ⑤契約アンペア、使用電力量、基本料金、従量電気料金、消費税及び電気料金を出力する関数
 基本料金、従量電気料金、消費税および電気料金は小数点以下2桁まで出力する
 6消費税額と電気料金の算出
 ・消費税額 = (基本料金 + 従量電気料金) × 消費税率
 ※消費税率 = 5%
 ・電気料金 = 基本料金 + 従量電気料金 + 消費税額(円未満切り捨て)
 ⑦使用電力量の入力値は整数で範囲は0〜900とする
 ⑧契約アンペアと基本料金
 10A 260円
 15A 390円
 20A 520円
 30A 780円
 40A 1040円
 50A 1300円
 60A 1560円
 ※ただし、使用電気量がゼロの場合は基本料金は半額とする
 ⑨従量電気料金
 使用料 1kwhにつき
 最初の    120kwhまで  17.02円
 120kwh超  300kwhまで  21.77円
 300kwh超              22.98円
 ※ただし、最低月額料金は216.30円とする
 */
#include <stdio.h>
#include <string.h>
int fampere(void);
double bscf(int cnt_amp);
double bscf(int cnt_amp);
int input_mater(void);
double mater_base_rate(int mater);
void output(int ampere, int mater, double basicfee, double materrate,
		double tax, double total);
double amep(int cnt_amp);

int main() {
	int ampere, total, mater;
	double basicfee, materrate, tax;
	for (;;) {
		printf("契約アンペアの入力");
		ampere = fampere();
		if (ampere == EOF) {
			return 0;
		}
		basicfee = bscf(ampere);
		ampere = amep(ampere);
		printf("使用電力量の入力");
		mater = input_mater();
		if (mater == EOF) {
			return 0;
		}
		materrate = mater_base_rate(mater);
		if (mater == 0)
			basicfee /= 2;
		tax = (basicfee + materrate) * 0.05;
		total = basicfee + materrate + tax;
		output(ampere, mater, basicfee, materrate, tax, total);
	}
}
int fampere(void) {
	int cntamp[][2] = { { 10, 260 }, { 15, 390 }, { 20, 520 }, { 30, 780 }, {
			40, 1040 }, { 50, 1300 }, { 60, 1560 } };
	int i = 0;
	int tmp_ampere;
	while (scanf("%d", &tmp_ampere) != EOF) {
		for (i = 0; i < 7; i++) {
			if (cntamp[i][0] == tmp_ampere) {
				return i;
			}
		}
		printf("error input again\n");
	}
	return EOF;
}
double amep(int cnt_amp) {
	int cntamp[][2] = { { 10, 260 }, { 15, 390 }, { 20, 520 }, { 30, 780 }, {
			40, 1040 }, { 50, 1300 }, { 60, 1560 } };
	return (double) cntamp[cnt_amp][0];
}

double bscf(int cnt_amp) {
	int cntamp[][2] = { { 10, 260 }, { 15, 390 }, { 20, 520 }, { 30, 780 }, {
			40, 1040 }, { 50, 1300 }, { 60, 1560 } };
	return (double) cntamp[cnt_amp][1];
}
int input_mater(void) {
	int yourmater;
	while (scanf("%d", &yourmater) != EOF) {
		if (yourmater >= 0 && yourmater <= 900)
			return yourmater;
		else
			printf("error input again\n");

	}
	return EOF;
}

double mater_base_rate(int mater) {
	double materbaserate;
	if (mater <= 120) {
		materbaserate = mater * 17.02;
	}
	if (mater > 120 && 300 >= mater) {
		materbaserate = 120 * 17.02 + (mater - 120) * 21.77;
	}
	if (mater > 300) {
		materbaserate = 120 * 17.02 + (300 - 120) * 21.77 + (mater - 300);
	}
	if (materbaserate < 216.30)
		materbaserate = 216.30;
	return materbaserate;
}

void output(int ampere, int mater, double basicfee, double materrate,
		double tax, double total) {
	printf(
			"契約アンペア %d\n使用電力量 %.2d\n基本料金 %.2f\n従量電気料金 %.2f\n消費税 %.2f\n電気料金%.2f\n",
			ampere, mater, basicfee, materrate, tax, total);
}
