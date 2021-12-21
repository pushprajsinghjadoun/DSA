#include <bits/stdc++.h>
#define logarr(arr,a,b)	for(int z=(a);z<=(b);z++) cout<<(arr[z])<<" ";cout<<endl;	
using namespace std;

vector<vector<int>> graph;

void addEdge(vector<int> g[],int u,int v)
{
	g[u].push_back(v);
	g[v].push_back(u);
	
	
}

void sh(vector<int> g[],int s,int n)
{
    int dist[n];
    for(int i=0;i<n;i++) dist[i]=INT_MAX;
    queue<int> q;
    dist[s]=0;
    q.push(s);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for(auto i: g[node])
        {
            if(dist[node]+1<dist[i])
            {
                dist[i]=dist[node]+1;
                q.push(i);
                
            }
        }
        
    }
 
    
}

int main()
{
	
	int n =8;//4
	
	vector <int> g[n];
	
	addEdge(g, 0, 1);
    addEdge(g, 0, 3);
    addEdge(g, 1, 2);
    addEdge(g, 3, 4);
    addEdge(g, 3, 7);
    addEdge(g, 4, 5);
    addEdge(g, 4, 6);
    addEdge(g, 4, 7);
    addEdge(g, 5, 6);
    addEdge(g, 6, 7);

	sh(g,0,7);
	return 0;
}
