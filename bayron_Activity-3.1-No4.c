//Neil Marc C. Bayron
//BSIT-1A

#include <stdio.h>
#include <string.h>

int main()
{
    char sss[12] = "123-45-6789";
    char sssshort[7], sss1[4], sss2[3], sss3[5];

    strncpy(sss3, &sss[7], 4);
    sss3 [4] = '\0';

    printf("sss3 = %s", sss3);

    return 0;
}
