#include<stdio.h>
#include<stdlib.h>
int lucky(int d,int p,int w,int c)
{
    if(d<=0)
        return 1;
    if(d<=p && w>=c)
            return 1;
    else
        return 0;
}
main()
{
    long int t;
    scanf("%ld",&t);
    while(t--)
    {
        int x,y,k,i,flag=0;
        long int n;
        scanf("%d%d%d%ld",&x,&y,&k,&n);
        int *p=(int *)malloc(sizeof(int)*n);
        int *c=(int *)malloc(sizeof(int)*n);
        for(i=0;i<n;i++)
            scanf("%d%d",p+i,c+i);
        for(i=0;i<n;i++)
        {
            if(lucky(x-y,p[i],k,c[i]))
           {
                printf("LuckyChef\n");
                flag=1;
                break;
            }
        }
        if(flag==0)
           printf("UnluckyChef\n");

    }
}
