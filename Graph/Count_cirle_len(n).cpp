#include <iostream>
#include <vector>
using namespace std;

const int V = 5;
int count = 0;

void dfs(int start, int node, bool graph[][V], int n, vector<bool>& visited, int parent){
    visited[node] = true;

    if(n == 0){
        if(graph[node][start]){
            count++;
        }
        visited[node] = false;
        return;
    }

    for(int i = 0; i < V; i++){
        if(graph[node][i] && !visited[i]){
            dfs(start, i, graph, n-1, visited, node);
        }
    }

    visited[node] = false;
}

int countCycles(bool graph[][V], int n) {
    vector<bool> visited(V, false);
    count = 0;

    for(int i = 0; i < V; i++){
        dfs(i, i, graph, n-1, visited, -1);
        visited[i] = true;
    }

    return count / 2;
}

int main() {

    // Test Case 1 (Original Graph)
    bool graph1[][V] = {
        {0,1,0,1,0},
        {1,0,1,0,1},
        {0,1,0,1,0},
        {1,0,1,0,1},
        {0,1,0,1,0}
    };

    cout << "Test 1: Cycles of length 4 = "
         << countCycles(graph1,4) << endl;


    // Test Case 2 (Simple Square)
    bool graph2[][V] = {
        {0,1,0,1,0},
        {1,0,1,0,0},
        {0,1,0,1,0},
        {1,0,1,0,0},
        {0,0,0,0,0}
    };

    cout << "Test 2: Cycles of length 4 = "
         << countCycles(graph2,4) << endl;


    // Test Case 3 (Triangle)
    bool graph3[][V] = {
        {0,1,1,0,0},
        {1,0,1,0,0},
        {1,1,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };

    cout << "Test 3: Cycles of length 3 = "
         << countCycles(graph3,3) << endl;


    // Test Case 4 (No Cycle)
    bool graph4[][V] = {
        {0,1,0,0,0},
        {1,0,1,0,0},
        {0,1,0,1,0},
        {0,0,1,0,1},
        {0,0,0,1,0}
    };

    cout << "Test 4: Cycles of length 4 = "
         << countCycles(graph4,4) << endl;


    // Test Case 5 (Complete Graph)
    bool graph5[][V] = {
        {0,1,1,1,1},
        {1,0,1,1,1},
        {1,1,0,1,1},
        {1,1,1,0,1},
        {1,1,1,1,0}
    };

    cout << "Test 5: Cycles of length 3 = "
         << countCycles(graph5,3) << endl;

    return 0;
}