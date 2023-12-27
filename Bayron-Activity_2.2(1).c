#include <stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, nextTerm;
    n=20;

    printf("The first 20 elements of the Fibonacci Series: \n");

    for (i = 1; i <= n; ++i)
        {
            printf("%d, ", t1);
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }

    return 0;
}
