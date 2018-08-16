#include<stdio.h>
int main()
{
    int i,j,l,n,m;
    scanf("%d",&l);
    for(i=1;i<=l;i++)
    {
        scanf("%d%d",&m,&n);
        printf("Case %d: %d\n",i,m+n);
 
    }
    return 0;
}