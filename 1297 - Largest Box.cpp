
#include<cstdio>
#include<cstring>
#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
#define mx 210
#define eps .0000001
double l,w;
double volume(double x)
{

    double   v=  x *(l-2*x)*(w-2*x);
    return v;
}
double derivative()
{
    double x= ((l+w)-sqrt((l*l)-(l*w)+(w*w)))/6.0;
    return x;

}
int main()
{

    int T;
    scanf("%d",&T);
    for(int cases = 1; cases <= T; cases++)
    {

        scanf("%lf%lf",&l,&w);
        double x =derivative();
        double vol = volume(x)+eps;
        printf("Case %d: %.9lf\n",cases,vol);

    }
    return 0;
}
