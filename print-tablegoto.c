#include <stdio.h>

int main()
{
    int i , N;

    printf("Enter the table you want to print : ");
    scanf("%d", &N);

    i = 1;

L1:
    if (i > 10)
        goto L2;
    printf("%d x %d = %d\n", N, i, N*i);
    i = i + 1;
    goto L1;
L2: ;
return 0;
}