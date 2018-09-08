#include<stdio.h>
#include<stdlib.h>
int check(int *a,int i,int n,long long int c)
{
    if(i==n)
        return 1;
    if(a[i]<=c)
    {
        //printf("a[%d]:%d c:%lld ",i,a[i],c);
        return check(a,++i,n,c-a[i]);
    }
    else
        return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        long long int c;
        scanf("%d%lld",&n,&c);
        int *arr=(int *)malloc(sizeof(int)*n);
        for(i=0;i<n;i++)
            scanf("%d",arr+i);
        if(check(arr,0,n,c)==1)
            printf("Yes\n");
        else
            printf("No\n");
    }
}
