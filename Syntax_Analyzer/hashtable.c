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

    int i=0;
    for(i=0; i<k_length; i++){
        hashvalue += k[i];
        hashvalue = (hashvalue * k[i]) % sizeof(ht_Size);
    }

    return hashvalue;
}

typedef struct ht_struct{

    struct ht_Node **nodes;
    
}HASHTABLE;

bool ht_Create(){
    
    HASHTABLE *hashtable;

}

