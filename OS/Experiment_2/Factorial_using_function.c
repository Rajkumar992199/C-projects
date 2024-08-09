#include <stdio.h>

int fact(int n);

int main()
{
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    printf("factorial is : %d",fact(n));
    return 0;
}
int fact(int n){
    if(n==0){
        return 1;
    }
    int f1 = fact(n-1);
    int f2 = f1*n;
    return f2;
}