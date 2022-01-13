// 12. Distance of nearest cell having 1 
// Medium Accuracy: 51.53% Submissions: 12153 Points: 4
// Given a binary grid. Find the distance of nearest 1 in the grid for each cell.
// The distance is calculated as |i1 – i2| + |j1 – j2|, where i1, j1 are the row number and column number of the current cell and i2, j2 are the row number and column number of the nearest cell having value 1.
 
// Yout Task:
// You don't need to read or print anything, Your task is to complete the function nearest() which takes grid as input parameter and returns a matrix of same dimensions where the value at index (i, j) in the resultant matrix signifies the minimum distance of 1 in the matrix from grid[i][j].
 

// Expected Time Complexity: O(n*m)
// Expected Auxiliary Space: O(n*m)

// Constraints:
// // 1 ≤ n, m ≤ 500


// Method 1: This method uses a simple brute force approach to arrive at the solution.

// Approach: The idea is to traverse the matrix for each cell and find the minimum distance, To find the minimum distance traverse the matrix and find the cell which contains 1 and calculates the distance between two cells and store the minimum distance.
// Algorithm : 
// Traverse the matrix from start to end (using two nested loops)
// For every element find the closest element which contains 1. To find the closest element traverse the matrix and find the minimum distance.
// Fill the minimum distance in the matrix.


// Complexity Analysis: 
// Time Complexity: O(N2*M2). 
// For every element in the matrix, the matrix is traversed and there are N*M elements So the time complexity is O(N2*M2).
// Space Complexity: O(1). 
// No extra space is required.

//  Method 2: This method uses the BFS or breadth-first search technique to arrive at the solution.

// Approach: The idea is to use multisource Breadth-First Search. Consider each cell as a node and each boundary between any two adjacent cells be an edge. Number each cell from 1 to N*M. Now, push all the node whose corresponding cell value is 1 in the matrix in the queue. Apply BFS using this queue to find the minimum distance of the adjacent node.
// Algorithm: 
// Create a graph with values assigned from 1 to M*N to all vertices. The purpose is to store position and adjacent information.
// Create an empty queue.
// Traverse all matrix elements and insert positions of all 1s in queue.
// Now do a BFS traversal of graph using above created queue.
// Run a loop till the size of the queue is greater than 0 then extract the front node of the queue and remove it and insert all its adjacent and unmarked elements. Update the minimum distance as distance of current node +1 and insert the element in the queue.

// Complexity Analysis: 
// Time Complexity: O(N*M). 
// In BFS traversal every element is traversed only once so time Complexity is O(M*N).
// Space Complexity: O(M*N). 
// To store every element in the matrix O(M*N) space is required.

class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
    vector<vector<int>>nearest(vector<vector<int>>grid)
    {
        int N = grid.size();
        int M = grid[0].size();
        vector<vector<int>> res(N, (vector<int> (M, INT_MAX)));
        queue<pair<int, int>> q;
        
        for(int i = 0; i < N; i++)
            for(int j = 0; j < M; j++)
                if(grid[i][j] == 1) q.push({i, j}) ,res[i][j] = 0;
        
        vector<pair<int, int>> moves = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        while(!q.empty())
        {
            int currX = q.front().first;
            int currY = q.front().second;   q.pop();
            for(auto move: moves)
            {
                int x = currX + move.first;
                int y = currY + move.second;
                
                if(x >= 0 and x < N and y >= 0 and y < M){
                    if(res[x][y] > res[currX][currY] + 1){
                        res[x][y] = res[currX][currY] + 1;  q.push({x, y});
                    }
                }
            }
        }
        return res;
    }
};