#include <iostream>
#include <vector>
#include <climits>
using namespace std;


vector<int> bellmanFord(int n, vector<vector<int>>& edges, int src){
    vector<int> dis(n, INT_MAX);
    dis[src] = 0;
    for(int i = 0;i<n;i++){
        for(vector<int>& edge : edges){
            int u = edge[0], v = edge[1], w = edge[2];
            if(dis[u] == INT_MAX) continue;
            if(dis[v] > dis[u] + w){
                if(i == n -1) return {-1};
                dis[v] = dis[u] + w; 
            }
        }
    }
    return dis;
}

int main() {
    
  
    int V = 5;
    vector<vector<int>> edges = {
        {1, 3, 2}, 
        {4, 3, -1},
        {2, 4, 1}, 
        {1, 2, 1},
        {0, 1, 5} 
    };
    int src = 0;
    vector<int> ans = bellmanFord(V, edges, src);
    for (int dist : ans) 
        cout << dist << " ";

    return 0; 
}