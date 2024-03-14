#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i,j,sum;
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++){
        scanf("%d",&arr[j]);
        int *arr =(int*)malloc(i*sizeof(int));
    }
    for(j=0;j<i;j++){
        sum += arr[j];
    }
    printf("%d",sum);
    return 0;
}
