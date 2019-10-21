typedef int arrListDataType;

typedef struct _arrayList arrayList;

typedef arrayList *arrListPtr;

typedef arrListDataType *arrListTypePtr;

arrListPtr arrayList_initial(int  len);

void arrList_for_each(arrListPtr list);

void arrList_insert(arrListDataType x,int index,arrListPtr ptr);

void arrList_delete_index(int index,arrListPtr ptr);

arrListDataType arrList_query_index(int index,arrListPtr ptr);

void arrList_order(arrListPtr ptr);
