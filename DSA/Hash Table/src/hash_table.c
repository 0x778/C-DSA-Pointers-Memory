#include <stdlib.h>
#include <stdio.h>
#include "hash_table.h"

#define MaxSize 100

ht_item HashTable [MaxSize];

size_t hash_function(int key){
 return key % MaxSize ;
}

void insert(size_t key , size_t value){
size_t index = hash_function(key);
HashTable[index].value = value;
HashTable[index].key = key;
}

ht_item * lookup(size_t key){
   size_t index = hash_function(key);
   ht_item * found =  &HashTable[key];
   return found; 
}


int main()
{
    size_t key = 20 , value = 40 ;
   insert(key , value);
   ht_item * found = lookup(key);
   printf("%lu \n" , found->value); 
    return 0;
}
