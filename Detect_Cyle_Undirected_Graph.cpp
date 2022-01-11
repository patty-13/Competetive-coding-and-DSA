// https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/0/?track=DSASP-Graph&batchId=154#
// 5. Detect cycle in an undirected graph 
// Medium Accuracy: 35.66% Submissions: 100k+ Points: 4
// Given an undirected graph with V vertices and E edges, check whether it contains any cycle or not. 
// Your Task:
// You don't need to read or print anything. Your task is to complete the function isCycle() which takes V denoting the number of vertices and adjacency list as input parameters and returns a boolean value denoting if the undirected graph contains any cycle or not, return 1 if a cycle is present else return 0.

// NOTE: The adjacency list denotes the edges of the graph where edges[i][0] and edges[i][1] represent an edge.

 

// Expected Time Complexity: O(V + E)
// Expected Space Complexity: O(V)
class Solution{
public:
    bool DFSRec(vector<int> adj[], int s,bool visited[], int parent) 
    { 	
        visited[s]=true;
        for(int u:adj[s]){
            if(visited[u]==false)
                if(DFSRec(adj,u,visited,s)==true)   return true;
            else if(u!=parent)  return true;
        }
        return false;
    }
    bool isCycle(int V,vector<int> adj[]){
        bool visited[V];
        //Making all the visited nodes false
    	for(int i=0;i<V; i++) 
    		visited[i] = false;
    	// For loop to make sure there are no unconnected components 
        for(int i=0;i<V;i++){
            if(visited[i]==false)
                if(DFSRec(adj,i,visited,-1)==true)
                    return true;
        }
        return false;
    }
};