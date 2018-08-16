#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
#define c_mx 51
#define am_mx 1001
int val[c_mx];
int make,n;
int dp[am_mx][c_mx];
int cnt;
int a[c_mx],c[c_mx];
const int MOD=100000007;

int call(int amount,int idx)
{
        if(idx>n)
        {
                if(amount==make) return 1;
                return 0;
        }

        if(amount>make) return 0;
        if(amount==make) return 1;
        if(dp[amount][idx]!=-1) return dp[amount][idx];
        int ret=0;

        for(int take=1;take<=c[idx];take++)
        {
            if(amount+a[idx]*take<=make)
                ret+=call(amount+a[idx]*take,idx+1)%MOD;
                else break;
        }
        ret+=call(amount,idx+1)%MOD;
        return dp[amount][idx]=ret%MOD;

}
void mem()
{
	for(int i=0;i<c_mx;i++)
		for(int j=0;j<am_mx;j++)
			dp[i][j] = -1;
}
void input()
{
	scanf("%d%d",&n,&make);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)
		scanf("%d",&c[i]);
}
int main()
{

	int T;
	scanf("%d",&T);
	
	for(int cases=1;cases<=T;cases++)
	{
		//mem();
		memset(dp,-1,sizeof(dp));
		input();
		int t = call(0,1)%MOD;
		printf("Case %d: %d\n",cases,t);
	}
	return 0;
}