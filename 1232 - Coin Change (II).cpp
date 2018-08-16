#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
#define  MOD 100000007
int main()
{
	long long way[10001];
	long long coin[101];

	int n,T;
	scanf("%d",&T);
	for(int cases=1;cases<=T;cases++)
	{
		int k,n;
		scanf("%d%d",&n,&k);
		for(int i=1;i<=n;i++)
			scanf("%lld",&coin[i]);
        //sort(coin+1,coin+n+1);
		memset(way,0,sizeof(way));
		way[0]=1;
		for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=k;j++)
                if(j>=coin[i])
                    way[j]+=(way[j-coin[i]])%MOD;
        }
		printf("Case %d: %lld\n",cases,way[k]%MOD);

	}
	return 0;
}
