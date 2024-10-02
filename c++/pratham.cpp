#include <iostream>
#include <queue>
using namespace std;
struct Node{
    int data;
    Node* next;
};

Node* iNsert(Node* start, int data){
    if(start == nullptr){
        start = new Node;
        start->data = data;
        start->next = nullptr;
    }else{
        Node* node1 =start, * node2 = nullptr;
        while(node1->next->data <= data){
            node1 = node1->next;
        }
        node2 = new Node;
        node2->data = data;
        node2->next = node1->next;
        node1->next = node2;
    }
    return start;
}

Node* Del(Node* start, int data){
    if(start->data == data){
        Node* node1 = start;
        start = start->next;
        delete node1;
    }else{
        Node* node1 = start, *node2 = start;
        while(node1->data != data){
            node2 = node1;
            node1 = node1->next;
        }
        node2->next = node1->next;
        delete node1;
    }
    return start;
}

void hashInsert(Node* arr[], int key){
    int index = key % 10;
    arr[index] = iNsert(arr[index], key);
    
    
}
int probe(int ht[], int key){
    int index = key %10;
    int count = 1;
    while(ht[index]!= -1){
        index = (key + count)%10;
        count++;
    }
    return index;
}
int search(int ht[], int key){
    int f1 = key %10;
    int l1 = probe(ht, key);
    while(f1<=l1){
        if(ht[f1] == key){
            return f1;
        }else{
            f1++;
        }
    }
    return -1;
}
void linearInsert(int ht[], int key){
    int index = probe(ht, key);
    ht[index] = key;
}

void BFS(int arr[][5], int start, int n){
    queue<int> q;
    int visited[n]={0};
    int i = start;
    cout<<i<<" ";
    visited[i] = 1;
    q.push(i);
    while(!q.empty()){
        i = q.front();
        q.pop();
        for(int j = 0;j<n;j++){
            if(arr[i][j] == 1 && visited[j]==0){
                cout<<j<<" ";
                visited[j]=1;
                q.push(j);
            }
        }
    }
}

void DFS(int arr[][5], int start, int n){
    static int visited[5] = {0};
    if(visited[start]!= 1){
        cout<<start<<" ";
        visited[start] = 1;
        for(int j = 0;j<n;j++){
            if(arr[start][j] == 1 && visited[j]==0){
                DFS(arr, j, n);
            }
        }
    }
}
#define I 32767

void prims(int arr[][6], int start, int n){
    int min = I;
    int cost[n][2] = {0};
    int near[n] = {0};
    for(int i =0;i<n;i++){
        near[i] = I;
    }
    near[start] = 0;
    int u = 0;
    for(int i =0;i<n;i++){
        if(near[i]!= 0 && arr[start][i] < min){
            min = arr[start][i];
            u = i;
        }
    }
    cost[0][0] = start;
    cost[0][1] = u;
    near[u] = 0;
    for(int i =0;i<n;i++){
        if(near[i]==0){
            continue;
        }
        if(arr[i][u] < arr[i][start]){
            near[i] = u;
        }else {
            near[i] = start;
        }
    }

    int k =0;
    for(int i = 1;i<n;i++){
        min = I;
        for(int j = 0;j<n;j++){
            if(near[j]!=0 && arr[j][near[j]] < min){
                min = arr[j][near[j]];
                k = j;
            }
        }
        cost[i][0] = k;
        cost[i][1] = near[k];
        near[k] = 0;
        for(int j = 0;j<n;j++){
            if(near[j]!= 0 && arr[j][k] < arr[j][near[j]]){
                near[j] = k;
            }
        }
    }
    for(int i =0;i<n;i++){
        cout<<cost[i][0]<<" "<<cost[i][1]<<endl;
    }
}


int set[6] = {-1, -1, -1, -1, -1, -1};
int parent(int x){
    int u = x, v =0;
    while(set[u] >0){
        u = set[u];
    }
    while(u!=x){
        v=set[x];
        set[x] = u;
        x=v;
    }
    return u;
}

void join(int u, int v){
    if(set[u]<set[v]){
        set[u]+=set[v];
        set[v] = u;
    }else{
        set[v]+= set[u];
        set[u] = v;
    }
}

void krushkals(int arr[][6], int n){
    int min = I;
    int cost[6][2] = {0};
    int IN[6] = {0};
    int u =0, v =0;
    int i =0;
    int k =0;
    while(i<n-1){
        min = I;
        for(int j =0;j<n;j++){
            if(IN[j] == 0 && arr[2][j]< min){
                min = arr[2][j];
                u = arr[0][j];
                v = arr[1][j];
                k = j;
            }
        }
        if(parent(u) != parent(v)){
            cost[i][0] = u;
            cost[i][1] = v;
            join(u, v);
            i++;
        }
        IN[k] =1;

    }
    for(int a = 0;a<n-1;a++){
        cout<<cost[a][0]<<" "<<cost[a][1]<<endl;
    }
}

vector<int> dijkastra(vector<pair<int, int>> v, int n, int source){
    int dis[n];
    for(int i =0;i<n;i++){
        dis[i] = INT32_MAX;
    }
    dis[source] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, source});
    while(!pq.empty()){
        int p = pq.top().second;
        pq.pop();
        for(auto a: v){
            
        }
    }


}

int main(){
    








    // int ht[10];
    // for(int i =0;i<10;i++){
    //     ht[i] = -1;
    // }
    // linearInsert(ht, 12);
    // linearInsert(ht, 2);
    // linearInsert(ht, 3);
    // linearInsert(ht, 22);
    // linearInsert(ht, 18);
    // for(int a:ht){
    //     cout<<a<<" ";
    // }
    // cout<<"\n"<<search(ht, 18)<<" "<<search(ht, 22)<<endl;
}