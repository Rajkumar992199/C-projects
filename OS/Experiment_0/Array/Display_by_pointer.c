#include <stdio.h>
#include <string.h>
int main() {
    int i;
    int j;
    int* p;
    int search;
    printf("Enter size of array");
    scanf("%d",&i);
    int a[i];
    printf("Enter inputs for array values");
    for(j=0;j<i;j++){
        scanf("%d",&a[j]);
    }
    for(j=0;j<i;j++){
    p= &a[j];
    printf("\n%d",*p);
    }
    return 0;
}