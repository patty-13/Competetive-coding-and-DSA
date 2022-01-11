// https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/0/?track=DSASP-Graph&batchId=154#
// 6. Detect cycle in a directed graph 
// Medium Accuracy: 30.19% Submissions: 100k+ Points: 4
// Given a Directed Graph with V vertices (Numbered from 0 to V-1) and E edges, check whether it contains any cycle or not.

// Your task:
// You don’t need to read input or print anything. Your task is to complete the function isCyclic() which takes the integer V denoting the number of vertices and adjacency list as input parameters and returns a boolean value denoting if the given directed graph contains a cycle or not.


// Expected Time Complexity: O(V + E)
// Expected Auxiliary Space: O(V)


// Constraints:
// 1 ≤ V, E ≤ 105


class Solution{
public:
    // Function to detect cycle in a directed graph.
    bool DFSRec(int src, vector<int> adj[], vector<bool> &visited, vector<bool> &recStack){
        // Making the source node as visited
        visited[src] = true;
        recStack[src] = true;
        
        // To iterate over all the adjacent nodes of source node
        for(auto u : adj[src]){
            if(!visited[u] && DFSRec(u,adj,visited,recStack)) return true;
            else if(recStack[u] == true) return true;
        }
        // Making the node that we started from false because it is a directed graph
        recStack[src] = false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        vector<bool> visited(V);
        vector<bool> recStack(V);
        for(int i = 0 ; i < V ; i++)    visited[i] = false,recStack[i] = false; 
        // Looping over for any disconnected components
        for(int i = 0 ; i < V ; i++)
            if(visited[i] == false)
                if(DFSRec(i,adj,visited,recStack) == true)  return true;
        
        return false; 
    }
};