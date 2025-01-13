#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

// Struct to hold cell positions
struct Cell {
    int row, col, distance;
};

// Check if a position is within the grid boundaries and has a value of 0
bool isValid(int row, int col, int M, int N, const vector<vector<int>>& grid, vector<vector<bool>>& visited) {
    return row >= 0 && row < M && col >= 0 && col < N && grid[row][col] == 0 && !visited[row][col];
}

// BFS to find the shortest path
int findShortestPath(int M, int N, const vector<vector<int>>& grid, 
                     Cell source, Cell dest, pair<int, int> moveRule) {
    // Define possible moves using the move rule
    vector<pair<int, int>> directions = {
        {moveRule.first, moveRule.second},          // Forward
        {moveRule.second, -moveRule.first},         // Right (90 degrees clockwise)
        {-moveRule.second, moveRule.first},         // Left (90 degrees counterclockwise)
        {-moveRule.first, -moveRule.second}         // Backward (180 degrees)
    };
    
    // Visited matrix to track visited cells
    vector<vector<bool>> visited(M, vector<bool>(N, false));
    queue<Cell> q;

    // Start BFS from the source
    q.push({source.row, source.col, 0});
    visited[source.row][source.col] = true;

    while (!q.empty()) {
        Cell current = q.front();
        q.pop();

        // Check if we've reached the destination
        if (current.row == dest.row && current.col == dest.col) {
            return current.distance;
        }

        // Explore all four possible moves
        for (auto [dx, dy] : directions) {
            int newRow = current.row + dx;
            int newCol = current.col + dy;

            if (isValid(newRow, newCol, M, N, grid, visited)) {
                visited[newRow][newCol] = true;
                q.push({newRow, newCol, current.distance + 1});
            }
        }
    }
    return -1; // Return -1 if the destination is unreachable
}

int main() {
    int M, N;
    cin >> M >> N;

    vector<vector<int>> grid(M, vector<int>(N));
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> grid[i][j];
        }
    }

    Cell source, dest;
    cin >> source.row >> source.col;
    cin >> dest.row >> dest.col;

    pair<int, int> moveRule;
    cin >> moveRule.first >> moveRule.second;

    int result = findShortestPath(M, N, grid, source, dest, moveRule);
    cout << result << endl;

    return 0;
}
