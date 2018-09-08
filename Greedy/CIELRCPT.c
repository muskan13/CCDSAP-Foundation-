#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int min_menu(int p, int *a,int n)
{
    if(n==-1 || p==0)
        return 0;
    if(a[n]>p)
        min_menu(p,a,--n);
    else
        {
            return 1+min_menu(p-a[n],a,n);
        }
}
main()
{
    int t,i;
    scanf("%d",&t);
    int *m=(int *)malloc(sizeof(int)*12);
    for(i=0;i<12;i++)
        m[i]=pow(2,i);
    while(t--)
    {
        int p;
        scanf("%d",&p);
        printf("%d\n",min_menu(p,m,11));
    }
}
