#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
      
    int num,j;
    int count0=0;
    int count1=0;
    int count2=0;
    int count3=0;
    int count4=0;
    int count5=0;
    int count6=0;
    int count7=0;
    int count8=0;
    int count9=0;
    
    char srt[1000];
    int x= strlen(srt);
    for(int i=0;i<x;i++)
    {
       if(srt[i]=='0') 
       {
           count0++;
       }
       if(srt[i]=='1') 
       {
           count1++;
       }
       if(srt[i]=='2') 
       {
           count2++;
       }
       if(srt[i]=='3') 
       {
           count3++;
       }
       if(srt[i]=='4') 
       {
           count4++;
       }
       if(srt[i]=='5') 
       {
           count5++;
       }
       if(srt[i]=='6') 
       {
           count6++;
       }
       if(srt[i]=='7') 
       {
           count7++;
       }
       if(srt[i]=='8') 
       {
           count8++;
       }
       if(srt[i]=='9') 
       {
           count9++;
       }
       
       
    }
    printf("%d %d %d %d %d %d %d %d %d %d ", count0, count1, count2, count3, count4, count5, count6, count7, count8, count9);
    return 0;
}