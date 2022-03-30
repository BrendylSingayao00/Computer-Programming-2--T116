#include <stdio.h>
int main() {
    
    int a[10];
    int n, i, sum = 0;

    do {
        printf("Enter size of array: ");
        scanf("%d", &n);
    } while (n <5);

    for(i=0;i<n;i++)
        {
	      printf("Enter Element %d : ",i+1);
	      scanf("%d",&a[i]);
	    }
    for(i=0; i<n; i++)
    {
        sum += a[i];
    }
    printf("Sum of all array = %d", sum);
    return 0;
}
