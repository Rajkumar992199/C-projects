#include <stdio.h>
#include <string.h>
int main() {
    int size,j,pos,delete;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int a[size+1];
    printf("Enter %d inputs for array values: ",size);
    for(j=0;j<size;j++){
        scanf("%d",&a[j]);
    }
    printf("Array before you had delete value :");
    for(j=0;j<size;j++){
        printf(" %d",a[j]);
    }
    printf("\nEnter element you want to delete: ");
    scanf("%d",&delete);
     for(j=0;j<size+1;j++){
          if(a[j]==delete) { 
              a[j]=a[j+1];
        }
    }
    a[size-1]=0;
    for(j=0;j<size;j++){
        printf(" %d",a[j]);
    }
    return 0;
}