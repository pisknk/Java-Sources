//Neil Marc C. Bayron
//BSIT-1A (T48)

#include <stdio.h>

int main()

{
    char myString3[100];

    printf("Enter your Sentence: ");
    gets(myString3);

    printf("\nSentence Before: %s\n", myString3);
    censor(myString3);

    printf("Sentence After: %s\n", myString3);

    return 0;
}

void four_stars(char *start)

{

    int count = 0;
    int c = '*';
    while(count < 4)

        {
        *start = c;
        start++;
        count++;
        }

}

char* find_blank(char *start)

{
    char c;

    while(*start)

        {
        c = *start;
        if(c == ' ' || c == '\t' || c == '\n'){
            return start;
        }

        start++;

        }

    return start;
}

char* find_not_blank(char *start)

{
    char c;

    while(*start)

        {
        c = *start;
        if(c != ' ' && c != '\t' && c != '\n'){
            return start;
        }

        start++;
        }

    return NULL;
}

void censor(char *start)

{
    while(start = find_not_blank(start))

        {
        int len = find_blank(start) - start;

        if(len == 4)

        {
            four_stars(start);
        }

        start += len;
    }
}
