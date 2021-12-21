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


int f = 0;

void dfs(int s,int p,int col,vector<int>g[],vector<int> &visit)
{
    visit[s]=col;
    for(auto i = g[s].begin(); i != g[s].end(); i++)
	{
		if(!visit[*i])
		{
			dfs(*i,s,col-3,g,visit);
		}
        else if(*i!=p and col==visit[*i])
        {
            f=1;
            break;
        }
	}
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
	vector<int> vist(n,-1);
    int f = 0;
	dfs(0,0,1,g,vist);
	cout<<f;
	return 0;
}
