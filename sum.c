/* Sums a series of numbers */

#include <stdio.h>

int main(void)
{
    int n, sum = 0;

    printf("This program sums a series of numbers we entered.\n");
    
    while (scanf("%d", &n) == 1)

    {
        sum += n;
        
    }
    printf("The sum is : %d\n", sum);

    return 0;
}
