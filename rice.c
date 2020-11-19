// Write a program to find the number of sacks required for filling the rice. The quantity of rice is given by the user.
#include <stdio.h>
#include <math.h>

#define KGSPERSACK 20.0

int main()
{
    int weight, no_of_sacks;

    printf("enter the quantity of rice (in KGS): ");
    scanf("%d", &weight);

    no_of_sacks = ceil(weight / KGSPERSACK);

    printf("Number of sack required to hold %d KGs of Rice is %d\n", weight, no_of_sacks);

    return 0;
}