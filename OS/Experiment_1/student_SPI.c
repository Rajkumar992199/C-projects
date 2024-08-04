#include<stdio.h>

struct subject{
    int marks1, marks2,marks3,marks4,marks5;
}sub;
 
int main()
{
    int total;
    float spi;
       
        printf("\nENTER THE MARKS OF subject 1  : ");
        scanf("%d",&sub.marks1);

        printf("\nENTER THE MARKS OF subject 2  : ");
        scanf("%d",&sub.marks2);

        printf("\nENTER THE MARKS OF subject 3  : ");
        scanf("%d",&sub.marks3);

        printf("\nENTER THE MARKS OF subject 4  : ");
        scanf("%d",&sub.marks4);
        
        printf("\nENTER THE MARKS OF subject 5  : ");
        scanf("%d",&sub.marks5);
       
        total = sub.marks1 + sub.marks2 + sub.marks3 + sub.marks4 + sub.marks5 ;

        spi = total / 50 ;
        printf("YOUR SPI IS :%f",spi);

        return 0;

        }