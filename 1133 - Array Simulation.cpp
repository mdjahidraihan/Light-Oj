#include<stdio.h>
#include<string.h>
long long a[110];
long long  n;
void pluss(long long  p)
{
    int i;
    for(i=0;i<n;i++)
        a[i]+=p;
}
void multii(long long p)
{
    int i;
    for(i=0;i<n;i++)
        a[i]*=p;
}
void dividee(long long p)
{
    int i;
    for(i=0;i<n;i++)
        a[i]=a[i]/p;
}
void reversee()
{
    long long i;
    for(i=0;i<n/2;i++)
    {
        int  t=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=t;
    }
 
}
void swapp (int p,int q)
{
    int i;
    int t=a[p];
    a[p]=a[q];
    a[q]=t;
}
int main()
{
    long long i,j,k,l,m,t;
    scanf("%lld",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%lld%lld",&n,&m);
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        long long t1,t2;
        for(i=0;i<m;i++)
        {
            char ch;
            ch=getchar();
             ch=getchar();
 
            if(ch=='S')
            {
                scanf("%lld",&t1);
 
                pluss(t1);
            }
            else if(ch=='M')
            {
                scanf("%lld",&t1);
                multii(t1);
            }
 
            else if(ch=='D')
            {
                scanf("%lld",&t1);
                dividee(t1);
            }
            else if(ch=='R')
                reversee();
            else
            {
                scanf("%lld%lld",&t1,&t2);
 
                swapp(t1,t2);
            }
        }
        printf("Case %lld:\n",k);
 
        for(j=0;j<n;j++)
        {
            if(j==n-1)
            {
                printf("%lld",a[j]);
                break;
            }
            else
            printf("%lld ",a[j]);
 
        }
            printf("\n");
    }
 
    return 0;
}
 