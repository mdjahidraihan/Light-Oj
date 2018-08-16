#include<stdio.h>
int main()
{
    int i,j,k,l,n,m;
    scanf("%d",&l);
    for(j=1;j<=l;j++){
     int cnt=0;
    scanf("%d%d",&n,&m);
    if(n>m)
    {
        cnt=n-m;
        m=n;
    }
    int time=(m*4)+19+(cnt*4);
    printf("Case %d: %d\n",j,time);
    }
    return 0;
}
 