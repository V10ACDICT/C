  /*
  標準入力より入力ファイル名(syohin.mst)と出力ファイル名(syohin.bak)を入力し、入力ファイル名の内容を出力ファイルにコピーする。コピー後にコピーしたレコード数を出力する。入力ファイルが存在しない場合はエラーメッセージを出力し、コピーは行わない。
  */
  #include <stdio.h>

  int main (void)
  {
    int code,price,cnt=0;
    char name[32],readname[32],writename[32];
    FILE *fp,*fpout;

    printf("入力ファイル名==> ");
    scanf("%s",readname);
    printf("出力ファイル名==> ");
    scanf("%s",writename);
    fp=fopen(readname,"r");
    fpout=fopen(writename,"w");
    if(fp==NULL){
      printf("入力ファイル%sが見つかりません。\n",readname);
      return -1;
    }
    printf("***ファイルコピー開始***\n");
    while(fscanf(fp,"%d%s%d",&code,name,&price)!=EOF){
      fprintf(fpout,"%5d %s \t%d\n",code,name,price);
      cnt++;
    }
    printf("%dレコードをコピーしました。\n",cnt);
    printf("***ファイルコピー終了***\n");

    fclose(fp);
    fclose(fpout);
    return 0;
  }
