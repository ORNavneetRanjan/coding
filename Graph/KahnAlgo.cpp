#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> kahnAlgo(vector<vector<int>>& adj){
    int n = adj.size();
    vector<int> indegree(n, 0);
    queue<int> q;
    for(int i =0;i<n;i++){
        for(int edges : adj[i])
            indegree[edges]++;
    }

    for(int i = 0;i<n;i++){
        if(indegree[i] == 0) q.push(i);
    }

    vector<int> ans;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for(int edges : adj[node]){
            indegree[edges]--;
            if(indegree[edges] == 0){
                q.push(edges);
            }
        }
    }

    return ans;
}

vector<int> shortestDistance(int n, vector<vector<int>>& edges, int src){
    vector<vector<int>> adj(n);
    unordered_map<string, int> map;
    for(vector<int>& edge : edges){
        int u = edge[0], v = edge[1], w = edge[2];
        adj[u].push_back(v);
        map[to_string(u) + "&" + to_string(v)] = w;
    }

    vector<int> topoSort = kahnAlgo(adj);
    vector<int> dis(n, 1e8);
    dis[src] = 0;

    for(int u : topoSort){
        if(dis[u] !=  1e8){
            for(int node : adj[u]){
                int w = map[to_string(u) + "&" + to_string(node)];
                if(dis[node] > dis[u] + w){
                    dis[node] = dis[u] + w;
                }
            }
        }
    }
    return dis;
}