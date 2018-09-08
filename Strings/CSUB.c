#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int t,i,cnt;
    scanf("%lld",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        fflush(stdin);
        char *s=(char*)malloc(n+1);
        scanf("%s",s);
        i=0;
        cnt=0;
        while(s[i])
            if(s[i++]=='1')
               cnt++;
        //printf("%d ",cnt);
        printf("%lld\n",cnt*(cnt+1)/2);
    }
}
