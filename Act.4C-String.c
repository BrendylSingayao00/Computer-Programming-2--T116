#include <stdio.h>
#include <string.h>
int main()
{
   char datastr[500];
   int  i;
   int vowels=0,consonants=0;

   printf("Input a string: ");
   gets(datastr);

   // Convert Vowel letters to upper case
   i=0;
   while(datastr[i]!='\0')
   {
        if(datastr[i]=='a' ||datastr[i]=='e' ||datastr[i]=='i' ||datastr[i]=='o' ||datastr[i]=='u')
            datastr[i]=datastr[i]-32;
                 i++;
   }

    // to count the Vowels and Consonant
    for(i=0;datastr[i];i++)
    {
    	if((datastr[i]>=65 && datastr[i]<=90)|| (datastr[i]>=97 && datastr[i]<=122))
    	{

        if(datastr[i]=='a'|| datastr[i]=='e'||datastr[i]=='i'||datastr[i]=='o'||datastr[i]=='u'||datastr[i]=='A'||datastr[i]=='E'||datastr[i]=='I'||datastr[i]=='O' ||datastr[i]=='U')
		      vowels++;
		      else
             consonants++;
    	}
   }

   printf("String Converted: %s \n\n",datastr);
    printf("String Length : %d\n", i);
    printf("vowels: %d\n",vowels);
    printf("consonants: %d\n",consonants);

    return 0;
}