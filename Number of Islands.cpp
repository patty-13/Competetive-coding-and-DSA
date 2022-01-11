//https://practice.geeksforgeeks.org/problems/find-the-number-of-islands/0/?track=DSASP-Graph&batchId=154
// Find the number of islands 
// Medium Accuracy: 38.66% Submissions: 92816 Points: 4
// Given a grid consisting of '0's(Water) and '1's(Land). Find the number of islands.
// Note: An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically or diagonally i.e., in all 8 directions.
// Input:
// grid = {{0,1},{1,0},{1,1},{1,0}}
// Output:
// 1
// Explanation:
// The grid is-
// 0 1
// 1 0
// 1 1
// 1 0
// All lands are connected.
// Input:
// grid = {{0,1,1,1,0,0,0},{0,0,1,1,0,1,0}}
// Output:
// 2
// Expanation:
// The grid is-
// 0 1 1 1 0 0 0
// 0 0 1 1 0 1 0 
// There are two islands one is colored in blue 
// and other in orange.

class Solution{
public:
    void floodfill(vector<vector<char>> &grid , int sr , int sc, int er, int ec, int dir[][2]){
        grid[sr][sc]= '0';
        // We are usign direction array to stop the brute force method
        for(int i = 0; i < 8 ; i++){
            int r = dir[i][0] + sr;
            int c = dir[i][1] + sc;
            // This if will condition the call backs of our function
            if(r>=0 && c>=0 && r<=er && c<=ec && grid[r][c] == '1')
                floodfill(grid,r,c,er,ec,dir);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
    	// Directions Vector
        int dir[][2] = {{0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,-1},{1,-1},{-1,1}};
        // To count the number of islands
        int count = 0;
        int n = grid.size();
        int m = grid[0].size();
        
        // Loop to iterate over all the elements
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(grid[i][j]=='1')
                    count++, floodfill(grid,i,j,n-1,m-1,dir);
                    
        return count;
    }
};