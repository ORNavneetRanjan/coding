#include <iostream>
#include <vector>
using namespace std;

int find(int parent[], int node){
    while(parent[node] != node){
        node = parent[node];
    }
    return node;
}

void unionFind(int parent[], int head, int child){
    int parentHead = find(parent, head);
    int parentChild = find(parent, child);
    parent[parentChild] = parentHead;
}

void printParents(int parent[], int n){
    for(int i = 0; i < n; i++){
        cout << parent[i] << " ";
    }
    cout << endl;
}

int main(){

    // ---------------- Test Case 1 ----------------
    cout << "Test Case 1: Simple Union\n";
    int parent1[5];

    for(int i = 0; i < 5; i++)
        parent1[i] = i;

    unionFind(parent1, 0, 1);

    cout << "Parent array: ";
    printParents(parent1, 5);

    cout << "Find(0): " << find(parent1,0) << endl;
    cout << "Find(1): " << find(parent1,1) << endl;

    cout << endl;

    // ---------------- Test Case 2 ----------------
    cout << "Test Case 2: Multiple Unions\n";
    int parent2[5];

    for(int i = 0; i < 5; i++)
        parent2[i] = i;

    unionFind(parent2, 0, 1);
    unionFind(parent2, 1, 2);
    unionFind(parent2, 3, 4);

    cout << "Parent array: ";
    printParents(parent2, 5);

    cout << "Find(2): " << find(parent2,2) << endl;
    cout << "Find(4): " << find(parent2,4) << endl;

    cout << endl;

    // ---------------- Test Case 3 ----------------
    cout << "Test Case 3: Connectivity Check\n";
    int parent3[6];

    for(int i = 0; i < 6; i++)
        parent3[i] = i;

    unionFind(parent3, 0, 1);
    unionFind(parent3, 2, 3);
    unionFind(parent3, 1, 3);

    if(find(parent3,0) == find(parent3,3))
        cout << "0 and 3 are Connected\n";
    else
        cout << "0 and 3 are Not Connected\n";

    cout << endl;

    // ---------------- Test Case 4 ----------------
    cout << "Test Case 4: No Union\n";
    int parent4[4];

    for(int i = 0; i < 4; i++)
        parent4[i] = i;

    cout << "Parent array: ";
    printParents(parent4, 4);

    cout << "Find(0): " << find(parent4,0) << endl;
    cout << "Find(3): " << find(parent4,3) << endl;

    cout << endl;

    // ---------------- Test Case 5 ----------------
    cout << "Test Case 5: Larger Set\n";
    int parent5[7];

    for(int i = 0; i < 7; i++)
        parent5[i] = i;

    unionFind(parent5, 0, 1);
    unionFind(parent5, 1, 2);
    unionFind(parent5, 3, 4);
    unionFind(parent5, 5, 6);
    unionFind(parent5, 2, 4);

    cout << "Parent array: ";
    printParents(parent5, 7);

    cout << "Find(4): " << find(parent5,4) << endl;
    cout << "Find(6): " << find(parent5,6) << endl;

    return 0;
}