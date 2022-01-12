// 10. Possible paths between 2 vertices 
// Medium Accuracy: 52.95% Submissions: 10868 Points: 4
// Given a Directed Graph having V nodes numbered from 1 to V, and E directed edges. Given two nodes, source and destination, count the number of ways or paths between these two vertices in the directed graph. These paths should not contain any cycle.
// Note: Graph doesn't contain multiple edges, self-loop, and cycles.

// Your task:
// You don't need to read, input, or print anything. Your task is to complete the function countPaths(), which takes the integer V denoting the number of vertices, adjacency list adj, integer source, and destination as input parameters and returns the number of paths in the graph from the source vertex to the destination vertex.


// Expected Time Complexity: O(V!)
// Expected Auxiliary Space: O(V)


// Constraints:
// 1 ≤ V, E ≤ 100
// 1 ≤ source, destination ≤ V

// View Bookmarked Problems

class Solution {
  public:
    // Function to count paths between two vertices in a directed graph.
    
    // Two Answers 
    
    // Recursive
    
    void DfsRec(vector<int> adj[], int s, int d, int &count){
        if(s == d) count++;
        else for(int u : adj[s])  DfsRec(adj, u, d,  count);
    }
    int countPaths(int V, vector<int> adj[], int source, int destination) {
        int count = 0;
        DfsRec(adj, source, destination, count);
        return count;
    }
    
    // Iterative
    
    int countPaths(int n,vector<int> adj[], int s, int d) {
        queue<int> q;
        int paths = 0;
        q.push(s);
        if (s==d) paths++;
        while(!q.empty()){
            int size = q.size();
            for(int i=0; i<size; i++){
                int v = q.front();
                q.pop();
                for(int u : adj[v]){
                    if(u == d)
                        paths++;
                    q.push(u);
                }
            }
        }
        return paths;
    }
};