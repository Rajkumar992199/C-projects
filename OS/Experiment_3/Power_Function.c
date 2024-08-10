#include <stdio.h>

int power(int n,int p);

int main()
{
    int n,p;
    printf("Enter the value of number and power :");
    scanf("%d%d",&n,&p);
    power(n,p);
    printf("%d",power(n,p));
    return 0;
}
int power(int n,int p){
    if(p==1){
        return;
    }
    int pow1 = power(n,p-1);
    int pow2 = pow1*n;
    p--;
    return pow2;
}