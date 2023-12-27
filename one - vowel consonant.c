#include <stdio.h>

int main()

{
    char ch;

    printf("Enter a character: ");
    scanf("%c",&ch);

    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))

        {

            switch(ch)

        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':

                printf("Entered character is a VOWEL\n",ch);
                break;

            default:

                printf("Entered character is a CONSONANT\n",ch);
        }

    }

    else

    {

        printf("Entered character is NOT an alphabet\n",ch);

    }

    return 0;
}
