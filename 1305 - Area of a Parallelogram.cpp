#include<bits/stdc++.h>
using namespace std;
#define mx 35
#define infinity 10000000
int main()
{
    int n,e,test;
    char ch;
    scanf("%d",&test);
    int Ax, Ay, Bx, By, Cx, Cy,Dx,Dy;
    for(int k=1;k<=test;k++)
    {
        scanf("%d%d%d%d%d%d",&Ax,&Ay,&Bx,&By,&Cx,&Cy);
        Dx=Cx-(Bx-Ax);
        int t=Cy-By;
        Dy=t+(Ay);
        int a1,a2,b1,b2;
        a1=Bx-Ax;
        a2=By-Ay;
        b1=Cx-Ax;
        b2=Cy-Ay;
 
        long long area=abs(a1*b2-b1*a2);
        printf("Case %d: %d %d %lld\n",k,Dx,Dy,area);
    }
 
    return 0;
}