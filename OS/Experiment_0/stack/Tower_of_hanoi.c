#include <stdio.h>

void move(int n, char source, char dest, char aux ){
    if(n<=0){
        printf("\n Input is invalid");
    }
    else if (n==1){
        printf("\nMove disk %d from %c to %c",n,source,dest);
    }
    else{
        move(n-1,source,aux,dest);
        printf("\nMove dist %d from %c to %c",n,source,dest);
        move(n-1,aux,dest,source);
    }
}

int main()
{
   int n;
   printf("\n Enter the number of rings: ");
   scanf("%d",&n);
   move(n,'A','C','B');
}

