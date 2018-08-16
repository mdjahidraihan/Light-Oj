#include<algorithm>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
#define eps .0000001
#define mx 10009
double ab,ac,bc,ratio;
double ae,ec,de,bd,x;
void find_ae()
{
	ae = (double)(ac*x/ab);
}
void find_ec()
{
	ec=ac-ae;
}
void find_bd()
{
	bd=ab-x;
}
void find_de()
{
	de=(double)(bc*x/ab);
}
double area_trap()
{
	double t= (bc+de)*sqrt((bc+bd-de+ec)*(bc-bd-de+ec)*(bc+bd-de-ec)*(-bc+bd+de+ec));
	t=t/(4*(bc-de));
	return t;
}
double area_tri()
{
	double s=(x+de+ae)/2.0;
	double area = sqrt(s*(s-x)*(s-de)*(s-ae));
	return area;
}
int  main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int T;
	scanf("%d",&T);
	for(int cases=1;cases<=T;cases++)
	{
		cin>>ab>>ac>>bc>>ratio;
		double high,low;
		high = ab;
		
		low=0;
		while(true)
		{
			x=(low+high)/2;
			find_ae();find_ec();find_bd();find_de();
			//cout<<ae<<" "<<" "<< ec<<"  "<<bd<<"  "<<de<<endl;
			double myratio = area_tri()/area_trap();
			if(fabs(ratio-myratio)<eps)
				break;
			else if(myratio<ratio)
			{
				low=x;

			}
			else if(myratio>ratio)
				high = x;
		}
		printf("Case %d: %.9lf\n",cases,x);
	}    return 0;
}
