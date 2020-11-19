#include <stdio.h>

int main()
{
    int i, j;
    float x, y;
    int retvalue;


    retvalue = scanf("%d%d%f%f", &i, &j, &x, &y);
    
    printf("Number of values successfully read is %d\n", retvalue);
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    printf("x = %f\n", x);
    printf("y = %f\n", y);

    return 0;
}