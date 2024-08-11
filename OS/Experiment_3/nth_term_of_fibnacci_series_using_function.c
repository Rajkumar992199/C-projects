#include <stdio.h>

int fibo(int n);

int main()
{
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    fibo(n);
    printf("%dth term of fibonacci series is %d",n,fibo(n));
    return 0;
}
int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int f1 = fibo(n-1);
    int f0 = fibo(n-2);
    int f2 = f1+f0;
    return f2;
}