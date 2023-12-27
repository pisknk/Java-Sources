//Neil Marc C. Bayron
//BSIT-1A

#include <stdio.h>
#include <string.h>

int main()
{
    char t1[15], t2[15]={"Good Luck"};

    strncpy(t1,t2,5);

    t1[5]='\0';
    printf("%s", t1);
    return 0;
}
