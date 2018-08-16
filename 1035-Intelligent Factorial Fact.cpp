#include <cstdio>  
#include <cmath>  
#include <cstring>  
#include <iostream>  
#include <algorithm>  
using namespace std;  
const int maxn=101;  
int vis[maxn],t,prime[maxn];  
int c[maxn][maxn],ans[maxn];  
void init()  
{  
    int i,j,k,n,m;  
    t=0;  
    memset(vis,0,sizeof(vis));  
    memset(c,0,sizeof(c));  
    for(i=2;i<maxn;i++)  
    {  
        if(!vis[i])  
        {  
			prime[t++]=i;
            for(j=i*i;j<maxn;j+=i)  
				 vis[j]=1;  
        }  
    }  
    for(i=2;i<=100;i++)  
    {  
        m=i;  
        n=(int)sqrt(m+0.5);  
        for(j=2;j<=n;j++)  
        {  
            while(m%j==0){c[i][j]++;m/=j;}  
        }  
        if(m>1)  
        c[i][m]++;  
    }  
}  
int main()  
{  
    init();  
    int T,n,tt=0;  
    scanf("%d",&T);  
    while(T--)  
    {  
        int i,j,k;  
        scanf("%d",&n);  
        memset(ans,0,sizeof(ans));  
        for(i=2;i<=n;i++)  
        {  
            for(j=0;j<t;j++)  
            {  
                ans[j]+=c[i][prime[j]];  
            }  
        }  
        printf("Case %d: %d = 2 (%d)",++tt,n,ans[0]);  
        for(i=1;i<t;i++)  
        {  
            if(ans[i]==0)break;  
            printf(" * %d (%d)",prime[i],ans[i]);  
        }  
        printf("\n");  
    }  
    return 0;  
}