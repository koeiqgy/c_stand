 #define  hashMod(a,len) ((a)%(len))
 typedef struct _hash_table hashTable;

 typedef struct _link_list  hashTableLink;

 typedef int hashType;

 typedef int hashTableLinkDataType;

 typedef hashTableLinkDataType hashLinkDType;

 typedef hashTableLink *hashTableLinkPtr;

 typedef hashTable *hashTablePtr;

 void for_each_hash_table(hashTablePtr hptr);

 void insert_hashTable(hashType x,hashTablePtr htable);
