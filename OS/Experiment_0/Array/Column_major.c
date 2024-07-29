#include <stdio.h>
#include <string.h>
int main() {
    int i;
    int j;
    int a[3][3];
    printf("Enter inputs for 3*3 matrix");
    for(j=0;j<3;j++){
        for(i=0;i<3;i++){
            scanf("\n%d",&a[j][i]) ;
        }
    }
    for(j=0;j<3;j++){
        for(i=0;i<3;i++){

            printf(" %d",a[i][j]) ;
        }
        printf("\n");
    }
    return 0;
}