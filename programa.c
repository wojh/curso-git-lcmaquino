#include <stdlib.h>
#include <stdio.h>
#include "fibonacci.h"

void main(){
    int i;

    for(i=1; i<=10; i++){
        printf("%d ", fib(i));
    }

    printf("\n");
}