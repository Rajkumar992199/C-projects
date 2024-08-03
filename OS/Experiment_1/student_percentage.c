#include <stdio.h>
#include<string.h>

struct student
{
    int enrl_no[12];
    int sub1,sub2,sub3,sub4,sub5;
    
}s1;

int main() {

    int total;
    int percentage;

    puts("\nEnter enrollment number :");
    gets(s1.enrl_no);
    printf("\nEnter marks of subject 1 :");
    scanf("%d",&s1.sub1);
    printf("\nEnter marks of subject 2 :");
    scanf("%d",&s1.sub2);
    printf("\nEnter marks of subject 3 :");
    scanf("%d",&s1.sub3);;
    printf("\nEnter marks of subject 4 :");
    scanf("%d",&s1.sub4);
    printf("\nEnter marks of subject 5 :");
    scanf("%d",&s1.sub5);
    
    total = s1.sub1 + s1.sub2 + s1.sub3 +s1.sub4 +s1.sub5;
    printf("YOUR TOTAL MARKS IS :%d",total);
    
    percentage = total/5;
    printf("\nYOUR PERCENTAGE IS :%d",percentage);
    return 0;
}