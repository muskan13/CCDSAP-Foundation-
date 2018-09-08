#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,j,t;
    char *nrr[100];
    //printf("no. of tests\n");
    scanf("%d",&t);
    while (t--)
    {
        int n,k;
       // printf("input n,p\n");
        scanf("%d %d",&n,&k);
        fflush(stdin);
        for (i=0;i<n;i++)
        {
            nrr[i]=(char *)malloc(sizeof(char)*6);
            scanf("%s",nrr[i]);
        }
         int le[100]={0};
      while(k--)
      {
         int l;
         scanf("%d",&l);
         for(i=0;i<l;i++)
         {
             fflush(stdin);
             char s[6];
             scanf("%s",s);
             for(j=0;j<n;j++)
             {
                 if(strcmp(s,nrr[j])==0)
                    le[j]=1;
             }
         }
      }
       for(i=0;i<n;i++)
       {
           if(le[i])
            printf("YES ");
           else
            printf("NO ");
       }
       printf("\n");
    }
    return 0;
}


