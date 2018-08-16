#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
double h1,h2,w;
double x,y,c;
#define eps .00000001

int main()
{
    int T;
    scanf("%d",&T);
    for(int cases=1;cases<=T;cases++)
    {

		cin>>x>>y>>c;
		double m =min(x,y);
		double high,low;
		low=0;high=m;
		double  mid;
		while(true)
		{
		    mid = (high+low)/(2.0);
			double h1=sqrt((x*x)-(mid*mid));
			double h2=sqrt((y*y)-(mid*mid));

			double c1 = (h1*h2)/(h1+h2);
			//cout<<c1<<" "<<mid<<" ";
			if(fabs(c1-c)<=eps)
			{
				break;
			}
			else if(c1<c)
			{
				high = mid;
			}
			else
			{
				low=mid;
			}

		}
		printf("Case %d: %.8lf\n",cases,mid);
    }
    return 0;
}
