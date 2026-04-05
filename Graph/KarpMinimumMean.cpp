#include <iostream>
#include <vector>
using namespace std;

double minimumMeanWeightCycle(int n, vector<vector<int>>& graph) {
    vector<vector<pair<int,int>>> adj(n);

    for(vector<int>& arr : graph){
        int u = arr[0], v = arr[1], w = arr[2];
        adj[v].push_back({u, w});
    }
 
    vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
    dp[0][0] = 0;

    for(int i =  1;i<=n;i++){
        for(int j = 0;j<n;j++){
            for(int k = 0;k<adj[j].size();k++){
                if(dp[i-1][adj[j][k].first] != -1){
                    int currWeight = dp[i-1][adj[j][k].first] + adj[j][k].second;
                    if(dp[i][j] == -1) dp[i][j] = currWeight;
                    else dp[i][j] = min(dp[i][j], currWeight);
                }
            }
        }
    }

    vector<double> avg(n, -1);
    for(int i = 0;i<n;i++){
        if(dp[n][i] != -1){
            for(int j = 0;j<n;j++){
                if(dp[j][i] != -1) 
                avg[i] = max(avg[i], ((double)dp[n][i] - dp[j][i])/(n-j));
            }
        }
    }
    double ans = avg[0];
    for(int i = 0;i<n;i++){
        if(avg[i] != -1 && avg[i] < ans){
            ans = avg[i];
        }
    }

    return ans;
}