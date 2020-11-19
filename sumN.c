#include <stdio.h>
#include <assert.h>

int main()
{
    int i, N, sum = 0;

    printf("Enter N: ");
    scanf("%d", &N);

    assert(N > 0);
    for(i = 1; i <= N; ++i){
        sum += i;

    }
    printf("Sum of first N natural numbers: %d\n", sum);

    assert(sum == N*(N+1)/2);

    return 0;
}
