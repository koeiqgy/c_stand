typedef int arrListDataType

typedef struct _arrayList arrayList;

typedef arrayList *ptrArrayList;

ptrArrayList initializer_arrayList(int  len);

void insert_arrayList(arrListDataType x, ptrArrayList ptr);

void delete_arrayList(arrListDataType x,ptrArrayList ptr);
