/********************************************
整数データ(-9999〜9999)を順次入力(11.txt)し配列に格納する。
全データ入力後にデータを昇順に並べ替えて出力する。
**********************************************/
#include <stdio.h>
#include <string.h>
int read(int *n, int *data);
void write(int n, int *data);
int *sort(int n, int *data);
int check(int n, int *data);

int main(void){
  int n=0, data[30];/*入力データ格納用*/
  read(&n, data);
  if( check(n, data) )return 0;
  write( n, sort(n, data ) );
  printf("データ件数>>%d\n",n);
}

/*****************************************
EOFまで整数データを1つずつ読み込む。
読み込んだデータの個数をnに代入する関数read。
*****************************************/
int read(int *n, int *data){
  int i = 0;
  while( scanf("%d",( data + i) ) != EOF){
    i++;
    *n = i;
  }
  return 0;
}
/************
出力
*************/
void write(int n, int *data){
  int i;
  for(i = 0;i < n; i++){
    printf("%d\n", *(data + i) );
  }
}
/****************
並び替え
*****************/
int *sort(int n, int *data){
  int i, j, tmp;
  for(i = 0; i < n-1; i++){
    for(j = i+1; j < n; j++){
      if( *( data + i ) > *( data + j ) ){
        tmp = *( data + i );
        *( data + i ) = *( data + j );
        *( data + j ) = tmp;
      }
    }
  }
  return data;
}
/*******************
データの個数チェック
0個:メッセージ
1個:メッセージ
2個:何もしない
*********************/
int check(int n, int *data){
  if(n == 0){printf("データがありませんでした。\n");return 1;}
  if(n == 1){write(n, data); printf("\nデータ一つしかありませんでした。\n");return 1;}
  else return 0;
}
