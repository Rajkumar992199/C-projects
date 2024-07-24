#include <stdio.h>
#include <string.h>
int main() {
    int i;
    int j;
    int search;
    printf("Enter size of array");
    scanf("%d",&i);
    int a[i];
    printf("Enter inputs for array values");
    for(j=0;j<i;j++){
        scanf("%d",&a[j]);
    }
    printf("Enter array value for search that");
    scanf("%d",&search);
    for(j=0;j<i;j++){
          if(a[j]==search) { 
              printf("KEY FOUND : a[%d] = %d",j,a[j]) ;
              return 0;
        }
    }
    if(i=j){
        printf("KEY NOT FOUND");
    }
    return 0;
}