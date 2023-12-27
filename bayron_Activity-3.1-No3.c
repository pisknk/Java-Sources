//Neil Marc C. Bayron
//BSIT-1A

#include <stdio.h>
#include <string.h>

int main()
{
    char x[80] = "BSIT";
    char y[80] = "BSEMC";

    strcpy(x,y);
    printf("%s\t%s", x, y);
}
