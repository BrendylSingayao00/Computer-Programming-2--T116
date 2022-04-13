//DECIMAL TO BINARY, OCTAL, AND HEXADECIMAL

/* Create a Program that accepts one(1) integer input
(should be greater than 0) and outputs the Binary, Octal
and Hexadecimal equivalent of that input. */


#include<stdio.h>
void convert(int, int);

int main()
{
        int n;
        printf("Enter Decimal Integer: ");
        scanf("%d", &n);

        printf("\nBinary : ");
        convert(n, 2);
        printf("\n");

        printf("\nOctal : ");
        convert(n, 8);
        printf("\n");

        printf("\nHexadecimal : ");
        convert(n, 16);
        printf("\n");

        return 0;
}/*End of main()*/

void convert (int n, int base)
{
        int rem = n%base;

        if(n==0)
                return;
        convert(n/base, base);

        if(rem < 10)
                printf("%d", rem);
        else
                printf("%c", rem-10+'A' );
}
