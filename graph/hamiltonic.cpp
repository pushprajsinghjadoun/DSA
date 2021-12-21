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
void printpath(vector<int> &path)
{
    for(auto i : path)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

void ham(int s,vector<int> g[],vector<int> &path,vector<bool> visit,int n)
{
    if(path.size()==n)
    {
        printpath(path);
        return;
    }
    for(int w:g[s])
    {
        visit[w]=true;
        path.push_back(w);
        if(visit[w]==true)
        {
            ham(w,g,path,visit,n);
        }
        visit[w]=false;
        path.pop_back();
    }
}


int main()
{
   int n =4;//4
	
	vector <int> g[n];
	
	addEdge(g, 0, 1);
	addEdge(g, 0, 2);
	addEdge(g, 0, 3);
	addEdge(g, 1, 2);
	addEdge(g, 1, 3);
    addEdge(g,2,3);
    int start =0;
	vector<int> paths;
    paths.push_back(start);
    vector<bool> visit(n,false);
    visit[start] =true;
    
    ham(start,g,paths,visit,n);
    return 0;
   
}