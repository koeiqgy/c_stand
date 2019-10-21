#include "arrayList.h"
struct _arrayList{
    arrListDataType *data;
    arrListDataType len;
    arrListDataType index;
};

arrListPtr arrayList_initial(int  len)
{
    arrListPtr  list=  malloc(sizeof(arrayList));
    list->data = malloc(sizeof(arrListDataType)*len);
    list->len=len;
    list->index=0;
    arrList_reset(list);
    return list;
}

void arrList_reset(arrListPtr list)
{
    int i=0;
    int len=list->len;
    arrListTypePtr indexPtr=list->data;
    for(;i<len;i++){
       *(indexPtr+i)=0;
    }
}

void arrList_insert(arrListDataType x,int index,arrListPtr ptr)
{
    int len=ptr->len;
    arrListTypePtr dataPtr= ptr->data;
    if(index>=len){
        printf(" out of range of arr\n ");
        exit(0);
    }
    *(dataPtr+index)=x;
}

void arrList_delete_index(int x,arrListPtr ptr)
{
    int i=0;
    int len=ptr->len;
    arrListTypePtr dataPtr=ptr->data;
    if(x>=len){
        printf("out of range of arr\n");
        exit(0);
    }
    *(dataPtr+x)=0;
}

void arrList_for_each(arrListPtr list)
{
    int len=list->len;
    arrListTypePtr index= list->data;
    int i=0;
    for(;i<len;i++){
        arrListDataType data=*(index+i);
        printf("%d\n",data);
    }
}

arrListDataType arrList_query_index(int index,arrListPtr ptr)
{
    int len=ptr->len;
    arrListTypePtr dataPtr=ptr->data;
    if(index>=len){
        printf("out of range of arr\n");
        exit(0);
    }
    return *(dataPtr+index);
}

void arrList_order(arrListPtr ptr)
{
    arrList_order_type(ptr,0);
}

void arrList_order_type(arrListPtr ptr,int type)
{
    int len=ptr->len;
    arrListTypePtr a=ptr->data;
    //bubble sort
    int j=len-1;
    for(;j>=0;j--){
        int i=0;
        for(;i<j;i++){
            if(type==0){
                if(a[i+1]<a[i]){
                    arrListDataType temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
            }else{
                if(a[i+1]>a[i]){
                    arrListDataType temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
            }
        }
    }
}

void arrList_reverse(arrListPtr ptr)
{
    arrList_order_type(ptr,1);
}
