/* Computes a Universalproduct code check digit */

#include <stdio.h>

int main()
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
        first_sum, second_sum, total, adjusted_total, remainder, check_digit;

    printf("Enter the first (single) digit : ");
    scanf("%d", &d);

    printf("Enter first group of five digits : ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

    printf("Enter second group of five digits : ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5;

    second_sum = i1 + i3 + i5 + j2 + j4;

    total = (3 * first_sum) + second_sum;

    adjusted_total = total - 1;

    remainder = adjusted_total % 10;

    check_digit = 9 - remainder;

    printf("Check digit : %d\n", check_digit);

    return 0;
}