#include "digit.h"

int test_d(){

    //int ret= dig_get_digits(100);
    //printf("%d",ret);
}

/*
FILE *read_file();

void copy_string(const char *str_src,char*str_dest){

    while((*str_dest++=*str_src++)!='\0');
    printf("%s",str_src);
}


FILE * read_file2(){
    char *str="C:\\book\\C���Գ������_�ִ����� ��2��\\˵��.txt";
    char ch;
    FILE *file= fopen(str,"r");
    while((ch=fgetc(file))!=EOF){
        fputc(ch,stdout);
    }
    fclose(file);
}

// fgets(buffer,255,file)   buffer char����  ��ȡ���ֽ��� file �ļ�ָ��
FILE *read_file(char *str){
    char buffer[255];
    char ch;
    FILE *file= fopen(str,"r");
    char *str_file;

    while((fgets(buffer,255,file))!=NULL){
        printf("%s",buffer);
    }
    fclose(file);
}

//һ������ռ�����ַ�
void read_file3(char * str){
    char arr[1024];
    FILE *file=fopen(str,"r");
    int counts=0;
    while(fgets(arr,1024,file)!=NULL){
        counts++;
        printf("%s ",arr);
    }
    printf("\n");
    printf("%d\n",counts);
}

//��
void read_file5(char *str){
    char c_arr[1024];
    FILE *file=fopen(str,"r");
    int c;
    int counts=0;
    while((c=fgetc(file))!=EOF){
        printf("%c",c);
        counts++;
    }
    printf("\n");
    printf("%d\n",counts);
    fclose(file);
}

void read_file6(char *str){
    int ch=0;
    FILE *file=fopen(str,"r");
    while((ch=fgetc(file))!=EOF){
        printf("%c",ch);
    }
}

FILE *read_file4(){
    char c[]="�������";
    printf("%s",c);
}


void read_file7(char *str){
    int ret=include_ch(str);
    printf("%d",ret);
}

//������GBK����
int include_ch(char *str){
    int ret=0;
    char c;
    while(c=*str++){
        if((c&0x80) &&(*str & 0x80)){
            ret=1;
            break;
        }
    }
    return ret;
}
*/
