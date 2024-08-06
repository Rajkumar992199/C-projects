#include <stdio.h>

void weather(int temp);

int main()
{
    int temp;
    printf("Enter the value of temperature :");
    scanf("%d",&temp);
    weather(temp);
    return 0;
}
void weather(int temp){
    if(temp>=25){
        printf("Hot");
    }
    else{
        printf("Cold");
    }
}