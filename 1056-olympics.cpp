#include<algorithm>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
#define eps .000000001
#define mx 10009
int a,b;
double x;

int  main()
{
	int T;
	double  L,W;
	scanf("%d",&T);
	for(int cases=1;cases<=T;cases++)
	{
		scanf("%d : %d",&a,&b);
		double high,low;

		double lo,hi,half_l,half_w,r,angle,len,arc;
		lo = 0;
		hi = 400;
		while(fabs(lo-hi)>eps){
			L = (hi+lo)/2.0;

			half_l = L/2.0;
			W = b*L/a;
			half_w = W/2.0;
			arc = (200-L)/2.0;
			r = sqrt((half_l)*(half_l)+(half_w)*(half_w));
			angle = acos(half_l/r);
			len = r*angle;
			if(len>arc)hi=L;
			else lo = L;
		}
		printf("Case %d: %.9lf %.9lf\n",cases,L,W);
	}   
	return 0;
}
