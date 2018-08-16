#include<stdio.h>
#include<math.h>
#define pi acos(-1.0)
 
int main()
{
    int i,n;
   
    double r, ans,a_sq,a_c;
    scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%lf",&r);
 
            double t=(r+r);
            double fl=.000000001;
            a_sq=(t*t);
            a_c=(pi*r*r);
 
            ans=a_sq-a_c+fl;
 
 
            printf("Case %d: %.2lf\n",i,ans);
 
        }
    return 0;
 
}
