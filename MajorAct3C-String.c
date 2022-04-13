#include <stdio.h>
#include <string.h>


int main()
{
    char str[500], reverse[500];
    int len, i, index, wordStart, wordEnd;

    printf("Enter any string: ");
    gets(str);

    len   = strlen(str);
    index = 0;

    
    wordStart = len - 1;            
    wordEnd   = len - 1;

    while(wordStart > 0)
    {
        // If a word is found (' ') means space 
        if(str[wordStart] == ' ')
        {
            // Add the word to the reverse string

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

    // Finally add the last word
    for(i=0; i<=wordEnd; i++)
    {
        reverse[index] = str[i];
        index++;
    }

    // Add NULL character at the end of reverse string
    reverse[index] = '\0'; 

    
    printf("Reverse ordered words \n%s", reverse);

    return 0;
}


 
