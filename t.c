
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
intmain()
{
    ​​​​​​​​ doublea;
    intb, c, e;
    intstr[50], ch, len = 0, sum = 0;
    for (inti = 0; (ch = getchar()) != ' '; i++)
    {
        ​​​​​​​​
        str[i] = ch;
        len++;
    }
    ​​​​​​​​
    scanf("%d %d", &e, &b);
    for (intj = (len - 1); j = 0; j--)
    {
        ​​​​​​​​
        for (intk = 0; k <= len; k++)
        {
            ​​​​​​​​
            a = (double)pow(e, k);
            sum += (str[j] * a);
        }
        ​​​​​​​​
    }
    ​​​​​​​​
    do
    {
        ​​​​​​​​
        c = sum % b;
        printf("%d", c);
        sum /= b;
    }
    ​​​​​​​​while(c != 0);
}
​​​​​​​​

​
