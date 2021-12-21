#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &m, int row,int col, int i, int j, int& count)
{
	if(i<0 || j<0 || i>(row-1) || j>(col-1) || m[i][j]!=1)
	{
		return;
	}
	if(m[i][j]==1)
			{
				m[i][j]=0;
				 count++;
				dfs(m,row,col,i,j+1,count);
				dfs(m,row,col,i,j-1,count);
				dfs(m,row,col,i+1,j+1,count);
				dfs(m,row,col,i+1,j-1,count);
				dfs(m,row,col,i-1,j+1,count);
				dfs(m,row,col,i-1,j-1,count);
				dfs(m,row,col,i+1,j,count);
				dfs(m,row,col,i-1,j,count);
			}
}

int island(vector<vector<int>> &m)
{
	int row = m.size();
	int col = m[0].size();
	
    int result = INT_MIN;

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(m[i][j]==1)
			{
                
				m[i][j]=0;
				int count = 1;
				dfs(m,row,col,i,j+1,count);
				dfs(m,row,col,i,j-1,count);
				dfs(m,row,col,i+1,j+1,count);
				dfs(m,row,col,i+1,j-1,count);
				dfs(m,row,col,i-1,j+1,count);
				dfs(m,row,col,i-1,j-1,count);
				dfs(m,row,col,i+1,j,count);
				dfs(m,row,col,i-1,j,count);
                result = max(result, count);
			}
		}
	}
	return result;
}
int main()
{
	vector<vector<int>> M;
	M={{1, 1, 0, 0, 0},
       {0, 1, 0, 0, 1},
       {1, 0, 0, 1, 1},
       {0, 0, 0, 1, 0},
       {1, 0, 0, 0, 0}};
	cout<<island(M);
    return 0;
}
