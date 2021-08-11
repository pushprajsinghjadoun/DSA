#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> graph;

void addEdge(vector<int> g[],int u,int v)
{
	g[u].push_back(v);
	g[v].push_back(u);
	
	
}
bool iscyclichelper(int v,vector<bool> &visit,vector<int> g[],int parent)
{
    visit[v]=true;
    for(auto x :  g[v])
    {
        if(!visit[x])
        {
           if( iscyclichelper(x,visit,g,v))
           {
               return true;
           }
        }else if(x!=parent) return true;
    }
    return false;
}
bool iscyclic(int n,vector<int> g[])
{
    vector<bool> visit(n,false);
    for(int i=0;i<n;i++)
    {
        if(!visit[i])
        {
            bool f = iscyclichelper(i,visit,g,-1);
            if(f) return true;
        }
    }
    return false;
}
bool istree(int n,vector<int> g[])
{
    vector<bool> visit(n,false);
    if(iscyclichelper(0,visit,g,-1))
    {
        return false;
    }

    for(int i=0;i<n;i++)
    {
        if(!visit[i])
        {
            return false;
        }
    }
    return false;
}


int main()
{
   int n =5;//4
	
	vector <int> g[n];
	
	addEdge(g, 1, 0);
	addEdge(g, 0, 2);
	addEdge(g, 2, 1);
	addEdge(g, 0, 3);
	addEdge(g, 3, 4);
	
     if(istree(n,g))
    {
        cout<<"Graph contain cycle";
    }else{
        cout<<"Graph does not contain cycle";
    }
    return 0;
   
}