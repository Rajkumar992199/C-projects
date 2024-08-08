#include <stdio.h>

int main()
{
    int i,j,k,m,n,x=0,y=0;
    printf("Enter value of m and n : ");
    scanf("%d%d",&m,&n);
    if(n>=0){
        if(m<=0){
            m=1;
    if(m<=2){
        if(m!=3){
            printf("2\n");
        }
        printf("3\n");
    }
    for(i=1;i<=n/6;i++){
        int j = (6*i-1) , k = (6*i+1);
        if(j>=m&&j<=n){
            for(x=2;x<=j;x++){
                if(j%x==0){
                    break;
                }
            }
            if(x>=j-1){
            printf("%d\n",j);
        }
        }
        if(k>=m&&k<=n){
            for(y=2;y<=k;y++){
                if(k%y==0){
                    break;
                }
            }
            if(y>=k-1){
            printf("%d\n",k);
        }
        }
    }
    }
    }
    else{
        printf("Enter valid numbers");
    }
    return 0;
}
