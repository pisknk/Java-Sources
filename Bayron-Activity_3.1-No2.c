//Neil Marc C. Bayron
//BSIT-1A (T48)

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
    char str[100], reverse[100];
    int len, i, index, wordStart, wordEnd;

    printf("Type any Sentence: ");
    gets(str);

    len   = strlen(str);
    index = 0;

    wordStart = len - 1;
    wordEnd   = len - 1;

    while(wordStart > 0)
    {
        if(str[wordStart] == ' ')
        {
            i = wordStart + 1;
            while(i <= wordEnd)
            {
                reverse[index] = str[i];

                i++;
                index++;
            }
            reverse[index++] = ' ';

            wordEnd = wordStart - 1;
        }

        wordStart--;
    }

    for(i=0; i<=wordEnd; i++)
    {
        reverse[index] = str[i];
        index++;
    }

    reverse[index] = '\0';

    printf("\nOriginal Sentence: \n%s\n\n", str);
    printf("Your Sentence, but in Reverse: \n%s\n", reverse);

    return 0;
}
