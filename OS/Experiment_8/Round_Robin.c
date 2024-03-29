#include<stdio.h>
int main(){
    int n;
    printf("Enter number of processes :");
    scanf("%d",&n);
    int bt[n], pID[n], wt[n],tat[n], at[n], ct[n], temp[n];
    int ttat =0, twt =0,tt =0,tct=0, tq;
    wt[0]=0 ;
    for(int i=0;i<n;i++){
        printf("Enter ID of processe %d :",i+1);
        scanf("%d",&pID[i]);
        printf("Enter arrival time of processe :",i+1);
        scanf("%d",&at[i]);
        printf("Enter bust time of processe :",i+1);
        scanf("%d",&bt[i]);
        tct += bt[i] ;
        temp[i] = bt[i];
    }
    printf("Enter Time Quantum : ");
        scanf("%d",&tq);
        while(tt < tct){
            for(int i=0;i<n;i++){
            if(temp[i]<=tq){
             tt +=temp[i];
             temp[i] = 0;
             ct[i]=tt;
            }
            else{
                tt += tq;
                temp[i] -= tq;
            }
            }
        }
        for(int i=0;i<n;i++){
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
        ttat += tat[i];
        twt += wt[i];
    }
        
    printf("Program_ID      Arrival_time        Bust_time       Completion_time     Turn_around_time        Waiting_time\n");
    for(int i=0;i<n;i++){
    printf("%d\t\t",pID[i]);
    printf("%d\t\t\t",at[i]);
    printf("%d\t\t\t",bt[i]);
    printf("%d\t\t",ct[i]);
    printf("%d\t\t",tat[i]);
    printf("%d\n",wt[i]);
    }
    printf("Average of Turn Around Time is : %d\n",(ttat/n));
    printf("Average of Waiting Time is : %d\n",(twt/n));
}