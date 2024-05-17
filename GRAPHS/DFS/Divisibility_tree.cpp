


class Solution {
public:

static const int MAX = 1e5+1;
int sizes[MAX];
int vis[MAX];
int count = 0;

    int dfs(vector<vector<int>> &graph, int node){
        
        vis[node] = 1;
        sizes[node]  = 1;
        
        for(auto g: graph[node]){
            if(vis[g]!=1) sizes[node]+=dfs(graph,g);
        }
        
        
        
        if(node!= 1 && sizes[node]%2==0) count++;
        
        return sizes[node];
    }

	int minimumEdgeRemove(int n, vector<vector<int>>edges){
	    // Code here
	    
	    vector<vector<int>> graph(n+1);
	    
	    for(auto edge:  edges){
	        int u = edge[0];
	        int v = edge[1];
	        graph[u].push_back(v);
	        graph[v].push_back(u);
	    }
	    
	    memset(sizes,0,sizeof(sizes));
	    memset(vis,0,sizeof(vis));
	    
	    int sizetree = dfs(graph,1);
	    
	    
	    return count;
	    
	}
};


