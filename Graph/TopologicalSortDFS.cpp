#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
using namespace std;

void dfs(vector<vector<int>>&  edges, int src, vector<bool>& visited, stack<int>& st){
    visited[src] = true;
    for(int edge : edges[src]){
        if(!visited[edge]){
            dfs(edges, edge, visited, st);
        }
    }
    st.push(src);
}

vector<int> topoDFS(int n, vector<vector<int>>& edges){
    vector<bool> visited(n, false);
    stack<int> st;
    for(int i = 0;i<n;i++){
        if(!visited[i]){
            dfs(edges, i, visited, st);
        }
    }
    vector<int> ans(n);
    for(int i = 0;i<n;i++){
        ans[i] = st.top();
        st.pop();
    }
    return ans;
}

vector<int>  shortestPath(int n, int src, vector<vector<int>>& edges){
    vector<vector<int>> adj(n);
    unordered_map<string, int> weight;
    for(vector<int>& edge : edges){
        int u = edge[0], v = edge[1], w = edge[2];
        adj[u].push_back(v);
        weight[to_string(u) + "&" + to_string(v)] = w;
    }
    vector<int> topo = topoDFS(n, adj);
    vector<int> dist(n, 1e8);
    dist[src] = 0;
    for(int u : topo){
        if(dist[u] != 1e8){
            for(int v : adj[u]){
                int w = weight[to_string(u) + "&" + to_string(v)];
                if(dist[v] > dist[u] + w){
                    dist[v] = dist[u] + w;
                }
            }
        }
    }
    return dist;
}

