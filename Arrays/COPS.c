#include<stdio.h>
#include<stdlib.h>
main()
{
    int t,i,j;
    scanf("%d",&t);
    while(t--)
    {
        int m,x,y,r;
        scanf("%d %d %d",&m,&x,&y);
        int *a=(int *)malloc(sizeof(int)*m);
        for(i=0;i<m;i++)
            scanf("%d",a+i);
        int c=0;
        r=x*y;
       int cnt[101]={0};
       for(i=0;i<m;i++)
       {
           for(j=a[i]-r;j<=a[i]+r;j++)
              if(j>=1 && j<=100)
                 cnt[j]=1;
       }
       for(i=1;i<=100;i++)
        if(!cnt[i])
           c++;
       printf("%d\n",c);
    }
}
