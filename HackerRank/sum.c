#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int A,B,SUM1,SUB1;
    float X,Y,SUM2,SUB2;
    scanf("\n%d%d",&A,&B);
     scanf("\n%f%f",&X,&Y);
    SUM1=A+B;
    SUB1=A-B;
    SUM2=X+Y;
    SUB2=X-Y;
    printf("%d %d",SUM1,SUB1);
    printf("\n%.1f %.1f",SUM2,SUB2);
    return 0;
}