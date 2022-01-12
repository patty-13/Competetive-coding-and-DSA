// 9. Level of Nodes 
// Medium Accuracy: 62.84% Submissions: 7544 Points: 4
// Given a Undirected Graph with V vertices and E edges, Find the level of node X. if X does not exist in the graph then print -1.
// Note: Traverse the graph starting from vertex 0.
// Your task:
// You don’t need to read input or print anything. Your task is to complete the function nodeLevel() which takes two integers V and X denoting the number of vertices and the node, and another adjacency list adj as input parameters and returns the level of Node X. If node X isn't present it returns -1.

// Expected Time Complexity: O(V + E)
// Expected Auxiliary Space: O(V)

// Constraints:
// 2 ≤ V ≤ 104
// 1 ≤ E ≤ (N*(N-1))/2
// 0 ≤ u, v < V
// 1 ≤ X ≤ 104
// Graph doesn't contain multiple edges and self loops.

class Solution{
    public:
    //Function to find the level of node X.
    int nodeLevel(int V, vector<int> adj[], int x) 
    { 
        bool visited[V];
        fill(visited, visited+V, false);
        queue<int> q;
        int lvl = 0; int s = 0;
        q.push(s);  visited[s] = true;
        while(!q.empty()){
            int size = q.size(); lvl++;
            for(int i=0; i<size; i++){
                int v = q.front();  q.pop();
                for(int u : adj[v]){
                    if(visited[u]==false){
                        if(u == x) return lvl;
                        visited[u]=true;
                        q.push(u);
                    }
                }
            }
        }
        return -1;
    }
};