//Neil Marc C. Bayron
//BSIT-1A

#include <stdio.h>
#include <string.h>

int main()
{
    char last[20], first[20], middle[20];
    char pres[20] = {"Adams, John Quincy"};

    strncpy(last, &pres[14], 2);
    last[2] = '\0';

    printf("%s%s", first, last);

    return 0;
}
