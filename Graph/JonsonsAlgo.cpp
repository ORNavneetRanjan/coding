#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;


vector<int> dijkstra(int n, vector<vector<int>>& edges, int src){
    
    vector<int> distance(n, 1e8);   
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<bool> visited(n, false);
    unordered_map<int, vector<pair<int, int>>> map;

    for(vector<int>& edge : edges){
        int u = edge[0], v = edge[1], w = edge[2];
        map[u].push_back({v, w});
    }

    distance[src] = 0;
    pq.push({0, src});

    while(!pq.empty()){
        int weight = pq.top().first, node = pq.top().second;
        pq.pop();

        if(weight > distance[node]) continue;

        for(pair<int, int> neigh : map[node]){
            int u = neigh.first, w = neigh.second;
            if(distance[u] > w + weight){
                distance[u] = w + weight;
                pq.push({distance[u], u});
            }
        }
    }
    
    return distance;
}

vector<int> bellmanFord(int n, vector<vector<int>>& adj) {
    vector<int> dis(n+1, 1e8);
    dis[n] = 0;
    vector<vector<int>> edges = adj;
    for(int i = 0;i<n;i++){
        edges.push_back({n, i, 0});
    }
    for(int i = 0;i<=n;i++){
        for(vector<int>& edge : edges){
            int u = edge[0], v = edge[1], w = edge[2];
            if(dis[u] == 1e8) continue;
            if(dis[v] > dis[u] + w){
                if(i == n) return {};
                dis[v] = dis[u] + w;
            } 
        }
    }
    return dis;
}

vector<vector<int>> jonsons(int n, vector<vector<int>>& edges){
    
    vector<int> h = bellmanFord(n, edges);
    if(h.empty()) return {};
    
    vector<vector<int>> newEdges;

    for(auto &edge : edges){
        int u = edge[0], v = edge[1], w = edge[2];
        int newW = w + h[u] - h[v];
        newEdges.push_back({u, v, newW});
    }

    vector<vector<int>> result(n, vector<int>(n, 1e8));

    for(int i = 0; i < n; i++){
        vector<int> dis = dijkstra(n, newEdges, i);

        for(int j = 0; j < n; j++){
            if(dis[j] != 1e8){
                result[i][j] = dis[j] + h[j] - h[i];
            }
        }
    }

    return result;
}