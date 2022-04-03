#include<stdio.h>

int main()
{
   
    int n=5, i;
    float sum = 0, x;

    printf("\nEnter five(%d) numbers: \n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%f", &x);
        sum += x;
    }
    printf("\nAverage = %0.f", (sum/n));
 
    return 0;
}
