#include <bits/stdc++.h>
using namespace std;


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
    return true;
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
        cout<<"Graph is Tree";
    }else{
        cout<<"Graph is not a tree";
    }
    return 0;
   
}