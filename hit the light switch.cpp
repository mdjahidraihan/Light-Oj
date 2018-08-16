#include<cstdio>
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
#define mx 100000
#define white 0
#define black 2
#define grey 1
vector<int >edge[mx], transpose[mx];
int color[mx], visited[mx], trans_color[mx];
int component;
vector<int>top_vec, sc_component;

//minimum number of manual switch flip

void dfs(int p)
{
    color[p] = grey;
    for (int i = 0; i < edge[p].size(); i++)
    {
        int v = edge[p][i];
        if (color[v] == white)
        {
            dfs(v);
        }
    }
    color[p] = black;
}
//topological sort function

void top_sort(int p)
{
    visited[p] = grey;
    for (int i = 0; i < edge[p].size(); i++)
    {
        int v = edge[p][i];
        if (visited[v] == white)
        {
            top_sort(v);
        }
    }
    visited[p] = black;
    top_vec.push_back(p);
}
void scc(int p)
{
    trans_color[p] = grey;
    for (int i = 0; i < transpose[p].size(); i++)
    {
        int v = transpose[p][i];
        if (trans_color[v] == white)
        {
            scc(v);
        }
    }
    trans_color[p] = black;
    sc_component.push_back(p);

}
void print()
{
    cout << "Topological sort" << '\n';
    for (int i = top_vec.size() - 1; i >= 0; i--)
        cout << top_vec[i] << " ";
    cout << "\nTopological sort done" << '\n';
    cout << "SCC " << '\n';
    for (int i = 0; i < sc_component.size(); i++)
        cout << sc_component[i] << " ";
    cout << "\nSCC done " << '\n';
}
int main()
{
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        int n, m;
        cin >> n >> m;
        for (int j = 0; j <= mx; j++)
        {
            color[j] = white;
            trans_color[j] = white;
            visited[j] = white;
        }
        for (int j = 0; j < m; j++)
        {

            int x, y;
            cin >> x >> y;
            edge[x].push_back(y);
            transpose[y].push_back(x);
        }
        //topological sort

        for (int nd = 1; nd <= n; nd++)
        {
            if (visited[nd] == white)
            {
                top_sort(nd);
            }
        }
        //topological sort done

        //find the  scc
        for (int nd = top_vec.size() - 1; nd >= 0; nd--)
        {
            int node = top_vec[nd];

            if (trans_color[node] == 0)
            {
                scc(node);
            }
        }
        //scc done
        //print();
        component = 0;
        for (int nd = 0; nd <sc_component.size(); nd++)
        {
            int node = sc_component[nd];
            if (color[node] == white)
            {
                component++;
                dfs(node);
            }
        }
        printf("Case %d: %d\n", i, component);
        top_vec.clear();
        sc_component.clear();
        for (int j = 0; j <= mx; j++)
        {
            edge[j].clear();
            transpose[j].clear();
        }
    }

    return 0;
}
