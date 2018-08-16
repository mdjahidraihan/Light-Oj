#include<bits/stdc++.h>
using namespace std;
#define mx 10005
vector<int >g[mx];
int cnt ;
vector<int >bridge[mx];;
int color[mx];
int parent[mx];
int low[mx];
int d[mx];
int tme;
int num_of_children[mx];
int children;
void init(int n) {
	for (int i = 0; i < n; i++)
	{
		color[i] = 0;
		parent[i] = -1;
		low[i] = 1000000;
		d[i] = 1000000;
		num_of_children[i]=0;
	}
	//memset(bridge,false,sizeof(bridge));

}

void dfs(int u, int n)
{
	tme++;
	int children = 0;
	color[u] = 1;
	d[u] = tme;
	for (int i = 0; i < g[u].size(); i++)
	{

		int v = g[u][i];
		if (color[v] == 0)
		{
			children++;
			parent[v] = u;
			dfs(v, n);
			low[u] = min(low[u], low[v]);

			if (low[v] >= d[u])
			{

			}
			if( d[u]<low[v] )
			{
				if(u<v) bridge[u].push_back(v);
				else bridge[v].push_back(u);
				cnt++;
			}

		}
		else if (v != parent[u])
		{
			low[u] = min(low[u], d[v]);
		}
	}
	num_of_children[u] = children;
	color[u] = 2;

}
int main()
{
	int T;
	scanf("%d",&T);
	for(int cases=1;cases<=T;cases++)
	{

		int n;
		scanf("%d",&n);
		tme = 0;
		children = 0;
        init(n);
		if(n==0)
		{
			printf("Case %d:\n",cases);
			printf("0 critical links\n");
			for(int i=0;i<=n;i++)
            {
				g[i].clear();
				bridge[i].clear();
			}
			continue;
		}
		for (int j = 0; j < n; j++)
		{

			int u,times ;
			scanf("%d (%d)",&u,&times);

			for (int i = 0; i < times; i++)
			{
				int x;
				scanf("%d",&x);
				g[x].push_back(u);
				g[u].push_back(x);
			}
		}
		printf("Case %d:\n",cases);

		cnt= 0;
		for(int i=0;i<n;i++)
		{
			if(color[i]==0)
				dfs(i,n);
		}
		printf("%d critical links\n",cnt);
		for(int i=0;i<n;i++)
			for(int k=0;k<bridge[i].size();k++)
				printf("%d - %d\n",i,bridge[i][k]);

		for(int i=0;i<=n;i++){
			g[i].clear();
			bridge[i].clear();
		}
	}
	return 0;
}
