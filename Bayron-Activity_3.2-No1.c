//Neil Marc C. Bayron
//BSIT-1A

#include <stdio.h>
#include <string.h>

int main()
{
    char s5[5], s10[10], s20[20];
    char aday[7] = "Sunday";
    char another[9] = "Saturday";

    strcpy(s20, aday);
    strcat(s20, another);

    puts(s20);

    return 0;
}
