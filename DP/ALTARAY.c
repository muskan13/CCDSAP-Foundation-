#include<stdio.h>
#include<stdlib.h>
void seq(int[],int[],int);
main()
{
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int *ar=(int *)malloc(sizeof(int)*n);
        int *dp=(int *)malloc(sizeof(int)*n);
        for(i=0;i<n;i++)
            scanf("%d",&ar[i]);
        dp[n-1]=1;
        seq(ar,dp,n-2);
        for(i=0;i<n;i++)
            printf ("%d ",dp[i]);
        printf("\n");
    }
}
void seq(int ar[],int dp[],int i)
{
    if(i==-1)
        return;
    if((ar[i]>=0 && ar[i+1]<0) ||(ar[i]<0 && ar[i+1]>=0))
    {
        dp[i]=dp[i+1]+1;
    }
    else
        dp[i]=1;
    seq(ar,dp,--i);
}
