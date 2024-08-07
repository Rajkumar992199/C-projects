#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    for(i=0;i=n/2;i++){
        if(n%i==0){
            break;
        }
    }
    if(i>=n/2){
        printf("%d is not prime number",n);
    }
    else{
        printf("%d is prime number",n);
    }
    return 0;
}