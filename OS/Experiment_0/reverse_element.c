#include <stdio.h>
#include <stdlib.h>


void reverse(int arr[], int n){
    int i,j,temp;
    for(i=0,j=n-1; i<j; i++,j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    i=0;
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    reverse(arr, num);

    return 0;
}