//Write a code where the user can input multiple numbers of students (n) and output them into separate files.

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char name[500];
    char str[500];
    char fname[500];
    int i, n;
    int ID, math, science, english, total, average ;
    FILE * fptr;


    printf("Enter how many students: ");
    scanf("%d", & n);
    for (i = 0; i < n; i++) {

// to separate each file or .txt into different file path or location
    printf("\nEnter file name no. %d: ", i+1); 
    scanf("%s", fname);                               
    fptr = fopen(fname, "w");                         
    fgets(str, sizeof str, stdin);
    fputs(str, fptr);


    printf("Enter Student Name: ");
    fgets(name, sizeof name, stdin);
    printf("Student ID Number:");
    scanf("%d", &ID);
    printf("Math Grade:");
    scanf("%d", &math);
    printf("Science Grade:");
    scanf("%d", &science);
    printf("English Grade:");
    scanf("%d", &english);
   

     total=(math+science+english);
     average=(total/3);


         fprintf(fptr,"Student Name: %sStudent ID Number:%d \n", name, ID); 
         fprintf(fptr,"Math Grade:%d \nScience Grade:%d \nEnglish Grade:%d\n " ,math, science,english);
         fprintf(fptr,"\nTotal Grade:%d \nGrade Average:%d \n" ,total,average);
    }
  return 0;
}
