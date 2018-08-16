#include<stdio.h>
#include<string.h>
int main()
{
    long long i,j,k,l,n,t;
    char a[20],b[20];
    while(scanf("%lld",&t)==1)
    {
        char ch=getchar();
        for(i=1;i<=t;i++)
        {
            gets(a);
 
               int m=atoi(a);
               if(m<=9&&m>=0)
                {
                    printf("Case %lld: Yes\n",i);
                    continue;
                }
            else
            {
 
            l=strlen(a);
            for(j=0,k=l-1;k>=0;j++,k--)
            {
                b[j]=a[k];
            }
            b[j]='\0';
            if(!(strcmp(a,b)))
                printf("Case %lld: Yes\n",i);
            else
                printf("Case %lld: No\n",i);
            }
 
        }
    }
    return 0;
}