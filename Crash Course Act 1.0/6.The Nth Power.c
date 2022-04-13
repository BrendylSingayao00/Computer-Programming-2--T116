// The nth Power

/* Create a program that accepts two(2) integers to represent the variable X: The base {represent as X}, and the exponent 
{represent as Y}. X may be greater or lesser than 0, but should not be equal to 0. For y, several constraints are palced:

If Y>0 , multiply X by itself in terms of Y.

If Y<0, do the same as above but the resulting  number should become
a denominator, with 1 as the numerator. The result should thus be a 
representation of a fraction; not a floating integers.

If Y== 0, thus result should always be 1 reagrdless of X */


#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, y, ans;
    printf("Enter X: ");
    scanf("%d", &x);
    printf("Enter Y: ");
    scanf("%d", &y);
    if (x != 0)
    {
        if (y > 0)                        //If Y>0 , multiply X by itself in terms of Y.
        {
            ans = x;
            for (int i = 1; i < y; i++)
            {
                ans *= x;
            }
        }
        else if (y < 0)                            //If Y<0, do the same as above but the resulting  number should become a denominator, with 1 as the numerator. The result should thus be a representation of a fraction; not a floating integers.
        {
            ans = x;
            for (int i = 1; i < abs(y); i++)
            {
                ans *= x;
            }
            printf("%d ^ %d = 1/%d", x, y, ans);
            return 0;
        }
        else{
            ans = 1;                          //If Y== 0, thus result should always be 1 reagrdless of X
        }
    }
    else
    {
        printf("X should not be equal to 0!");
        return -1;
    }
    printf("%d ^ %d = %d", x, y, ans);
    return 0;
}