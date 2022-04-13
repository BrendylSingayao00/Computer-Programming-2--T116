/* Pattern Printing
         Using Nested loops (a loop within a loop), Create a program that will accept an integer
         greater than 0(N) and print out N lines of asterisks (*) into a pattern specific to that
         input*/

#include<stdio.h>
int main()
{
    int n, row, col, space;

    printf("Enter integers: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
      for(space=1;space<=n-row;space++) printf(" ");
      for(col=1;col<=row;col++) printf("* ");

      printf("\n");


    }

    return 0;
}
