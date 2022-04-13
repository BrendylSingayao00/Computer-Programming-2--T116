// MIN AND MAX

/* Create a program that accepts 10 positive integers and
print out the smallest and largest number(s) in the list. */

#include<stdio.h>

int main(){

 int arr[10],i,max,min;

 for(int i=0;i<10;i++){

 printf("\n[%d]Enter the numbers:" , i+1);
 scanf("%d",&arr[i]);

    if(arr[i] <0)
   {

        printf("\nThis is an invalid input. Try again.   \n");


    }
 }
 max=arr[0];
 for(int j=0; j<10;j++){

 	if(arr[j]>=max){
 		max=arr[j];
 	}
 }

 min=arr[1];
 for(int j=0; j<10;j++){
	if(arr[j]>=0){
	 if(arr[j]<=min){
 		min=arr[j];
 	}
}
 }
  printf("Min:%d \n",min);
 printf("Max:%d ",max);

 return 0;
}
