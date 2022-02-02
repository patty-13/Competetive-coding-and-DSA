// 15. Rotten Oranges 
// Medium Accuracy: 50.57% Submissions: 27870 Points: 4
// Given a grid of dimension nxm where each cell in the grid can have values 0, 1 or 2 which has the following meaning:
// 0 : Empty cell
// 1 : Cells have fresh oranges
// 2 : Cells have rotten oranges

// We have to determine what is the minimum time required to rot all oranges. A rotten orange at index [i,j] can rot other fresh orange at indexes [i-1,j], [i+1,j], [i,j-1], [i,j+1] (up, down, left and right) in unit time. 
 

// Example 1:

// Input: grid = {{0,1,2},{0,1,2},{2,1,1}}
// Output: 1
// Explanation: The grid is-
// 0 1 2
// 0 1 2
// 2 1 1
// Oranges at positions (0,2), (1,2), (2,0)
// will rot oranges at (0,1), (1,1), (2,2) and 
// (2,1) in unit time.

// Your Task:
// You don't need to read or print anything, Your task is to complete the function orangesRotting() which takes grid as input parameter and returns the minimum time to rot all the fresh oranges. If not possible returns -1.
 

// Expected Time Complexity: O(n*m)
// Expected Auxiliary Space: O(n)
 

// Constraints:
// 1 ≤ n, m ≤ 500

class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        int dir[][2] = {{0,1},{0, -1}, {1, 0}, {-1, 0}};
        
        // Rows and column
        int n = grid.size();
        int m = grid[0].size();
        int timer = -1;
        
        // Making a queue to note the index of wrotten orange
        queue<pair<int, int>> q;
        
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                // means we found a wrotten orange
                if(grid[i][j] == 2) 
                    {   q.push({i, j}); grid[i][j] = 0; }
            
        
        // Traversing the wrotten array queue 
        while(!q.empty()){
            int size = q.size();
            for(int i=0; i<size; i++){
                auto p = q.front();
                q.pop();
                //Source row and column
                int sr = p.first;
                int sc = p.second;
                // Traverse in the directions of mentioned in the grid 
                for(int d=0; d<4; d++){
                    int r = sr + dir[d][0];
                    int c = sc + dir[d][1];
                    //  if we are in the limits we make the grid at that position 1
                    if(r>=0 && c>=0 && r<n && c<m && grid[r][c]==1){
                        grid[r][c] = 0;
                        q.push({r, c});
                    }
                }
            }
            // Update the timer 
            timer++;
        }
        
        // Base check if all the oranges are fresh
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                if(grid[i][j]==1)
                    return -1;
                    
        // return the time
        return timer;
    }
};