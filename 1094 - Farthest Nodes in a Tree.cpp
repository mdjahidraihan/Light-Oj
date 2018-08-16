#include<cstdio>
#include<cstring>
#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

#define mx 30008
#define white 0
#define black 2
#define grey 1

vector<int>edge[mx], cost[mx];
int  d[mx],dist[mx];
int bfs(int src)
{
    queue<int>q;
    q.push(src);
    int visited[mx] ={0};
    int f_node;
    int d_max=-100;
    visited[src] = 1;
    d[src] = 0;
    while (!q.empty())
    {
        int u = q.front(); q.pop();
        int ucost = d[u];
        for (int i = 0; i < edge[u].size(); i++)
        {
            int v = edge[u][i], vcost = cost[u][i] + ucost;
            if (!visited[v])
            {
                d[v] = vcost;
                if(d[v]>d_max)
                {
                    d_max=d[v];
                    f_node = v;

                }
                visited[v] = 1;
                q.push(v);
            }
        }
    }
    return f_node;
}
int bfs(int source, int destination)
{
    int d[100];
    int vis[mx]= {0};vis[source] = 1;
    queue<int> q; q.push( source );
    dist[ source ] = 0;
       while( !q.empty() )
       {
          int u = q.front();
          q.pop();
          int ucost = dist[ u ];
          for(int i=0; i<edge[u].size(); i++)
          {
            int v = edge[u][i], vcost = cost[ u ][i] + ucost;
            if( !vis[v])
            {
                    dist[v] = vcost; q.push( v );
                    vis[v]=1;
            }
         }
      }
      return dist[ destination ];
}
int main()
{
    int T;
    cin >> T;
    for (int cases = 1; cases <= T; cases++)
    {
        int n;
        cin >> n;
        for (int i = 0; i<n - 1; i++)
        {
            int x, y, w;

            cin >> x >> y >> w;
            edge[x].push_back(y);
            edge[y].push_back(x);
            cost[x].push_back(w);
            cost[y].push_back(w);
        }
        int src = bfs(0);
        memset(d,0,sizeof(int));
        int f_distance;
        int dest = bfs(src);
        f_distance = bfs(dest,src);

        printf("Case %d: %d\n", cases, f_distance);
        for (int i = 0; i <= mx; i++)
        {
            edge[i].clear();
            cost[i].clear();
        }
    }
    return 0;
}

