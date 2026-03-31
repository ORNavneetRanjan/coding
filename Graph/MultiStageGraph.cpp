#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int disBetweenTwoNodeUsingAdj(int n, vector<vector<int>> & graph, int src, int des){
    
    vector<int> dis(n, 1e8);
    dis[des] = 0;
    
    for(int i = n-1;i>=0;i--){

        for(vector<int>& edge : graph){
            int u = edge[0], v = edge[1], w = edge[2];

            if(dis[v] != 1e8 ){
                dis[u] = min(dis[u], dis[v] + w);
            }
        }
    }
    
    return dis[src];
}

int disBetweenTwoNodeUsingMultiStageGraph(int k, vector<pair<int, unordered_map<int, int>>>& graph, int src, int des){
    
    int n = graph.size();
    vector<int> dis(n, 1e8);
    dis[des] = 0;

    for(int i = k-1; i > 0; i--){
        for(int j = 0; j < n; j++){
            
            if(graph[j].first != i) continue;

            for(auto &val : graph[j].second){
                int next = val.first;
                int weight = val.second;

                if(dis[next] != 1e8){
                    dis[j] = min(dis[j], dis[next] + weight);
                }
            }
        }
    }

    return dis[src];
}