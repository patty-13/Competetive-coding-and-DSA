// 14. Unit Area of largest region of 1's 
// Medium Accuracy: 49.82% Submissions: 23137 Points: 4
// Given a grid of dimension nxm containing 0s and 1s. Find the unit area of the largest region of 1s.
// Region of 1's is a group of 1's connected 8-directionally (horizontally, vertically, diagonally).

// //Function to find unit area of the largest region of 1s.
//     int row_dirs[8] = {0, 0, -1, 1, -1, -1, 1, 1};
//     int col_dirs[8] = {-1, 1, 0, 0, -1, 1, -1, 1};
//     int rows, cols;

// Your Task:
// You don't need to read or print anyhting. Your task is to complete the function findMaxArea() which takes grid as input parameter and returns the area of the largest region of 1's.


// Expected Time Complexity: O(n*m)
// Expected Auxiliary Space: O(n*m)
 

// Constraints:
// 1 ≤ n, m ≤ 500

// Solution: The idea is based on the problem or finding number of islands in Boolean 2D-matrix 




// Approach:  


// A cell in 2D matrix can be connected to at most 8 neighbours.
// So in DFS, make recursive calls for 8 neighbours of that cell.
// Keep a visited Hash-map to keep track of all visited cells.
// Also keep track of the visited 1's in every DFS and update maximum length region.

// https://www.geeksforgeeks.org/find-number-of-islands/

class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    int row_dirs[8] = {0, 0, -1, 1, -1, -1, 1, 1};
    int col_dirs[8] = {-1, 1, 0, 0, -1, 1, -1, 1};
    int rows, cols;
    void dfs_helper(int r, int c, vector<vector<int>> &grid, int &cur_area) {
        // base case: corner cases of the matrix
        // when you encounter 0: there won't be adjacent neighbor calls
        if(r < 0 || c < 0 || r >= rows || c >= cols || grid[r][c] == 0) return;
        // mark the current block of 1 as visited
        grid[r][c] = 0; cur_area++;
        // recursive dfs calls in 8 directions
        for(int itr = 0; itr < 8; itr++)
            dfs_helper(r + row_dirs[itr], c + col_dirs[itr], grid, cur_area);
    }
    int findMaxArea(vector<vector<int>>& grid) {
        int max_area = 0, cur_area;
        this->rows = grid.size();
        this->cols = grid[0].size();
        // initiate dfs call for every component
        for(int i = 0; i < rows; i++) 
            for(int j = 0; j < cols; j++) 
                if(grid[i][j] == 1) {
                    cur_area = 0;   dfs_helper(i, j, grid, cur_area);
                    if(cur_area > max_area) max_area = cur_area;
                }
            
        return max_area;
    }
};