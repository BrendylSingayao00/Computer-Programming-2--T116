//Finding the Mean of N numbers 

/* Create a program that accepts N positive integers, 
terminating only if 0 is used as an input. It will then 
output the mean or average of the positive numbers.
Negative numbers should not be accepted as an input and
should not be reflected in the total number of input. */

#include <stdio.h>
int main()
{
    int i = 1, temp, rsum = 0, vcount = 0;
    float mean;
    while (1)
    {
        printf("[%d] Input Number: ", i);
        scanf("%d", &temp);
        if (temp < 0)     // if the user enter less than zero it will continue
        {
            continue;
        }
        else if (temp == 0)   // if the user enter  zero the program terminate
        {
            break;
        }
        else
        {
            vcount++;
            rsum += temp;
            i++;
        }
    }
    mean = rsum / vcount;             
    printf("Average = %.2f.", mean);
    return 0;
}