#include <bits/stdc++.h>
using namespace std;


void addEdge(vector<int> g[],int u,int v)
{
	g[u].push_back(v);
	g[v].push_back(u);
	
	
}
bool isValid(vector<int> graph[], vector<int>& color, int c, int v)
{
    for (auto u: graph[v])
    {
        if (color[u] == c)
           return false;
    }
    return true;
}

bool graphColoring(vector<int> graph[], vector<int> color, int m, int v, int V)
{
    if (v == V)
        return true;
    for (int c=1; c <=m; c++)
    {
        if (isValid(graph, color, c, v))
        {
            color[v] = c;
            if (graphColoring(graph, color, m, v+1, V))
                return true;
            color[v] = 0;
        }
    }
    return false;
}


int main()
{
   int n =5;//4
	
	vector <int> g[n];
	vector<int> color(n, 0);
	addEdge(g, 1, 0);
	addEdge(g, 0, 2);
	addEdge(g, 2, 1);
	addEdge(g, 0, 3);
	addEdge(g, 3, 4);
	
     int m = 1;
    cout << "Is coloring possible using 1 color: " << graphColoring(g, color, m, 0, n) << endl;
    m = 2;
    cout << "Is coloring possible using 2 colors: " << graphColoring(g, color, m, 0, n) << endl;
    m = 3;
    cout << "Is coloring possible using 3 colors: " << graphColoring(g, color, m, 0, n) << endl;
    return 0;
   
}