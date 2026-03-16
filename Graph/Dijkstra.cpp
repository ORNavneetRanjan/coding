#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
#include <queue>
using namespace std;

vector<int> dijkstra(vector<vector<int>>& edges, int src, int n){
    unordered_map<int, vector<pair<int, int>>> map;
    for(vector<int>& edge : edges){
        int u = edge[0], v = edge[1], w = edge[2];
        map[u].push_back({v, w});
        map[v].push_back({u, w});
    }

    vector<int> dis(n, INT_MAX);
    vector<int> visited(n, false);

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src});

    while(!pq.empty()){
        int distance = pq.top().first , node = pq.top().second;
        pq.pop();
        if(visited[node]) continue;
        visited[node] = true;

        for(pair<int, int> neigh : map[node]){
            int nei = neigh.first, weight = neigh.second;
            if(dis[nei] > weight + distance){
                dis[nei] = weight + distance;
                pq.push({dis[nei], nei});
            }
        }

    }

    return dis;
}