#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <math.h>
#include <string.h>
#include "hashtable.c"

HASHTBL *hashtbl;
int scope = 0;

int main(){

    if(!(hashtbl = hashtbl_create(10, NULL))) {
        perror("ERROR: Creation of hashtable failed!\n");
        exit(-3);
    }

    hashtbl_insert(hashtbl, "ANTWNHS", NULL, scope);
    hashtbl_insert(hashtbl, "KWSTAS", NULL, scope);
    scope++;
    hashtbl_insert(hashtbl, "MHTSOS", NULL, scope);
    hashtbl_insert(hashtbl, "ANDREAS", NULL, scope);

    printf("\n Print Hashtable for Scope 0 and 1: \n\n");

    hashtbl_get(hashtbl, scope); scope--;
    hashtbl_get(hashtbl, scope);

    hashtbl_destroy(hashtbl);

    return 0;
}