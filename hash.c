#include "hash.h"
#include <stdlib.h>


struct _hash_table{
    int len;
    hashTableLinkPtr linklist;
};

struct _link_list{
    hashLinkDType    data;
    hashTableLinkPtr next;
};


hashTablePtr initial_hashTable(int size)
{
    hashTablePtr hTablePtr= malloc(sizeof(hashTable));
    hTablePtr->len=size;
    hTablePtr->linklist= malloc(sizeof(hashTableLink)*size);
    hashTableLinkPtr tmp=hTablePtr->linklist;
    hashTableLinkPtr tmp2=tmp;
    for(;tmp<tmp2+size;tmp++){
        tmp->data=0;
        tmp->next=NULL;
    }
    return hTablePtr;
}

void for_each_hash_table(hashTablePtr hptr)
{
    int len_=hptr->len;
    hashTableLinkPtr link=hptr->linklist;
    hashTableLinkPtr tmp=link;
    for(;link<tmp+len_;link++){
        hashLinkDType val=link->data;
        printf("%d\n",val);
    }
}

void insert_hashTable(hashType x,hashTablePtr htable)
{
    int len=htable->len;
    hashTableLinkPtr tableLink= htable->linklist;
    int index=hashMod(x,len);
    tableLink=tableLink+index;
    printf("%p \n",tableLink);
    while(tableLink->next!=NULL){
        printf("%p \n",tableLink);
        tableLink=tableLink->next;
    }
    hashTableLinkPtr tableLinkPtr=malloc(sizeof(hashTableLink));
    tableLinkPtr->data=x;
    tableLinkPtr->next=NULL;
    tableLink->next=tableLinkPtr;
    //printf("%p \n",tableLink);
    //tableLink->data=x;
    //tableLink->next=NULL;
}




