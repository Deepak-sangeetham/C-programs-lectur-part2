#include <stdio.h>

int main()
{
    int i;
    int return_value;


    i = 10000;
    return_value = printf(" The value of i is : %d\n", i);

    printf("Number of characters printed by the previous printf %d\n", return_value);

    return 0;
}