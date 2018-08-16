
//problem
#include<cstdio>
#include<cstring>
#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
#define mx 210
#define pii pair<int,int>

char w[mx][mx];
int d[mx][mx],cost[mx][mx];
int row,col;
int fx[]= {+1,-1,0,0};
int fy[]={0,0,+1,-1};
int x,y;
bool flag;
vector<pii>fr;
void fire()
{
    for(int i=0;i<fr.size();i++)
    {
        int x=fr[i].first;
        int y = fr[i].second;
        for(int k=0;k<4;k++)
        {
            int tx = fx[k]+x;
            int ty = fy[k]+y;
            if(tx<row&&tx>=0&&ty<col&&ty>=0&&w[tx][ty]!='#'&&w[tx][ty]!='F'&&w[tx][ty]!='f')
            {
                w[tx][ty] = 'f';
                fr.push_back(pii(tx,ty));

            }
        }
    }
}

void bfs(int sx,int sy)
{
    int vis[mx][mx];
    memset(vis,0,sizeof vis);
    flag=false;
    vis[sx][sy]=1;
    d[sx][sy]=0;
    queue<pii>q;
    q.push(pii(sx,sy));
    while(!q.empty())
    {
        pii top = q.front();
        q.pop();
        int ux= top.first;
        int uy = top.second;

        for(int i=0;i<4;i++)
        {

            int tx= ux+fx[i];
            int ty = uy+fy[i];
            if(tx<row&&tx>=0&&ty<col&&ty>=0&&w[tx][ty]!='#'&&w[tx][ty]!='F'&&w[tx][ty]!='f'&&!vis[tx][ty])
            {
                vis[tx][ty] = 1;
                d[tx][ty] =d[ux][uy]+1;

                if(tx==row-1||ty==col-1||tx==0||ty==0)
                {
                    x=tx;y=ty;flag=true;
                    return;
                }
                q.push(pii(tx,ty));

            }
        }
        fire();
    }
}
int main()
{
    int T;
    cin >> T;
    for (int cases = 1; cases <= T; cases++)
    {

        scanf("%d %d",&row,&col);

        for (int i = 0; i<row; i++)
        {
            cin>>w[i];
        }
        int sx,sy,fr_x,fr_y;
        for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
        {
            if(w[i][j]=='J')
            {
                sx = i;sy=j;
            }
            if(w[i][j]=='F')
            {
                fr.push_back(pii(i,j));
            }
        }
        if(sx==row-1||sy==col-1||sx==0||sy==0)
        {
            printf("Case %d: 1\n", cases);
            continue;
        }
        bfs(sx,sy);
        if(flag==false)
            printf("Case %d: IMPOSSIBLE\n", cases);
        else
        printf("Case %d: %d\n", cases, d[x][y]+1);
        fr.clear();
    }
    return 0;
}

