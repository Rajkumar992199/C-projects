#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
    int s[n],i,ans;
  s[1]=a;
  s[2]=b;
  s[3]=c;
  if(n<=3){
      ans = s[n];
  }
  else{
      for(i=4;i<=n;i++){
  s[i]=s[i-3]+s[i-2]+s[i-1];
  ans = s[i];
      }
  }
  return ans;
}

int main() {
    int n, a, b, c,s[n];
    
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
