
#include <bits/stdc++.h>
using namespace std;



void DFS(vector<vector<int>> &M,int i,int j,int ROW,int COL,int &temp)
{
	
	if(i>(ROW-1) || j>(COL-1) || i<0 || j<0 || M[i][j]!=1)
	{
		return;
	}
	if(M[i][j]==1)
			{
				M[i][j]=0;
				temp++;
                // cout<<temp<<endl;
				DFS(M,i,j+1,ROW,COL,temp);
				DFS(M,i,j-1,ROW,COL,temp);
				DFS(M,i-1,j+1,ROW,COL,temp);
				DFS(M,i-1,j-1,ROW,COL,temp);
				DFS(M,i+1,j-1,ROW,COL,temp);
				DFS(M,i+1,j+1,ROW,COL,temp);
				DFS(M,i+1,j,ROW,COL,temp);
				DFS(M,i-1,j,ROW,COL,temp);
			}
			
}
 
 
int countIslands(vector<vector<int>> &M)
{
    int ROW = M.size();
	int COL = M[0].size();
	int counter =0;
	for(int i=0;i<ROW;i++)
	{
		for(int j=0;j<COL;j++)
		{
			if(M[i][j]==1)
			{
				// cout<<i<<j<<" "<<"___"<<M[i][j]<<" "<<M[0][0]<<endl;
				M[i][j]=0;
				counter++;
				int temp =1;
				
				DFS(M,i,j+1,ROW,COL,temp);
				DFS(M,i,j-1,ROW,COL,temp);
				DFS(M,i-1,j+1,ROW,COL,temp);
				DFS(M,i-1,j-1,ROW,COL,temp);
				DFS(M,i+1,j-1,ROW,COL,temp);
				DFS(M,i+1,j+1,ROW,COL,temp);
				DFS(M,i+1,j,ROW,COL,temp);
				DFS(M,i-1,j,ROW,COL,temp);
			}
		}
	}
	return counter;
}
int main()
{
	vector<vector<int>> M;
	M={{1, 1, 0, 0, 0},
       {0, 1, 0, 0, 1},
       {1, 0, 0, 1, 1},
       {0, 0, 1, 1, 0},
       {1, 0, 0, 0, 1}};
	cout<<countIslands(M);
    return 0;
}

