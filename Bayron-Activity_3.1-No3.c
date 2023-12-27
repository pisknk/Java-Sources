//Neil Marc C. Bayron
//BSIT-1A (T48)

#include <stdio.h>
#include <string.h>
#define max_word 20

void pluralize (char word[]);


int main (void)
{
  char noun[max_word];

for(;;)
{
  printf("Enter a noun in singular form: ");
  scanf("%s", noun);

  if (strcmp(noun, "done") == 0)
    break;

    pluralize (noun);
    printf("\nThe plural form is %s\n\n", noun);
 }

}

void pluralize (char word[])
{
  int length;
  char noun;
  length=1;
  length = strlen(word);

   if (word[length - 1] == 'y')
 {   word[length - 1] = 'i';
     word[length] = 'e';
    word[length + 1] = 's';
    word[length + 2] = '\0';
  }

 else if (word[length - 1] == 's' ||
    (word[length - 2] == 'c' && word[length - 1] == 'h') ||
    (word[length - 2] == 's' && word[length - 1] == 'h'))
  {  strcat(word, "es");
  }

  else
 {   strcat(word, "s");

    printf("New word is: ", &noun);
}
return;
}
