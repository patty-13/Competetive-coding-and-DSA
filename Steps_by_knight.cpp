// 17. Steps by Knight 
// Medium Accuracy: 50.11% Submissions: 39847 Points: 4
// Given a square chessboard, the initial position of Knight and position of a target. Find out the minimum steps a Knight will take to reach the target position.

// Note:
// The initial and the target position co-ordinates of Knight have been given accoring to 1-base indexing.

// Input:
// N=6
// knightPos[ ] = {4, 5}
// targetPos[ ] = {1, 1}
// Output:
// 3

// Knight takes 3 step to reach from 
// (4, 5) to (1, 1):
// (4, 5) -> (5, 3) -> (3, 2) -> (1, 1).
 

 

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function minStepToReachTarget() which takes the inital position of Knight (KnightPos), the target position of Knight (TargetPos) and the size of the chess board (N) as an input parameters and returns the minimum number of steps required by the knight to reach from its current position to the given target position.

 

// Expected Time Complexity: O(N2).
// Expected Auxiliary Space: O(N2).

 

// Constraints:
// 1 <= N <= 1000
// 1 <= Knight_pos(X, Y), Targer_pos(X, Y) <= N

// Editorial 
// https://www.geeksforgeeks.org/minimum-steps-reach-target-knight/

class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Queue for the step of knight in x and y
	    queue<int> qx, qy;
	    
	    // Maintaining a 2D queue for visited 
        vector<vector<bool>> visited(N + 1, vector<bool>(N + 1, false));
        
        // We push the position of knight in the queue
        qx.push(KnightPos[0]);
        qy.push(KnightPos[1]);
        
        // Movement Vector
        vector<int> dx = {2, 2, -2, -2, 1, 1, -1, -1};
        vector<int> dy = {1, -1, 1, -1, 2, -2, 2, -2};
        
        int x, y, xx, yy;
        int moves = -1;
        
        // Making the visited location true 
        visited[qx.front()][qy.front()] = true;
        
        
        while(!qx.empty()){
            
            // we store the size of the queue
            int sz = qx.size();
            
            moves++;
            
            // Iterate over the points in queue
            for(int i = 0; i < sz; i++)
            {
                // Getting x and y coordinate
                x = qx.front(); qx.pop();
                y = qy.front(); qy.pop();
                
                // Return when we reach the target
                if(x == TargetPos[0] && y == TargetPos[1])  return moves;
                
                // go through all the neighbours
                for(int i = 0; i < 8; i++)
                {
                    // Checking all the possible combinations the knight can go
                    xx = x + dx[i], yy = y + dy[i];
                    
                    if(xx < 1 || xx > N || yy < 1 || yy > N || visited[xx][yy]) continue;
                    
                    // Save the cordinates 
                    visited[xx][yy] = true;
                    
                    // Updating our queue
                    qx.push(xx);qy.push(yy);
                }
            }
        }
        // Solution not found
        return -1;
	}
};