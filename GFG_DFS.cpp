// https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/0/?track=DSASP-Graph&batchId=154
// 3. DFS of Graph 
// Easy Accuracy: 49.62% Submissions: 96670 Points: 2
// Given a connected undirected graph. Perform a Depth First Traversal of the graph.
// Note: Use recursive approach to find the DFS traversal of the graph starting from the 0th vertex from left to right according to the graph..

class Solution{
public:
    Function to return a list containing the DFS traversal of the graph.
    void dfs(int node ,vector<int> &vis, vector<int> &res, vector<int> adj[]){
	    res.push_back(node);
	    vis[node] = 1;
	    for(auto it : adj[node])    
	        if(!vis[it])    dfs(it,vis,res,adj);
	}
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	   vector<int> res;
	   vector<int> vis(V,0);
	   dfs(0,vis,res,adj);
	   return res;
	}
};