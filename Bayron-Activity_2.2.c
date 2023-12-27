//Neil Marc C. Bayron
//BSIT-1A (T48)

#include <stdio.h>
int main()
{
    int i, n, x1, x2, next;
    n=20;
    x1=0;
    x2=1;

    printf("The first 20 elements of the Fibonacci Series: \n");

    for (i = 1; i <= n; ++i)
        {
            printf("%d, ", x1);
            next = x1 + x2;
            x1 = x2;
            x2 = next;
        }

    return 0;
}
