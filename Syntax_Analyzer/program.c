#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <math.h>
#include <string.h>
#include "hashtable.c"
#include "hashtable1.c"

int scope = 0;
HASHTBL *hashtbl;

int main(){

    //if(ht_Init(10) == true){
    //    ht_Print(10);
    //}
    if(!(hashtbl = hashtbl_create(10, NULL))) {
        fprintf(stderr, "ERROR: hashtbl_create() failed!\n");
        exit(EXIT_FAILURE);
    }

    hashtbl_insert(hashtbl, "$1", NULL, scope);
    hashtbl_get(hashtbl, scope);
    hashtbl_destroy(hashtbl);

    return 0;
}