typedef struct  ht_item
{
    size_t key;
    size_t value ;
}ht_item;

typedef struct Hash_Table{
    ht_item ** item;
    int count ;
    int size;
}Hash_Table;