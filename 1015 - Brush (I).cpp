#include<stdio.h>
int a[1010];
int main()
{
    int i,j,k,l,n,t;
    while(scanf("%d",&t)==1)
    {
 
        for(j=1;j<=t;j++){
        long long  cnt=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>=0) cnt+=a[i];
 
 
        }
        printf("Case %d: %lld\n",j,cnt);
        }
    }
    return 0;
}
 