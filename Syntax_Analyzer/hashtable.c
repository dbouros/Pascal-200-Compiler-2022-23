#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <math.h>
#include <string.h>

struct ht_Node{
    char *key;
    void *data;     // void for any data type 
    int scope;
    struct ht_Node *next;
};

typedef size_t ht_Size;

ht_Size ht_Hashfunction(char *k){
    ht_Size k_length = strlen(k);
    ht_Size hashvalue = 0;

    int i;
    for(i=0; i<k_length; i++){
        hashvalue += k[i];
        hashvalue = (hashvalue * k[i]) % sizeof(ht_Size);
    }

    return hashvalue;
}

struct ht_Node **hashtable;


bool ht_Create(ht_Size starting_size){
    int i;
    for(i=0; i<starting_size; i++){
        hashtable[i] = NULL;
    }

    return true;
}

void ht_Print(){
    int i;
    for(i=0; i<sizeof(hashtable); i++){
        printf("Node[%d], key --> %s, data --> %s, scope --> %d\n", i, hashtable[i]->key, (char *)hashtable[i]->data, hashtable[i]->scope);
    }
}
