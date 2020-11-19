#include <stdio.h>

int main()
{
    int inp, sum = 0;

    while (scanf("%d", &inp) == 1)
    {
        if (inp < 0)
            continue;

        sum = sum + inp;
    }

    printf("Sum of positive numbers in the series is %d\n", sum);

    return 0;
}