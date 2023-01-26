#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <math.h>
#include <string.h>
#include "hashtable.c"

int main(){

    if(ht_Create(10) == true){
        ht_Print();
    }

    return 0;
}