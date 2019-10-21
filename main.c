#include "arrayList.h"
#include "std.h"
#include "hash.h"
#define N 25
/*
int main2(){
    int arr[]={1,2,3,4,5,6,7};
    int size_arr=sizeof(arr)/sizeof(arr[0]);
    dig_reverse_arr(arr,size_arr);
    dig_print_arr(arr,size_arr);
}
*/
//scanf printf gets() puts()  getchar() putchar()  getc() putc() fgetc() fputc()
int main2(int argc,char *argv[])
{
    char *str1="C:\\App\\workSpace\\work4c\\readme.txt";
    char *str2="C:\\App\\workSpace\\work4c\\readme2.txt";
    f_copy(str1,str2);
}

int main3()
{
    arrListPtr  list=  arrayList_initial(10);
    int i=0;
    for(;i<10;i++){
     arrList_insert(i,i,list);
    }
    arrList_for_each(list);
    printf("\n");
    for(i=0;i<10;i++){
        if(i%2!=0){
            arrList_delete_index(i,list);
        }
    }
    arrList_for_each(list);
    printf("\n");
    arrListDataType ret= arrList_query_index(6,list);
    printf("%d\n",ret);
}

int main4()
{
    arrListPtr  list=  arrayList_initial(10);
    int i=0;
    arrList_insert(2,0,list);
    arrList_insert(12,1,list);
    arrList_insert(2,2,list);
    arrList_insert(4,3,list);
    arrList_insert(6,4,list);
    arrList_insert(5,5,list);
    arrList_insert(1,6,list);
    arrList_insert(12,7,list);
    arrList_insert(7,8,list);
    arrList_for_each(list);
    printf("\n");
    arrList_order(list);
    arrList_for_each(list);
}

int main5()
{
    arrListPtr  list=  arrayList_initial(10);
    int i=0;
    arrList_insert(2,0,list);
    arrList_insert(12,1,list);
    arrList_insert(2,2,list);
    arrList_insert(4,3,list);
    arrList_insert(6,4,list);
    arrList_insert(5,5,list);
    arrList_insert(1,6,list);
    arrList_insert(12,7,list);
    arrList_insert(7,8,list);
    arrList_for_each(list);
    printf("\n");
    arrList_reverse(list);
    arrList_for_each(list);

}

int main()
{
    hashTablePtr hPtr=initial_hashTable(N);
    int i=0;

    for(;i<10;i++){
        insert_hashTable(i,hPtr);
    }
    for_each_hash_table(hPtr);

}

