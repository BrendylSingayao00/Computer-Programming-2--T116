//LETTER GRADE EQUIVALENT

/* Creat a program that accepts an integers and convert
it to the appropriate letter grade in the Table frovided.
The input should be greater than 0 but less that or equal to 100 */

#include<stdio.h>
#include <stdio.h>
int main(void){
int num;
{

    float grade;



    printf(" Enter grade:  ");
	scanf("%f", &grade);

    if(grade<=0)
    {
        printf("Invalid input try again");
    }
    else if(grade>=1 && grade<50)
    {
        printf("Your letter grade is F");
    }
    else if(grade>=50 && grade<59)
    {
        printf("Your letter grade is D");
    }
    else if(grade>=60 && grade<67)
    {
        printf("Your letter grade is C");
    }
    else if(grade>=68 && grade<75)
    {
        printf("Your letter grade is B-");
    }
    else if(grade>=76 && grade<83)
    {
        printf("Your letter grade is B");
    }
    else if(grade>=84 && grade<91)
    {
        printf("Your letter grade is A-");
    }
    else
    {
        printf("Your letter grade is A");
    }
}


	return 0;

}
