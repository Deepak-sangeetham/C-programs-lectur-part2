/* Write a program that gives a graph of squares of 100. */

#include <stdio.h>

int main(){

    int i;

    for(i = 1; i <= 100; i++){

        printf("%d,%d\n", i, i*i);
    }
    
    return 0;
}