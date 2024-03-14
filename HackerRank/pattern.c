#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,k,l;
    scanf("%d ", &n);
    int j=2*n-1;
  	// Complete the code to print the pattern.
        for(k=0;k<(j+1)/2;k++){
            for(l=0;l<k;l++){
                printf("%d ",n-l);
            }
            
            for(l=k;l<j-k;l++){
                printf("%d ",n-k);
            }
            
            for(l=k;l>0;l--){
                printf("%d ",n-l+1);
            }
        printf("\n");   
    }
    for(k=(j-3)/2;k>=0;k--){
            for(l=0;l<k;l++){
                printf("%d ",n-l);
            }
            
            for(l=j-k;l>k;l--){
                printf("%d ",n-k);
            }
            
            for(l=k;l>0;l--){
                printf("%d ",n-l+1);
            }
        printf("\n");   
    }
    
    return 0;
}
