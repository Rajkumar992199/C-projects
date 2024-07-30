#include<stdio.h>
#define size 5
struct stack
{
int a[size],top;
int temp[size];
}s;

void pop()
{
printf(" Popped element is %d\n", s.a[s.top]);
s.top = s.top - 1;
}
int main(){
    s.top = -1;
pop();
return 0;
}