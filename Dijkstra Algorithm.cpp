// 18. Implementing Dijkstra Algorithm 
// Medium Accuracy: 49.0% Submissions: 53922 Points: 4
// Given a weighted, undirected and connected graph of V vertices and E edges, Find the shortest distance of all the vertex's from the source vertex S.
// Note: The Graph doesn't contain any negative weight cycle.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function dijkstra()  which takes number of vertices V and an adjacency list adj as input parameters and returns a list of integers, where ith integer denotes the shortest distance of the ith node from Source node. Here adj[i] contains a list of lists containing two integers where the first integer j denotes that there is an edge between i and j and second integer w denotes that the weight between edge i and j is w.

 

// Expected Time Complexity: O(V2).
// Expected Auxiliary Space: O(V2).

 

// Constraints:
// 1 ≤ V ≤ 1000
// 0 ≤ adj[i][j] ≤ 1000
// 1 ≤ adj.size() ≤ [ (V*(V - 1)) / 2 ]
// 0 ≤ S < V

// Editorial
// https://youtu.be/ba4YGd7S-TY

class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    int findMinVer(int V, vector<bool> &visited,vector<int> &dist){
	    int min = INT_MAX;
	    int vertex;
	    for(int i = 0; i < V; i++)
	        if(visited[i] == false && dist[i] < min)
	            { vertex = i; min = dist[i]; }
	    return vertex;
	}
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Simple implementatin of Dijkstra algorithm 
        vector<bool> visited(V,false);
        vector<int> dist(V,INT_MAX);
        
        dist[S] = 0;
        
        for(int i = 0;i <  (V-1);i++){
            int u = findMinVer(V,visited,dist);
            visited[u] = true;
            
            for(auto v : adj[u])
                if(!visited[v[0]]   && (dist[u] + v[1]) < dist[v[0]])   
                    dist[v[0]] = dist[u] + v[1];
            
        }
        return dist;
    }
};
