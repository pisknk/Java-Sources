//Neil Marc C. Bayron
//BSIT-1A (T48)

#include <stdio.h>
#include <string.h>

int main()
{
    char string1[20];
    int i, length;
    int flag = 0;

    printf("Enter a word: ");
    scanf("%s", string1);

    length = strlen(string1);

    for(i=0;i < length ;i++)

    {
        if(string1[i] != string1[length-i-1])

        {
            flag = 1;
            break;
        }

    }

    if (flag)

        {
        printf("\n%s is not a palindrome.\n", string1);
        }

    else

        {
        printf("\n%s is a palindrome.\n", string1);
        }

    return 0;
}
