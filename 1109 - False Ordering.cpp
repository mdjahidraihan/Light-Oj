#include<cstdio>
#include<algorithm>
#include<cstdlib>
#include<iostream>
using namespace std;
#define mx 1005
struct dv{
	int cnt;
	int num;
}ar[mx];
bool cmp(dv a,dv b)
{
	if(a.cnt == b.cnt) return  a.num > b.num;
    return a.cnt < b.cnt;
}
void find_div(int x)
{
	for(int i=1;i<=x;i++)
	{
		ar[i].num = i;
		int t=i;
		int cn = 0;
		for(int j=1;j<=t;j++)
		{
			if((i%j)==0)
				cn++;
		}
		ar[i].cnt = cn;

	}

}
int main()
{
	find_div(1000);
	sort(ar+1,ar+1000+1,cmp);
	int T;
	scanf("%d",&T);

	for(int cases =1;cases<=T;cases++)
	{
		int num;
		scanf("%d",&num);
		printf("Case %d: %d\n",cases,ar[num].num);
	}
	return 0;
}
