#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    double a,b,c,d;
    for(int k=1;k<=test;k++)
    {
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        double x=fabs(a-c);
        double s=(x+b+d)/2.00;
        s=fabs(s*(s-x)*(s-b)*(s-d));
        double tri=sqrt(s);
        double h=(2*tri*1.00/x);
 
        double area=((a+c)*h)/2.00;
 
        printf("Case %d: %.10lf\n",k,area);
    }
 
    return 0;
}