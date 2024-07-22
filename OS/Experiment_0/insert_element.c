// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    int size,j,pos,insert;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int a[size+1];
    printf("Enter %d inputs for array values: ",size);
    for(j=0;j<size;j++){
        scanf("%d",&a[j]);
    }
    printf("Array before you had entered value :");
    for(j=0;j<size;j++){
        printf(" %d",a[j]);
    }
    printf("\nEnter element you want to insert: ");
    scanf("%d",&insert);
    printf("\nEnter position of element where you want to insert: ");
    scanf("%d",&pos);
    for(j=size;j>=pos;j--){
        a[j+1] = a[j];
    }
    a[pos]=insert;
    for(j=0;j<size+1;j++){
        printf(" %d",a[j]);
    }
    return 0;
}