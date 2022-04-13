//Number Sorting
/*Create a program that accept 10 positive integers and sort
 these in descending order (Highest to lowest)*/


#include <stdio.h>

void sort(int *arr, int length)
{
    int i, j;

    for(i=0; i<length; i++) {
        for(j=i+1; j<length; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
        }
    }
}

void print(int *arr, int length)
{
    int numbers[10],i;

    printf("\nSorted list: ");
    // descending order. (Highest to lowest)
    for(i=length-1; i>0; i--) {
        printf("%d ", *(arr + i));

}
}

int main()
{
    int numbers[10], i;
    int length = *(&numbers + 1) - numbers;

    for(i=0; i<length; i++) {

        printf("\n [%d] Input number:  ", i+1);

        scanf("%d", &numbers[i]);

   if(numbers[i] <0)
   {

        printf("\nThis is an invalid input. Try again. \n" );

    }

}


    sort(numbers, length);

    print(numbers, length);

    return 0;
}

