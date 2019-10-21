#include "stdlib.h"
#include "stdio.h"
#define LEN 100
void f_read_char(char *str)
{
    int ch=0;
    FILE * fp=fopen(str,"r");
    if(fp==NULL){
        puts("open file failure!");
        exit(0);
    }
    while((ch=fgetc(fp))!=-1){
        putchar(ch);
    }
    fclose(fp);
    return 0;
}

void f_read_rows(char *str)
{
    char c_arrs[LEN+1];
    FILE *fp=fopen(str,"r");
    if(fp==NULL){
        puts("open file failure! ");
        exit(0);
    }
    while(fgets(c_arrs,LEN,fp)!=NULL){
        printf("%s",c_arrs);
    }
    fclose(fp);
    return 0;
}

void f_write_char(char *str)
{
    FILE *fp;
    char ch;
    if((fp=fopen(str,"wt+"))==NULL){
        printf("open file failure! ");
        exit(0);
    }
    while((ch=getchar())!='\n'){
        fputc(ch,fp);
    }
    fclose(fp);
    return 0;
}

void f_write_rows(char *str)
{
    FILE *fp;
    char c_arr[LEN];
    if((fp=fopen(str,"wt+"))==NULL){
        puts(" open feil failure! ");
        exit(0);
    }
    gets(c_arr);
    fputs(c_arr,fp);
    fclose(fp);
    return 0;
}

void f_copy(char *src, char *dest)
{
    FILE *fp_src=fopen(src,"rb");
    FILE *fp_dest=fopen(dest,"wb");
    int ret=0;
    if(fp_src==NULL){
        puts(" open file failure exit !");
        fclose(fp_src);
        exit(0);
    }
    if(fp_dest==NULL){
        puts(" open file failure exit !");
        fclose(fp_dest);
        exit(0);
    }
    while((ret=getc(fp_src))!=EOF){
        putc(ret,fp_dest);
    }
    fflush(fp_dest);
    fclose(fp_src);
    fclose(fp_dest);
    exit(0);
}

