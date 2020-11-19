#include <stdio.h>

int main()
{
    int n, d;

    printf("Enter a number :");
    scanf("%d", &n);

    for (d = 2; d < n; d++)
        if (n % d == 0)
            break;
        if (d < n)
            printf("%d is not a prime number.\n", n);
        else 
            printf("%d is a prime number.\n", n);

    return 0;

}