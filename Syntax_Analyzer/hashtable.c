#include <stdio.h>
#include <stdlib.h>

typedef size_t h_Size;

struct h_Node{
    char *key;
    void *data;     // void for any data type 
    int scope;

    struct h_Node *next;
};
