#include <iostream>
using namespace std;
struct element{
    int i;
    int j;
    int x;
};

struct Sparse{
    int m;
    int n;
    int num;
    element *ele;
};

void create(struct Sparse *s){
    cout<<"Enter Dimensions ";
    cin>>s->m>>s->n;
    cout<<"Number of non-zero ";
    cin>>s->num;
    s->ele = new element[s->num];
    cout<<"Enter all non-zero elements"<<endl;
    for(int i =0;i<s->num;i++){
        cin>>s->ele[i].i>>s->ele[i].j>>s->ele[i].x;

    }
}

void display(struct Sparse s){
    int k =0;
    for(int i =0;i < s.m;i++){
        for(int j =0;j<s.n;j++){
            if(i == s.ele[k].i && j == s.ele[k].j){
                cout<<s.ele[k++].x<<" ";
            }else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

struct term{
    int coef;
    int exp;
};

struct Poly{
    int n;
    term* t;
};

void create(Poly* p){    
    cout<<"Number of terms: ";
    cin>>p->n;
    p->t = new term[p->n];
    cout<<"Enter all terms\n";
    for(int i =0;i<p->n;i++){
        cout<<"coefficient "<<i<<" ";
        cin>>p->t[i].coef;
        cout<<"exponent "<<i<<" ";
        cin>>p->t[i].exp;
    }
}

void display(Poly p){
    for(int i=0;i<p.n;i++){
        cout<<p.t[i].coef<<" * x^"<<p.t[i].exp;
        if(i != p.n-1){
            cout<<" + ";
        }
    }
    cout<<endl;
}

Poly add(Poly p1, Poly p2){
    Poly p ;
    p.n = p1.n + p2.n;
    p.t = new term[p.n];
    int i, j, k =0;
    while(i<p1.n && j<p2.n){
        if(p1.t[i].exp > p2.t[j].exp){
            p.t[k++] = p1.t[i++];
        }else if(p1.t[i].exp < p2.t[j].exp){
            p.t[k++] = p2.t[j++];
        }else{
            p.t[k].exp = p1.t[i].exp;
            p.t[k++].coef = p1.t[i++].coef + p2.t[j++].coef;
        }
    }
    for(;i<p1.n;i++)p.t[k++] = p1.t[i];
    for(;j<p2.n;j++)p2.t[k++] = p2.t[j];
    return p;

}

struct Node{
    int data;
    Node* next;
};

Node* create(int A[], int n){
    struct Node* first, *last, *t;
    first = new Node;
    first->data = A[0];
    first->next = nullptr;
    last = first;
    for(int i =1;i<n;i++){
        t = new Node;
        t->data = A[i];
        t->next = nullptr;
        last->next = t;
        last = last->next;
    }
    return first;
}

void display(struct Node* p){
    Node* new1 = p;
    while(new1 != nullptr){
        cout<<new1->data<<" ";
        new1= new1->next;
    }
    cout<<endl;
}

int countLength(struct Node* p){
    int count =0;
    while(p != NULL){
        count++;
        p= p->next;
    }
    return count;
}

int sumAll(struct Node* p){
    int sum = 0;
    while(p!=NULL){
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int RsumAll(struct Node* p){
    if(p == NULL){
        return 0;
    }else{
        return p->data + RsumAll(p->next);
    }

}

bool Search(struct Node* p, int key){
    if(p == nullptr){
        return false;
    }
    if(p->data == key){
        return true;
    }
    Search(p->next, key);
}

Node* Lsearch(Node* p, int key){
    while(p->next != NULL){
        if(p->data == key){
            return p;
        }
        p = p->next;
    }
    return nullptr;
}

Node* Insert(Node* start, int index, int x){
    if(index <0 || index > countLength(start)){
        return start;
    }
    Node* node1 = new Node;
    node1->data = x;
    if(index ==0){
        node1->next = start;
        start = node1;
    }else{
        Node* node2 = start;
        for(int i=0;i<index-1;i++){
            node2 = node2->next;
        }
        node1->next = node2->next;
        node2->next = node1;
    }
    return start;
}

Node* sortedInsert(Node* start, int x){
    Node* node1 = new Node;
    node1->data = x;
    if(start == nullptr || start->data >= x){
        node1->next = start;
        start = node1;
    }else{
        Node* node2 = start;
        Node* node3 = nullptr;
        while(node2 != nullptr && node2->data < x){
            node3 = node2;
            node2 = node2->next;
        }
        node1->next = node2;
        node3->next = node1;
    }
    return start;
}

Node* Delete(Node* start, int index){
    Node* node1 = start;
    if(index == 0){
        start = start->next;
        delete node1;
    }else{
        Node* node2 = nullptr;
        for(int i = 0;i<index && node1;i++){
            node2 = node1;
            node1= node1->next;
        }
        node2->next = node1->next;
        delete node1;
    }
    return start;
}

Node* removeDubb(Node* start){
    Node* p = start->next;
    Node* q = start;
    while(p != nullptr){
        if(q->data == p->data){
            q->next = p->next;
            p = p->next;
        }else{
            p = p->next;
            q = q->next;
        }
    }
    return start;
}

Node* Reverse1(Node* start){
    int arr[countLength(start)];
    Node* node1 = start;
    int count = 0;
    while(node1 != nullptr)
    {
        arr[count] = node1->data;
        count++;
        node1 = node1->next;
    }
    node1 = start;
    count-=1;
    while(node1 != nullptr)
    {
        node1->data = arr[count];
        count--;
        node1 = node1->next;
    }
    return start;
}

Node* Reverse2(Node* start){
    Node* p = start;
    Node* q = nullptr, *r;
    while(p != nullptr){
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    return q;
}

Node* Reverse3(Node* q, Node* p){
    static Node* a;
    if(p){
        Reverse3(p, p->next);
        p->next = q;
    }else{
        a = q;
    }
    return a;

}

Node* Merge(Node* first, Node* second){
    Node* third= nullptr;
    if(first->data < second->data){
        third = first;
        first = first->next;
        third->next = nullptr;
    }else{
        third = second;
        second = second->next;
        third->next = nullptr;
    }
    Node *last = third;
    while(first  && second ){
        if(first->data < second->data){
            last->next = first;
            first = first->next;
            last = last->next;
            last->next = nullptr;
        }else{
            last->next = second;
            second = second->next;
            last = last->next;
            last->next = nullptr;
        }
    }
    if(first != nullptr){
        last->next = first;
    }
    if(second != nullptr){
        last->next = second;
    }
    
    return third;
}
int checkLoop(Node* start){
    Node *p, *q;
    p = q = start;
    do{
        p = p->next;
        q = q->next;
        q = q ? q->next:q;
    }while(p && q && p!=q);
    if(p==q){
        return 1;
    }else{
        return 0;
    }
}

Node* createCircular(int arr[], int n){
    if(n <= 0){
        return nullptr;
    }
    Node* start = new Node;
    Node* node1=nullptr;
    
    start->data = arr[0];
    start->next = start;
    node1 = start;
    for(int i =1;i<n;i++){
        Node* node2 = new Node;
        node2->data = arr[i];
        node1->next = node2;
        node2->next = start;
        node1= node1->next;
    }
    return start;

}

void Cdisplay(Node* start)
{
    if(start == nullptr){
        cout<<"empty"<<endl;
        return;
    }
    Node* node1 = start;
    do{
        cout<<node1->data<<" ";
        node1= node1->next;
    }while(node1 != start);
    cout<<endl;
}
int countNode(Node* start){
    int count = 0;
    Node* node1 = start;
    if(start == nullptr){
        return 0;
    }
    do{
        count+= 1;
        node1= node1->next;
    }while(node1 != start);
    return count;
}
Node* cInsert(Node* start, int pos, int data){
    if(pos < 0 || pos>countNode(start)){
        return start;
    }
    if(start == nullptr && pos == 0){
        Node* node1 = new Node;
        node1->data = data;
        node1->next = node1;
        start = node1;
    }else if(pos <= countNode(start)){
        Node* node1 = new Node;
        Node* node2 = start;
        node1->data = data;
        if(pos == 0 ){
            node1->next = start;
            do{
                node2 = node2->next;
            }while(node2->next != start);
            node2->next = node1;
            start = node1;
        }else{
            for(int i= 0;i<pos-1;i++){
                node2 = node2->next;
            }
            node1->next = node2->next;
            node2->next = node1;
        }
    }
    return start;
}

Node* cDelete(Node* start, int index){
    if(index<0 || index>=countNode(start)){
        return start;
    }
    Node* node1 = nullptr, *node2= nullptr;
    node1= start;
    node2 = start;
    if(index == 0){
        do{
            node2= node2->next;
        }while(node2->next != start);
        if(node2 == start){
            start = nullptr;
            delete node2;
        }else{
            node2->next = start->next;
            start = start->next;
            delete node1;
        }
    }else{
        node1 = nullptr;
        for(int i = 0;i<index;i++){
            node1 = node2;
            node2 = node2->next;
        }
        node1->next = node2->next;
        delete node2;
    }
    return start;
}

struct dNode{
    dNode* pre;
    int data;
    dNode* next;
};

dNode* dCreate(int arr[], int n){
    dNode* first = new dNode;
    dNode* node1 = nullptr, *node2 = nullptr;
    first->pre = nullptr;
    first->data = arr[0];
    first->next = nullptr;
    node1 = first;
    for(int i = 1;i<n;i++){
        node2 = new dNode;
        node2->data = arr[i];
        node2->pre = node1;
        node2->next = nullptr;
        node1->next = node2;
        node1 = node2;
    }
    return first;
}

int getLength(dNode* start){
    dNode* first = start;
    int count = 0;
    while(first != nullptr){
        first = first->next;
        count++;
    }
    return count;
}

dNode* dInsert(dNode* start, int index, int data){
    if(index < 0 || index > getLength(start)){
        return start;
    }
    dNode* node1 = new dNode;
    node1->data = data;
    if(index == 0){
        node1->pre = nullptr;
        node1->next = start;
        if(start != nullptr){
            start->pre = node1;
        }
        start = node1;
    }else{
        dNode* node2 = start;
        for(int i =0;i<index-1;i++){
            node2 = node2->next;
        }
        node1->pre = node2;
        node1->next = node2->next;
        if(node2->next != nullptr){
            node2->next->pre = node1;
        }
        node2->next = node1; 
    }
    return start;
}

void dDisplay(dNode* start){
    dNode* new1 = start;
    while(new1 != nullptr){
        cout<<new1->data<<" ";
        new1= new1->next;
    }
    cout<<endl;
}

dNode* dDelete(dNode* start, int index){
    if(index < 0 || index > getLength(start)){
        return start;
    }
    if(start == nullptr){
        cout<<"empty"<<endl;
        return start;
    }
    dNode* node1 = start;
    if(index ==0){
        start = start->next;
        if(start != nullptr){
            start->pre = nullptr;
        }
        delete node1;
    }else{
        dNode* node2 = nullptr;
        for(int i =0;i<index;i++){
            node2 = node1;
            node1 = node1->next;
        }
        node2->next = node1->next;
        if(node1->next != nullptr){
            node1->next->pre = node2;
        }
        delete node1;
    }
    return start;
}

dNode* reverse(dNode* start){
    
    dNode* node1 = start;
    dNode* node2= nullptr;
    while(node1 != nullptr){
        node2 = node1->next;
        node1->next = node1->pre;
        node1->pre = node2;
        node1= node1->pre;
        if(node1 != nullptr && node1->next == nullptr){
            start = node1;
        }
    }
    return start;
}

struct elem{
    int col;
    int data;
    elem* next;
};

void display(elem* arr[], int m, int n){
    elem* p = nullptr;
    for(int i =1;i<=m;i++){
        p = arr[i-1];
        for(int j = 1;j<=n;j++){
            if(p->col == j){
                cout<<p->data<<" ";
            }else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

elem** add(elem* arr1[], elem* arr2[], int m, int n){
    elem* first[m];
    elem* p = nullptr , *q = nullptr;
    for(int i =0;i<m;i++){
        p = arr1[i];
        q = arr2[i];
        for(int j =0;j<n;j++){
            if(p->col == j+1 && q->col == j+1){
                first[i] = new elem;
                first[i]->col = j+1;
                first[i]->data = p->data + q->data;
                first[i]->next = nullptr;
                first[i] = first[i]->next;
            }else if(p->col == j+1){
                first[i] = new elem;
                first[i]->col = j+1;
                first[i]->data = p->data;
                first[i]->next = nullptr;
                first[i] = first[i]->next;
            }else if(q->col == j+1){
                first[i] = new elem;
                first[i]->col = j+1;
                first[i]->data = q->data;
                first[i]->next = nullptr;
                first[i] = first[i]->next;
            }
        }
    }
    elem** second = first;
    return second;
}

struct stack{
    int size;
    int top;
    int *s; // array to store stack
};

stack create(){
    stack s;
    cout<<"size of the stack: ";
    cin>>s.size;
    s.top = -1;
    s.s = new int[s.size];
    return s;
}
void display(stack s){
    for(int i=s.top;i>=0;i--){
        cout<<s.s[i]<<" ";
    }
    cout<<endl;
}

void push(stack * st, int x){
    if(st->top == st->size -1){
        cout<<"overflow"<<endl;
        return;
    }
    st->s[st->top + 1] = x;
    st->top++;
}

void pop(stack* st){
    if(st->top == -1){
        cout<<"Underflow"<<endl;
        return;
    }
    cout<<"Dleted element is "<<st->s[st->top--]<<endl;
}


int main(){
    stack s;
    s = create();
    push(&s, 10);
    push(&s, 11);
    push(&s, 12);
    display(s);
    pop(&s);
    pop(&s);
    pop(&s);
    pop(&s);
    display(s);
    int m = 5;
    elem* arr[m];
    for(int i =0;i<5;i++){
        arr[i] = new elem;
        arr[i]->col = i+1;
        arr[i]->data = (i+1) * (i+1);
        arr[i]->next = nullptr;
    }
    elem* arr1[m];
    for(int i =0;i<5;i++){
        arr1[i] = new elem;
        arr1[i]->col = i+1;
        arr1[i]->data = (i+1) * (i+1);
        arr1[i]->next = nullptr;
    }
    // display(add(arr1, arr, m, m), m, m);
    // display(arr, 5, 5);

    Node* first = nullptr;
    Node* second = nullptr;
    Node* circle = nullptr;
    dNode* Dlink = nullptr;
    int A[] = {2,8,3,4,5};
    int B[] = {1,6,7,9,12};
    for(int i =0;i<5;i++){
        // first = sortedInsert(first, A[i]);
        // second = sortedInsert(second, B[i]);
        // circle = cInsert(circle, i, B[i]);
        Dlink = dInsert(Dlink, i, B[i]);
        
    }
    //Dlink = dCreate(A, 5);
    //Dlink = dInsert(Dlink, 3, 5);
    //dDisplay(Dlink);

    //display(first);display(second);
    //Node* third = createCircular(A, 5);
    //Cdisplay(third);Cdisplay(circle);
    // for(int i  = 4;i>=0;i--){
    //     circle = cDelete(circle, i);
    //     Cdisplay(circle);
    // }
    //dDisplay(reverse(Dlink));
    Solution sa;
    string haystack = "leetcode", needle = "leeto";
    sa.strStr(haystack, needle);
}

class Stack{
    private:
        Node* top;
    public:
        Stack(){
            top = nullptr;
        }
        void push(int x);
        void pop();
        void Display();

};

void Stack::push(int x){
    Node* node1 = new Node;
    if(node1 == nullptr){
        cout<<"Overflow"<<endl;
        return;
    }
    node1->data = x;
    node1->next = top;
    top = node1;
}

void Stack::pop(){
    if(top == nullptr){
        cout<<"Underflow"<<endl;
        return;
    }
    Node* node1 = top;
    top = top->next;
    cout<<node1->data<<" is deleted"<<endl;
    delete node1;
}

void Stack::Display(){
    Node* node1 = top;
    while(node1 != nullptr){
        cout<<node1->data<<" ";
        node1 = node1->next;
    }
    cout<<endl;
}
 

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.length();
        string s = "";
        string s1 = "";
        for(int i =0;haystack[i] != '\0';i++){
            int k = i;
            for(int j =0;j<n;j++){
                s += haystack[k];
                k++;
            }
            s1 = haystack.substr(i, i+n);
            cout<<s1<<" "<<s<<endl;
            if(s1 == s){
                return i;
            }
        }
        return -1;
    }
};
