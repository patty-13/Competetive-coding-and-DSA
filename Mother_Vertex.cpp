// 13. Mother Vertex 
// Easy Accuracy: 49.76% Submissions: 16970 Points: 2
// Given a Directed Graph, find a Mother Vertex in the Graph (if present). 
// A Mother Vertex is a vertex through which we can reach all the other vertices of the Graph.
 
// Your Task:
// You don't need to read or print anything. Your task is to complete the function findMotherVertex() which takes V denoting the number of vertices and adjacency list as imput parameter and returns the verticex from through which we can traverse all other vertices of the graph. If there is more than one possible nodes then returns the node with minimum value.If not possible returns -1.
 

// Expected Time Complexity: O(V + E)
// Expected Space Compelxity: O(V)
 

// Constraints:
// // 1 ≤ V ≤ 500

// Editorial
// What is a Mother Vertex? 
// A mother vertex in a graph G = (V, E) is a vertex v such that all other vertices in G can be reached by a path from v.
// Case 1:- Undirected Connected Graph : In this case, all the vertices are mother vertices as we can reach to all the other nodes in the graph.
// Case 2:- Undirected/Directed Disconnected Graph : In this case, there is no mother vertices as we cannot reach to all the other nodes in the graph.
// Case 3:- Directed Connected Graph : In this case, we have to find a vertex -v in the graph such that we can reach to all the other nodes in the graph through a directed path.

// A Naive approach : 
// A trivial approach will be to perform a DFS/BFS on all the vertices and find whether we can reach all the vertices from that vertex. This approach takes O(V(E+V)) time, which is very inefficient for large graphs.



// Can we do better? 
// We can find a mother vertex in O(V+E) time. The idea is based on Kosaraju's Strongly Connected Component Algorithm. In a graph of strongly connected components, mother vertices are always vertices of source component in component graph. The idea is based on below fact.
// If there exist mother vertex (or vertices), then one of the mother vertices is the last finished vertex in DFS. (Or a mother vertex has the maximum finish time in DFS traversal).
// A vertex is said to be finished in DFS if a recursive call for its DFS is over, i.e., all descendants of the vertex have been visited. 

// https://www.youtube.com/watch?v=gTt5idzVCgA


void DFS(int v, vector<bool> &visited, vector<int> g[]) {
    visited[v] = true;  vector<int>::iterator i;
    for(i = g[v].begin(); i != g[v].end(); i++) 
        if(!visited[*i])    DFS(*i, visited, g);
    }

    int findMotherVertex(int V, vector<int> g[]) { 
        vector<bool> visited(V, false); int v = 0;
        for(int i = 0; i < V; i++) 
            if(visited[i] == false) 
                DFS(i, visited, g) , v = i;
        
        fill(visited.begin(), visited.end(), false);
        DFS(v, visited, g);
        for(int i = 0; i < V; i++) 
            if(visited[i] == false) return -1;
        
        return v;
    } 