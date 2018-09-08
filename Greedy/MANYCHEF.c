#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
    int t,i;
    scanf("%d\n",&t);
    //printf("\n");
    //getchar();
    while(t--)
    {
        char *s;
        fflush(stdin);
        s=(char *)malloc(2014);
        gets(s);
        int len=strlen(s);
        for(i=len-4;i>=0;)
        {
            if((s[i]=='C' || s[i]=='?') && (s[i+1]=='H' || s[i+1]=='?') && (s[i+2]=='E' || s[i+2]=='?') && (s[i+3]=='F' || s[i+3]=='?') && (i+3<len))
            {
                strncpy(&s[i],"CHEF",4);
                i=i-3;
            }
            else if(s[i+3]=='?')
                    s[i+3]='A';
            i--;
            //printf("s2:%s i:%d\n",s,i);
        }
        for(i=0;i<4;i++)
            if(s[i]=='?')
                s[i]='A';
        puts(s);
        free(s);
    }
}
