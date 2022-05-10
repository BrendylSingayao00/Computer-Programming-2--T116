// C file Handling
//Write a program that appends multiple lines in a text file

#include <stdio.h>

int main ()
{
  FILE * fptr;
  int i,n;
  char str[100];
  char fname[20];
  char str1;
  
  	printf(" Input the file location: ");
	scanf("%s",fname);	
	fptr = fopen(fname, "a"); 
    printf(" Input how many lines to be appended: ");
    scanf("%d", &n);
    
    for(i = 0; i < n+1;i++)
    {
    fgets(str,sizeof str, stdin);
    fputs(str, fptr);
  }
  fclose (fptr);

  return 0;
}



