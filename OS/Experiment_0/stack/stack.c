#include<stdio.h>
#define size 5
struct stack
{
int a[size],top;
int temp[size];
}s;

void push()
{
    int n,i,j;
    printf("\nNo of values to be pushed: ");
    scanf("%d",&j);
    for(i=0;i<j;i++){
    printf("\nEnter value %d to be pushed: ",i+1);
    scanf("%d",&n);
    s.top++;
    s.a[s.top]=n;
    printf("\nposition %d has value : %d",s.a[size],n);
}
}
void pop()
{
printf(" \nPopped element is %d\n", s.a[s.top]);
s.top = s.top - 1;
}
int main(){
    s.top = -1;
push();    
pop();
return 0;
}