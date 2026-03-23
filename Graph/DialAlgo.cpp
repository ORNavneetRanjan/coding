#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> dialAlgo(int n, vector<vector<int>>& edges, int src){
    vector<vector<vector<int>>> adj(n);
    int d = 0;
    for(vector<int>& edge : edges){
        int u = edge[0], v = edge[1], w = edge[2];
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
        d = max(d, w);
    }

    vector<int> dis(n, 1e8);
    dis[src] = 0;
    d *= n;
    vector<set<int>> bucket(d+1);
    bucket[0].insert(src);
    for(int i = 0;i<=d;i++){
        while(!bucket[i].empty()){
            int node = *bucket[i].begin();
            bucket[i].erase(bucket[i].begin());
            if(i > dis[node]) continue;

            for(vector<int>& neigh : adj[node]){
                int v = neigh[0];
                int w = neigh[1];
                if(dis[v] > dis[node] + w){

                    if(dis[v] != 1e8) bucket[dis[v]].erase(v);
                    dis[v] = dis[node] + w;
                    bucket[dis[v]].insert(v);
                }
            }
        }
    }
    return dis;

}

int main() {
    int n = 9;
    int src = 0;
    vector<vector<int>> edges = {
        {0, 1, 4},
        {0, 7, 8},
        {1, 2, 8},
        {1, 7, 11},
        {2, 3, 7},
        {2, 8, 2},
        {3, 4, 9},
        {3, 5, 14},
        {4, 5, 10},
        {5, 6, 2},
        {6, 7, 1},
        {6, 8, 6},
        {7, 8, 7}
    };
    
    vector<int> res = dialAlgo(n, edges, src);
    for (auto val : res) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}