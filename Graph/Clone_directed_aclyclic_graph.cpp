#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

struct Node {
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};


class Solution{
private:
    Node* dfs(Node* node, unordered_map<int, Node*>& map){
        
        if(map.count(node->val)) return map[node->val];
          
        Node* newNode = new Node(node->val);
        for(Node* neigh : node->neighbors){
            newNode->neighbors.push_back(dfs(neigh, map));
        }
        return map[node->val] = newNode;
    }

public:
    Node* cloneGraph(Node* graph){
        unordered_map<int, Node*> map;
        return dfs(graph, map);
    }

    
};

int main(){

    Solution obj;

    // -------- Test Case 1: Single Node --------
    Node* n1 = new Node(1);

    Node* clone1 = obj.cloneGraph(n1);

    cout << "Test 1:" << endl;
    cout << "Original: " << n1->val << endl;
    cout << "Clone: " << clone1->val << endl;


    // -------- Test Case 2: Two Nodes Connected --------
    Node* a = new Node(1);
    Node* b = new Node(2);

    a->neighbors.push_back(b);
    b->neighbors.push_back(a);

    Node* clone2 = obj.cloneGraph(a);

    cout << "\nTest 2:" << endl;
    cout << "Clone Node: " << clone2->val << endl;
    cout << "Neighbor: " << clone2->neighbors[0]->val << endl;


    // -------- Test Case 3: Triangle Cycle --------
    Node* t1 = new Node(1);
    Node* t2 = new Node(2);
    Node* t3 = new Node(3);

    t1->neighbors = {t2, t3};
    t2->neighbors = {t1, t3};
    t3->neighbors = {t1, t2};

    Node* clone3 = obj.cloneGraph(t1);

    cout << "\nTest 3:" << endl;
    cout << "Clone Node: " << clone3->val << endl;
    cout << "Neighbors: ";
    for(auto n : clone3->neighbors){
        cout << n->val << " ";
    }
    cout << endl;


    // -------- Test Case 4: Square Graph --------
    Node* s1 = new Node(1);
    Node* s2 = new Node(2);
    Node* s3 = new Node(3);
    Node* s4 = new Node(4);

    s1->neighbors = {s2, s4};
    s2->neighbors = {s1, s3};
    s3->neighbors = {s2, s4};
    s4->neighbors = {s1, s3};

    Node* clone4 = obj.cloneGraph(s1);

    cout << "\nTest 4:" << endl;
    cout << "Clone Node: " << clone4->val << endl;
    cout << "Neighbors: ";
    for(auto n : clone4->neighbors){
        cout << n->val << " ";
    }
    cout << endl;

}