#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,a,b,c,d,e,sum;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    a=n%10;
    b=n%100-n%10;
    b=b/10;
    c=n%1000-n%100;
    c=c/100;
    d=n%10000-n%1000;
    d=d/1000;
    e=n%100000-n%10000;
    e=e/10000;
    sum= a+b+c+d+e;
    printf("%d",sum);
    return 0;
}
