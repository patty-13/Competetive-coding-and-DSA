// 7. Find whether path exist 
// Medium Accuracy: 51.18% Submissions: 21674 Points: 4
// Given a grid of size n*n filled with 0, 1, 2, 3. Check whether there is a path possible from the source to destination. You can traverse up, down, right and left.
// The description of cells is as follows:

// A value of cell 1 means Source.
// A value of cell 2 means Destination.
// A value of cell 3 means Blank cell.
// A value of cell 0 means Wall.
// Note: There are only a single source and a single destination.

// Your Task:
// You don't need to read or print anything. Your task is to complete the function is_Possible() which takes the grid as input parameter and returns boolean value true if there is a path otherwise returns false.
 

// Expected Time Complexity: O(n2)
// Expected Auxiliary Space: O(n2)
 

// Constraints:
// 1 ≤ n ≤ 500

class Solution{
public:
    void dfs(vector <vector <int>> &M,int x,int y,vector <vector <bool>>& vis,int n)
    {
        if(x>=n || x<0 || y>=n || y<0|| vis[x][y]==true || M[x][y]==0)
        return;
        vis[x][y]=true;
        dfs(M,x+1,y,vis,n);
        dfs(M,x-1,y,vis,n);
        dfs(M,x,y+1,vis,n);
        dfs(M,x,y-1,vis,n);
    }
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        int n = grid[0].size();
        vector <vector <bool>> vis(n,vector <bool>(n,false));
        int a,b,dx,dy;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    a=i;b=j;
                }
                else if(grid[i][j]==2)
                {
                    dx=i;dy=j;
                }
            }
        }
        dfs(grid,a,b,vis,n);
        return vis[dx][dy];
    }
};