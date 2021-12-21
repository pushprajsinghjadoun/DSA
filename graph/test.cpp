#include <bits/stdc++.h>
using namespace std;

struct node {
    int u;
    int v;
    int wt; 
    node(int first, int second, int weight) {
        u = first;
        v = second;
        wt = weight;
    }
};

int main()
{
    int N,m;
    cin >> N >> m;
    vector<node> edges; 
    for(int i = 0;i<m;i++) {
        int u, v, wt;
        cin >> u >> v >> wt; 
        edges.push_back(node(u, v, wt)); 
    }

    int src;
    cin >> src; 

    int inf = INT_MAX;
    vector<int> dist(N,inf);

    for(int i =0;i<N-1;i++)
    {
        for(auto i : edges)
        {
            if(dist[i.u] + i.wt<dist[i.v])
            {
                dist[i.v] = dist[i.u] + i.wt;
            }
        }
    }

    int f = 0;
    for(auto i :edges)
    {
        if(dist[i.u]+i.wt<dist[i.v])
        {
            f = 1;
            break;
        }
    }
    if(!f)
    {
        for(int i=0;i<N;i++)
        {
            cout<<i<<" "<<dist[i];
        }
    }
    return 0;
}