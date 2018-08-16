#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,n,p=1;
    scanf("%d",&k);
    while(k--)
    {
    scanf("%d",&n);
    l=0;
    while(n)
    {
        i=n&1;
        if(i==1)l++;
        n=n>>1;
    }
    if(l&1==1)printf("Case %d: odd\n",p);
    else
        printf("Case %d: even\n",p);
    p++;
    }
    return 0;
}