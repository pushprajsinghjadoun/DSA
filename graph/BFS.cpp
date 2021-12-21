#include <bits/stdc++.h>
#define logarr(arr,a,b)	for(int z=(a);z<=(b);z++) cout<<(arr[z])<<" ";cout<<endl;	
using namespace std;

vector<vector<int>> graph;

void addEdge(vector<int> g[],int u,int v)
{
	g[u].push_back(v);
	g[v].push_back(u);
	
	
}
void bfs(vector<int> g[],int s,int dest)
{
	queue<int> q;
	q.push(s);
	vector<bool> visited(dest,false);
	visited[s]=true;
	while (!q.empty())
	{
		int node = q.front();
		q.pop();
		cout<<node<<" ";
		for(auto i = g[node].begin(); i != g[node].end(); i++)
		{
			if(!visited[*i])
			{
				q.push(*i);
				visited[*i]=true;

			}
		}
	}
	
}

void dfshelper(int src,vector<int> g[],vector<bool> &visit)
{
	visit[src]=true;
	cout<<src<<" ";
	for(auto i = g[src].begin(); i != g[src].end(); i++)
	{
		if(!visit[*i])
		{
			dfshelper(*i,g,visit);
		}
	}
}

void dfs(int src,vector<int> g[],int dest)
{
	vector<bool> visit(dest,false);
	dfshelper(src,g,visit);
}

void topohelper(int node,vector<bool> &visit,stack<int> &s,vector<int> g[])
{
	visit[node]=true;
	for(auto i= g[node].begin();i!=g[node].end();i++)
	{
		if(!visit[*i])
		{
			topohelper(*i,visit,s,g);
		}
	}
	s.push(node);
}


void topo(vector<int> g[],int n)
{
	stack<int> s;
	vector<bool> visit(n,false);

	for(int i=0;i<n;i++)
	{
		if(visit[i]==false)
		{
			topohelper(i,visit,s,g);
		}
	}
	while (!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	
}

bool cyclehelper(int node, vector<int> g[],int p, vector<bool>&visit)
{
	visit[node] = true;
	for(auto i = g[node].begin();i!=g[node].end();i++)
	{
		if(!visit[*i])
		{
			if(cyclehelper(*i,g,node,visit))
			{
				return true;
			}
		}else if(*i!=p)
		{
			return true;
		}
		
	}
	return false;
}

bool cycle(int n,vector<int> g[])
{
	vector<bool> visit(n,false);
	
	for(int i=0;i<n;i++)
	{
		if(!visit[i])
		{
			if(cyclehelper(i,g,-1,visit))
			{
				return true;
			}
		}
	}
	return false;
}

int main()
{
	
	int n =7;//4
	
	vector <int> g[n];
	
	addEdge(g, 0, 1);
	addEdge(g, 0, 2);
	addEdge(g, 1, 3);
	addEdge(g, 1, 4);
	addEdge(g, 2, 5);
	addEdge(g, 2, 6);
	// addEdge(g,0, 1);
    // addEdge(g,0, 2);
    // addEdge(g,1, 2);
    // addEdge(g,2, 0);
    // addEdge(g,2, 3);
    // addEdge(g,3, 3);
    // bfs(g,2,7);
	// cout<<endl;
	// dfs(2,g,7);
	// cout<<endl;
	// topo(g,n);
	cout<<cycle(n,g);
	
	return 0;
}
