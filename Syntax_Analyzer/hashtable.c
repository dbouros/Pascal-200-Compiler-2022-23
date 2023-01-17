#include <stdio.h>
#include <stdlib.h>

typedef size_t h_Size;

struct h_Node{
    char *key;
    void *data;     // void for any data type 
    int scope;

    struct h_Node *next;
};

typedef struct h_Table{

    h_Size size;
    struct h_Node **nodes;
    h_Size (*hashfunc)(const char *);
    // Pointer *hashfunc == pointer to a function && has size (h_Size) and type (const char *)

}HASHTABLE;

// Hash table's functions
HASHTABLE *h_Table_Create(h_Size size, h_Size (*hashfunc)(const char *));