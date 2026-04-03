#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> bfs(int n, vector<vector<int>>& graph, int src, int des){
    vector<int> dis(n, 1e8);
    vector<int> parent(n, -1);
    unordered_map<int, vector<int>> adj;
    
    for(vector<int>& arr : graph){
        adj[arr[0]].push_back(arr[1]);
        adj[arr[1]].push_back(arr[0]);
    }

    parent[src] = src;
    queue<int> q;
    q.push(src);
    dis[src] = 0;

    int count = 0;

    while(!q.empty()){
        int size = q.size();
        for(int i = 0; i < size; i++){
            int node = q.front();
            q.pop();

            if(node == des) break;

            for(int neigh : adj[node]){
                if(dis[neigh] == 1e8){
                    dis[neigh] = count + 1;
                    parent[neigh] = node;
                    q.push(neigh);
                }
            }
        }
        count++;
    }

    if(dis[des] == 1e8) return {-1};

    vector<int> path;
    int node = des;

    while(node != parent[node]){
        path.push_back(node);
        node = parent[node];
    }
    path.push_back(src);

    reverse(path.begin(), path.end());
    return path;
}

void printPath(vector<int> path){
    for(int x : path) cout << x << " ";
    cout << endl;
}

int main(){

   
    vector<vector<int>> graph1 = {{0,1},{1,2},{2,3},{3,4}};
    cout << "Test 1: ";
    printPath(bfs(5, graph1, 0, 4));

    vector<vector<int>> graph2 = {{0,1},{0,2},{1,3},{2,3},{3,4},{4,5}};
    cout << "Test 2: ";
    printPath(bfs(6, graph2, 0, 5));

    vector<vector<int>> graph3 = {{0,1},{1,2},{3,4}};
    cout << "Test 3: ";
    printPath(bfs(5, graph3, 0, 4));

    vector<vector<int>> graph4 = {{0,1},{1,2}};
    cout << "Test 4: ";
    printPath(bfs(3, graph4, 1, 1));

    vector<vector<int>> graph5 = {{0,1},{1,2},{2,3},{3,0}};
    cout << "Test 5: ";
    printPath(bfs(4, graph5, 0, 3));

    vector<vector<int>> graph6 = {{0,1},{0,2},{1,3},{2,3},{3,4},{4,5},{5,6},{4,6}};
    cout << "Test 6: ";
    printPath(bfs(7, graph6, 0, 6));

    vector<vector<int>> graph7 = {{0,1},{0,2},{1,2},{2,3}};
    cout << "Test 7: ";
    printPath(bfs(4, graph7, 0, 3));

    vector<vector<int>> graph8 = {{0,1},{1,2},{2,3},{0,4},{4,5},{5,3}};
    cout << "Test 8: ";
    printPath(bfs(6, graph8, 0, 3));

    return 0;
}