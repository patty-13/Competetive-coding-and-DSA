// 11. X Total Shapes
// Medium Accuracy: 59.94% Submissions: 11537 Points: 4
// Given  a grid of n*m consisting of O's and X's. The task is to find the number of 'X' total shapes.
// Note: 'X' shape consists of one or more adjacent X's (diagonals not included).
// Your Task:
// You don't need to read or print anything. Your task is to complete the function xShape() which takes grid as input parameter and returns the count of total X shapes.
 

// Expected Time Compelxity: O(n*m)
// Expected Space Compelxity: O(n*m)
 

// Constraints:
// 1 ≤ n, m ≤ 100

class Solution
{
    public:
    void dfs(vector<vector<char>>&grid, int i, int j, int n, int m){
        // Base case
        if (i >= n || j >= m || i < 0 || j < 0 || grid[i][j] != 'X')    return;

        grid[i][j] = '0';
        dfs(grid, i - 1, j, n, m),dfs(grid, i, j - 1, n, m);
        dfs(grid, i, j + 1, n, m),dfs(grid, i + 1, j, n, m);
    }
    //Function to find the number of 'X' total shapes.
    int xShape(vector<vector<char>>& grid)
    {
        int count = 0;
        int n = grid.size();
        int m = grid[0].size();
        
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(grid[i][j]=='X')
                    count++, dfs(grid, i, j, n, m);
                    
        return count;
    }
};

