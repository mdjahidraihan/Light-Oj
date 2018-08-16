#include<stdio.h>
#include<string.h>
#include<math.h>
int a[1000],b[1000],r[1000];
 
int main()
{
    int i,j,k,l,n,x1,x2,y1,y2;
    while(scanf("%d",&n)==1)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
            scanf("%d",&l);
            for(i=0;i<l;i++)
            {
                scanf("%d%d",&a[i],&b[i]);
 
            }
            for(i=0;i<l;i++)
            {
                if((a[i]>x1&&a[i]<x2)&&(b[i]>y1&&b[i]<y2))
                {
                    r[i]=1;
                }
                else
                    r[i]=0;
            }
            printf("Case %d:\n",j);
            for(i=0;i<l;i++)
            {
                if(r[i]==1)
                    printf("Yes\n");
                else
                printf("No\n");
 
            }
        }
    }
    return 0;
}
 