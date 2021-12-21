#include <bits/stdc++.h>
using namespace std;
#define ump unordered_map

class Graph{
    public:
    int v;
    list<int> *adj;
    Graph(int n)
    {
        this->v=n;
        this->adj = new list<int>[this->v];
    }
    void add_edge(int u,int v,bool bidir=true)
    {
        adj[u].push_back(v);
        if(bidir)
        {
            adj[v].push_back(u);
        }
    }
    void dfshelper(int src,ump<int,int> &visited)
    {
        visited[src]=true;
        cout<<src<<" ";
        for(auto neighbour: this->adj[src])
        {
            if(not visited[neighbour])
            {
                dfshelper(neighbour,visited);
            }
        }
    }
    void dfs(int src)
    {
        ump<int,int> visited;
        dfshelper(src,visited);
    }
    int connected()
    {
        ump<int,int> visited;
        int result = 0;
        for(int i=0;i<=v-1;i++)
        {
            if(not visited[i])
            {
                dfshelper(i,visited);
                
                result++;
            }
        }
        return result;
    }
   
};

int main()
{
    Graph g1(6);
    g1.add_edge(0,1);
    g1.add_edge(2,1);
    g1.add_edge(3,2);
    g1.add_edge(4,5);
    cout<<g1.connected();
    return 0;
}