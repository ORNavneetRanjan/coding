
// int fun(int n){
//     static int x = 0;
//     if(n>0){
//         x++;
//         return fun(n-1) + x;
//     }
//     return 0;
// }
// int main(){
//     int n = 5;
//     int r = fun(5);
//     cout<<r<<endl;
// }

// void fun(int n){
//     if(n > 0){
//         cout<<n<<" ";
//         fun(n-1);
//         cout<<"*";
//         fun(n-1);
//     }
// }
// int main(){
//     int n = 5;
//     fun(n);
// }

// void fun2(int);
// void fun1(int n){
//     if(n>0){
//         cout<<n<<" "<<endl;
//         fun2(n-1);
//     }
// }
// void fun2(int n){
//     if(n>1){
//         cout<<"*"<<n<<endl;
//         fun1(n / 2);
//     }
// }
// int main(){
//     int n = 10;
//     fun1(n);
// }

// int fun(int n, int m){
//     if(m>0){
//         m--;
//         return n*fun(n, m);
//     }
//     return 1;
// }
// int main(){
//     int n =2;
//     int m = 0;
//     cout<<fun(n, m);
// }

// int fact(int n){
//     if(n == 0){
//         return 1;
//     }
//     return n * fact(n-1);
// }

// int pow(int m, int n){
//     if(n == 0){
//         return 1;
//     }
//     if(n % 2 == 0){
        
//     }
// }

// int fact(int n){
//     if(n ==0){
//         return 1;
//     }
//     return fact(n -1) * n;
// }
// int pow(int m, int n){
//     if(n == 0){
//         return 1;
//     }else{
//         n--;
//         return pow(m, n) * m;
//     }
// }
// double taylor(int x, int d){

//     double r =  (double)pow(x, d) / fact(d);
//     if(d == 0){
//         return 1;
//     }else{
//         d--;
//         return taylor(x, d) + r;
//     }

// }
// int main(){
//     cout<<taylor(1, 3);
// }

// double taylor(int x, int d){
//     static double s = 1;
//     if(d==0){
//         return s;
//     }else{
//         s = 1 + x*s/d;
//         return taylor(x, d-1);
//     }
// }
// double taylor(int x, int d){
//     double sum = 1;
//     double num = 1;
//     double den = 1;
//     for(int i =1;i<=d;i++){
//         num *= x;
//         den *= i;
//         sum += num / den;
//     }
//     return sum;
// }

// int fib(int n){
//     if(n <= 1){
//         return n;
//     }
//     return fib(n - 2) + fib(n - 1);
// }

// int loop(int n){
//     int first =0, last = 1, sum = 0; 
//     if(n<=1){
//         return n;
//     }
// //     for(int i=2;i<=n;i++){
// //         sum = first + last;
// //         first = last;
// //         last = sum;       
// //     }
// //     return sum;
// // }

// int arr[10] = {-1};

// int mfib(int n){
//     if(n<=1){
//         arr[n] = n;
//         return n;
//     }else{
//         if(arr[n -2] == -1){
//             arr[n-2] = mfib(n-2);
//         }
//         if(arr[n-1] == -1){
//             arr[n -1] = mfib(n-2);
//         }
//         arr[n] = arr[n-1] + arr[n-2];
//         return arr[n];
//     }
// }
// int main(){
//     for(int j =0;j<10;j++){
//         arr[j] = -1;
//     }
//     // for(int i=0;i<=5;i++){
//     //     cout<<fib(i)<<endl;
//     // }
//     for(int i=0;i<=9;i++){
//         cout<<mfib(i)<<endl;
//     }
// }

// int fact(int n){
//     if(n ==0){
//         return 1;
//     }
//     return n * fact(n - 1);
// }

// int C(int n, int r){
//     if(r == 0 || r == n){
//         return 1;
//     }
//     return C(n -1, r-1) + C(n-1, r);
// }
 
// int nCr(int n, int r){
//     int num = 1, den =1;
//     for(int i=1;i<=n;i++){
//         num *= i;
//         if(i<=r){
//             den *= i;
//         }
//         if(i<=n-r){
//             den *= i;
//         }
//     }
//     return num/den;
// }
// int main(){
//     cout<<C(3,2);
//     cout<<nCr(5, 2);
// }

// void TOH(int n, int A, int B, int C){
//     if(n > 0){
//         TOH(n-1, A, C, B);
//         printf("for %d to %d", A, C);
//         cout<<endl;
//         TOH(n-1, B, A, C);
//     }
// }

// int main(){
//     TOH(4 , 1, 2, 3);   
// }

// int main(){
//     int A[3][4] = {{2, 3, 4, 5}, {1, 3, 6, 7}, {1, 6, 6,7}};
//     int *B[3];
//     int **C;
//     B[0] = new int[4];
//     B[1] = new int[4];
//     B[2] = new int[4];
//     C = new int*[3];
//     C[0] = new int [4];
//     C[1] = new int[4];
//     C[2] = new int[4];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             B[i][j] = j++;
//             C[i][j] = j++;
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             cout<<B[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             cout<<C[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// #include <iostream>
// using namespace std;


// void addElemet(int *arr, int n, int p){
//     arr[n] = p;
// }
// void insert(int *arr, int n, int m, int p){
//     for(int i=n;i>m;i--){
//         arr[i] = arr[i-1];
//     }
//     arr[m] = p;
// }

// int linearSearch(int arr[], int n, int p){
//     int count = 0;
//     for(int i=0;i<n;i++){
//         count++;
//         if(arr[i] == p){
//             cout<<"count = "<<count<<endl;
//             return i;
//         }
//     }
//     cout<<"count = "<<count<<endl;
//     return -1;
// }

// int binarySearch(int arr[], int n, int p){
//     int first = 0, last = n-1;
//     int count = 0;
//     while(last > first){
//         int mid = (first + last) / 2;
//         count++;
//         if(arr[mid] == p){
//             cout<<count<<endl;
//             return mid;
//         }else if(arr[mid] > p){
//             last = mid-1;
//         }else{
//             first = mid+1;
//         }
//     }
//     cout<<count<<endl;
//     return -1;
// }

// int rBinarySearch(int arr[], int first, int p, int last){
//     int mid = (first + last) / 2;
//     if(first > last){
//         return -1;
//     }
//     if(arr[mid] == p){
//         return mid;
//     }else if(arr[mid] > p){
//         return rBinarySearch(arr, first, p, mid -1);
//     }else{
//         return rBinarySearch(arr, mid +1, p, last);
//     }

// }

// void deletion(int *arr, int &n,int p){
//     for(int i=0;i<n;i++){
//         if(arr[i] == p){
//             for(int j =i;j<n-1;j++){
//                 arr[j] = arr[j+1];
//             }
//             n--;
//             break;
//         }
//     }
// }

// void reverse(int *arr, int n){
//     for(int i =0;i<n/2;i++){
//         int p = arr[i];
//         arr[i] = arr[n-1-i];
//         arr[n-1-i] = p;
//     }
// }

// int* reverse1(int arr[], int n){
//     int *B = new int[n];
//     for(int i=0;i<n;i++){
//         B[i] = arr[n-1-i];
//     }
//     return B;
// }

// void leftShift(int *arr, int n, int p){
//     for(int i=0;i<p;i++){
//         int p = arr[0];
//         for(int j=0;j<n-1;j++){
//             arr[j] = arr[j+1];
//         }
//         arr[n-1] = p;
//     }
// }

// void insert1(int *arr, int n, int p){
//     int i = n-2;
//     while(i>=0 && arr[i] > p){
//         arr[i+1] = arr[i];
//         i--;
//     }
//     arr[i+1] = p;
    
// }

// int isSorted(int arr[], int n){
//     int b = 0;
//     for(int i=0;i<n-1;i++){
//         if(arr[i] > arr[i+1]){
//             return 1;
//         }
//     }
//     return b;
// }

// void REarrange(int* arr, int n){
//     int i =0,j=n-1;
//     while(i<j){
//         while(arr[i] <0){
//             i++;
//         }
//         while(arr[j] >= 0){
//             j--;
//         }
//         if(i<j){
//             int p = arr[i];
//             arr[i] = arr[j];
//             arr[j] = p;
//         }
//     }
// }
// void Display(int arr[], int n){
//     for(int i =0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int* Merge(int arr1[],int n1, int arr2[], int n2){
//     int i =0, j=0, k=0;
//     int *arr = new int[n1+n2];
//     while(i<n1 && j<n2){
//         if(arr1[i]<arr2[j]){
//             arr[k]=arr1[i];i++;
//         }else{
//             arr[k] = arr2[j];j++;
//         }
//         k++;
//     }
//     for(;i<n1;i++){
//         arr[k] = arr1[i];
//         k++;
//     }
//     for(;j<n2;j++){
//         arr[k] = arr2[j];
//         k++;
//     }
//     return arr;
// }

// int* Union(int arr1[], int n1, int arr2[], int n2){
//     int* arr = new int[n1+n2];
//     int k =0;
//     bool b = true;
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n2;j++){
//             if(arr1[i] == arr2[j]){
//                 b = false;
//                 break;
//             }
//         }
//         if(b){
//             arr[k] = arr1[i];
//             k++;
//         }
//         b = true;
//     }
//     for(int j=0;j<n2;j++){
//         arr[k] = arr2[j];
//         k++;
//     }
//     return arr;
// }


// class Array{
//     int *A;
//     int size;
//     int length;
//     public:
//     Array(){
//         size = 10;
//         A = new int[10];
//         length = 0;
//     }
//     Array(int s){
//         size = s;
//         A = new int[s];
//         length = 0;
//     }
//     ~Array(){
//         delete []A;
//     }
//     void Display();
//     void insert(int, int);
//     int Delete(int);

// };
// void Array::Display(){
//     for(int i=0;i<length;i++)
//     cout<<A[i]<<" ";
//     cout<<endl;
// }

// void Array::insert(int index, int x){
//     if(index >= 0 && index <= length){
//         for(int i = length-1;i>=index;i--){
//             A[i+1] = A[i];
//         }
//         A[index] = x;
//         length++;
//     }
// }

// int Array::Delete(int index){
//     for(int i =index;i<length-1;i++){
//         A[i] = A[i+1];
//     }
//     length--;
//     return A[index];
// }

// void pri(int arr[], int n, int sum){
//     int i =0, j = n-1;
//     while(i < j){
//         if(arr[i] + arr[j] == sum){
//             cout<<arr[i]<<" + "<<arr[j]<<" = "<<sum<<endl;
//             i++;
//             j--;
//         }else if(arr[i] + arr[j] > sum){
//             j--;
//         }else if(arr[i] + arr[j] < sum){
//             i++;
//         }
//     }
// }
// int isValidString(char* arr){
//     int i =0;
//     int b = 0;
//     while(arr[i] != '\0'){
//         if((arr[i] >= 65 && arr[i] <= 90) || (arr[i] >= 97 && arr[i] <= 122) || (arr[i] >= 48 && arr[i] <=57)){
//             b = 0; 
//         }else{
//             b= 1;
//             break;
//         }
//         i++;
//     }
//     return b;
// }
// void reverseString(char* arr){
//     int i =0, j = 0;
//     char t = ' ';
//     for(i=0;arr[i+1] != '\0';i++);
//     while(j < i){
        
//         t  = arr[i];
//         arr[i] = arr[j];
//         arr[j] = t;
//         i--;
//         j++;
//     }
// }
// void toLowerCase(char *r){
//     int i =0;
//     while(r[i+1] != '\0'){
//         if(r[i] >= 'A' && r[i] <= 'Z'){
//             r[i] += 32;
//         }
//         i++;
//     }
// }
// void compareString(char* arr1, char* arr2){
//     int i =0;
//     bool b = true;
//     toLowerCase(arr1);
//     toLowerCase(arr2);
//     while(arr1[i] != '\0' && arr2[i] != '\0'){
//         if(arr1[i] != arr2[i]){
//             cout<<"String are different"<<endl;
//             if(arr1[i] > arr2[i]){
//                 cout<<arr1<<" is greater"<<endl;
//             }else{
//                 cout<<arr2<<" is greater"<<endl;
//             }
//             b = false;
//             break;
//         }
//         i++;
//     }
//     if(b){
//         cout<<"Both are equal"<<endl;
//     }
// }

// void getFrequency(char* arr){
//     int arr1[26] = {0};
//     toLowerCase(arr);
//     int i =0;
//     char c = 97;
//     while(arr[i] != '\0'){
//         if(arr[i] >= 97 && arr[i] <= 122){
//             arr1[arr[i] -97] += 1; 
//         }
//         i++;
//     }
//     for(int j =0;j<26;j++){
//         if(arr1[j] != 0){
//             c = j+97;
//             cout<<c<<" -> "<<arr1[j]<<endl;
//         }
//     }
// }
// int main(){
//     char name[10] = {'N', 'a', 'v', 'n', 'e', 'e', 't'};
//     int i =0;
//     while(name[i] != '\0'){
//         i++;
//     }
//     cout<<name<<endl;
//     char title[12] = {'R', 'A', 'N', 'J' ,'A', 'N', 'k', 'u', 'm', 'a', 'r'};
//     for(int i =0;title[i] != '\0';i++){
//         if(title[i]>=65 && title[i] <= 91){
//             title[i] += 32;
//         }else if(title[i]>= 97 && title[i] <= 122){
//             title[i] -= 32;
//         }
//     }
//     cout<<title<<endl;
//     int Vcount  =0, Ccount =0;
//     char A[20] = "How are you Navneet";
//     char B[20] = "How are you navneet";
//     for(int i =0;A[i] != '\0';i++){
//         if(A[i] == 'a' || A[i] == 'e' || A[i] == 'i' ||A[i] == 'o' ||A[i] == 'u' ||
//         A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U'){
//             Vcount++;
//         }else if((A[i] >= 65 && A[i] <= 90) || (A[i] >= 97 && A[i] <= 122)){
//             Ccount++;
//         }
//     }
//     cout<<Vcount<<" "<<Ccount<<endl;
//     cout<<isValidString(A)<<endl;
//     //reverseString(A);
//     cout<<A<<endl;
//     compareString(A, B);
//     getFrequency(A);
// }

#include <iostream>
using namespace std;
void permutation(char arr[], int k){
    static int arr1[10] = {0};
    static char arr2[10];
    if(arr[k] == '\0'){
        arr2[k] = '\0';
        cout<<arr2<<endl;
    }else{
        for(int i =0;i<k;i++){
            if(arr1[i] == 0){
                arr2[i] = arr[i];
                arr1[i] = 1;
                permutation(arr2, k+1);
                arr1[i] = 0;
            }
        }
    }
}
class lowerTriangle{
    private:
    int n;
    int* arr;
    public:
    lowerTriangle(int a){
        n = a;
        int l = n*(n+1) / 2;
        arr = new int[l];
    }
    void set(int i, int j, int x);
    int get(int i, int j);
    void Display();
    ~lowerTriangle(){
        delete[] arr;
    }
};

void lowerTriangle::set(int i, int j, int x){
    if(i>=j){
        int l = i*(i-1) / 2;
        arr[l + j - 1] = x;
    }
}

int lowerTriangle::get(int i, int j){
    if(i>=j){
        int l = i*(i-1) / 2;
        return arr[l + j - 1];
    }
    return 0;
}

void lowerTriangle::Display(){
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(i>=j){
                int l = i*(i-1) / 2;
                cout<< arr[l + j - 1]<<" ";
            }else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

int precedence(char c){
    if(c == '+' || c == '-'){
        return 1;
    }else if(c == '*' || c == '/'){
        return 2;
    }else if(c == '^'){
        return 3;
    }
	return -1;
}

bool isOperand(char c){
    if(c == '+' || c == '-' || c == '*' 
    || c == '/' || c == '^' || c == '(' || c == ')'){
        return true;
    }
    return false;
}

char associativity(char c) {
	if (c == '^')
		return 'R';
	return 'L'; // Default to left-associative
}
#include <stack>
#include <string>
void infixToPostfix(string s){
    stack<char> stack;
	int i =0, j =0;
	char arr[s.length()+1];
	while(s[i] != '\0'){
		if(!isOperand(s[i])){
			arr[j++] = s[i++];
		}else{
			if(s[i] == '('){
				stack.push(s[i++]);
			}else if(s[i] == ')'){
				while(stack.top() != '('){
					arr[j++] = stack.top();
					stack.pop();
				}
				stack.pop();
				i++;
			}else{
				while(!stack.empty() && 
                precedence(s[i]) < precedence(stack.top()) || 
                !stack.empty() && 
                precedence(s[i]) == precedence(stack.top()) && 
                associativity(s[i]) == 'L'){

					arr[j++] = stack.top();
					stack.pop();
				}
				stack.push(s[i++]);
			}
		}
	}
	while(!stack.empty()){
		arr[j++] = stack.top();
		stack.pop();
	}
	arr[j] = '\0';
	for(int i =0;arr[i] != '\0';i++){
		cout<<arr[i];
	}
	cout<<endl;
}

void eval(char* c){
    stack<int> stack;
    int x, y, r;
    for(int i =0;c[i] != '\0';i++){
        if(!isOperand(c[i])){
            stack.push(c[i] - '0');
        }else{
            x = stack.top() - '0';
            stack.pop();
            y = stack.top() - '0';
            switch(c[i]){
                case '+':{
                    r = y + x;
                    stack.push(r);
                }
                case '-':{
                    r = y - x;
                }
                case '*':{
                    r = y * x;
                }
                case '/':{
                    r = y / x;
                }
                case '^':{
                    r = y ^ x;
                }
            }
            stack.push(r);
        }
    }
    cout<<r<<endl;
}

// struct queue{
//     int size;
//     int front;
//     int rear;
//     int *q;
// };

// queue create(int s){
//     queue q;
//     q.size = s;
//     q.front = q.rear = -1;
//     q.q = new int[s];
//     return q;
// }

// void enqueue(queue* q, int data){
//     if(q->rear == q->size -1){
//         cout<<"overflow"<<endl;
//         return ;
//     }
//     q->rear++;
//     q->q[q->rear] = data;   
// }

// void dequeue(queue* q){
//     if(q->front == q->rear){
//         cout<<"Queue is empty"<<endl;
//         return;
//     }
//     q->front++;
//     int x = q->q[q->front];
//     cout<<x<<" is deleted from the queue"<<endl;
// }

// void display(queue q){
//     for(int i =q.front+1;i<q.rear+1;i++){
//         cout<<q.q[i]<<" ";
//     }
//     cout<<endl;
// }
#include <queue>
struct tNode{
    tNode* left;
    int data;
    tNode* right;
};

tNode* create(){
    tNode* p, *t;
    int x = 0;
    tNode* root = new tNode;
    queue<tNode*> q;
    cout<<"Enter root: ";
    cin>>root->data;
    root->left = root->right = nullptr;
    q.emplace(root);
    while(!q.empty()){
        p = q.front();
        q.pop();
        cout<<"Enter left child of "<<p->data<<" ";
        cin>>x;
        if(x != -1){
            t = new tNode;
            t->data = x;
            t->left = t->right = nullptr;
            p->left = t;
            q.emplace(t);
        }
        cout<<"Enter right child of "<<p->data<<" ";
        cin>>x;
        if(x != -1){
            t = new tNode;
            t->data = x;
            t->left = t->right = nullptr;
            p->right = t;
            q.emplace(t);
        }
    }
    return root;
}

void preOrder(tNode* p){
    stack<tNode*> st;
    while(p || !st.empty()){
        if(p){
            cout<<p->data<<" ";
            st.emplace(p);
            p = p->left;
        }else{
            p = st.top();
            st.pop();
            p = p->right;
        } 
    } 
    cout<<endl; 
}

void postOrder(tNode* p){
    stack<long int> st;
    long int x =0;
    while(p || !st.empty()){
        if(p){
            st.push((long int)p);
            p = p->left;
        }else{
            x = st.top();
            st.pop();
            if(x >0){
                st.push(-x);
                p = ((tNode*) x)->right;
            }else{
                cout<<((tNode*)(-1 * x))->data<<" ";
                p = nullptr;
            }
        }
    }
    cout<<endl;
}

void LevelOrder(tNode* p){
    queue<tNode*> q;
    cout<<p->data<<" ";
    q.push(p);
    while(!q.empty()){
        p = q.front();
        q.pop();
        if(p->left){
            cout<<p->left->data<<" ";
            q.push(p->left);
        }
        if(p->right){
            cout<<p->right->data<<" ";
            q.push(p->right);
        }
    }
}
void inOrder(tNode* p){
    stack<tNode*> st;
    while(p || !st.empty()){
        if(p){
            st.push(p);
            p = p->left;
        }else{
            p = st.top();
            cout<<p->data<<" ";
            st.pop();
            p = p->right;
        } 
    } 
    cout<<endl; 
}

int count(tNode* p){
    if(p){
        int x = count(p->left);
        int y = count(p->right);
        return x + y + 1;
    }
    return 0;
}

int height(tNode* p){
    if(p == nullptr){
        return 0;
    }
    int x = height(p->left);
    int y = height(p->right);
    if(x > y){
        return x + 1;
    }else{
        return y+1;
    }
}



tNode* insert(tNode* root, int data){
    tNode* p = root;
    if(root == nullptr){
        root = new tNode;
        root->data = data;
        root->left = root->right = nullptr;
        return root;
    }
    tNode* r = nullptr;
    while(p != nullptr){
        if(p->data == data){
            return root;
        }
        r= p;
        if(data<p->data){
            p = p->left;
        }else{
            p = p->right;
        }
    }
    p = new tNode;
    p->data = data;
    p->left = p->right = nullptr;
    if(data < r->data){
        r->left = p;
    }else{
        r->right = p;
    }
    return root;
}

 

bool search(tNode* root, int data){
    if(root == nullptr){
        return false;
    }
    tNode* p = root;
    while(p!= nullptr){
        if(p->data > data){
            p = p->left;
        }else if(p->data > data){
            p = p->right;
        }else{
            return true;
        }
    }
    return false;
}
tNode* rInsert(tNode* start, int data){
    if(start == nullptr){
        start = new tNode;
        start->data = data;
        start->left = start->right = nullptr;
    }else if(start->data > data){
        start->left = rInsert(start->left, data);
    }else if(start->data < data){
        start->right = rInsert(start->right, data);
    }
    return start;
}

tNode* InPre(tNode* start){
    while(start && start->right != nullptr){
        start = start->right;
    }
    return start;
}

tNode* InSucc(tNode* start){
    while(start && start->left != nullptr){
        start = start->left;
    }
    return start;
}

tNode* rDelete(tNode* start, int data){
    if(start->data == data){
        if(start->left == nullptr){
            tNode* p = start;
            start=start->right;
            delete p;
        }else if(start->right == nullptr){
            tNode* p = start;
            start = start->right;
            delete p;
        }else{
            if(height(start->right) > height(start->left)){
                tNode* q = InPre(start->left);
                start->data = q->data;
                start->left = rDelete(start->left, q->data);
            }else{
                tNode* q = InPre(start->right);
                start->data = q->data;
                start->left = rDelete(start->right, q->data);
            }
        }
    }else if(start->data > data){
        start->left = rDelete(start->left, data);
    }else {
        start->right = rDelete(start->right, data);
    }
    return start;
}

tNode* iDelete(tNode* start, int data){
    if(start->data == data){
        if(start->left == nullptr){
            tNode* node = start;
            start = start->right;
            delete node;
        }else if(start->right == nullptr){
            tNode* node = start;
            start=start->left;
            delete node;
        }else{
            tNode* node = start;
            tNode* node1 = start->left;
            tNode* node2= start->right;
            while(node2->left != nullptr){
                node2 = node2->left;
            }
            node2->left = node1;
            start= start->right;
            delete node;
        }
    }else{
        tNode* node = start;
        while(node->data != data){
            if(node->data > data){
                node = node->left;
            }else{
                node = node->right;
            }
        }
        node = iDelete(node, data);
    }
    return start;
}

struct aNode{
    aNode* left;
    int data;
    int height;
    aNode* right;
};
int NodeHeight(aNode* start){
    int h1 =0,h2 =0;
    h1=start && start->left ? start->left->height:0;
    h2=start && start->right ? start->right->height:0;
    return h1>h2 ? h1+1:h2+1;
}
int balanceFactor(aNode* start){
    int h1 =0,h2 =0;
    h1=start && start->left ? start->left->height:0;
    h2=start && start->right ? start->right->height:0;
    return h1-h2;
}

aNode* LLRotation(aNode* start){
    aNode* p1 = start->left;
    start->left = p1->right;
    p1->right = start;
    
    start->height = NodeHeight(start);
    p1->height = NodeHeight(p1);
    return p1;
}

aNode* LRRotation(aNode* start){
    aNode* p1 = start->left;
    aNode* p2 = p1->right;
    p1->right = p2->left;
    start->left = p2->right;
    p2->left = p1;
    p2->right = start;

    p1->height = NodeHeight(p1);
    start->height = NodeHeight(start);
    p2->height = NodeHeight(p2);
    return p2;
}

aNode* RRRotation(aNode* start){
    aNode* p1 =start->right;
    start->right = p1->left;
    p1->left = start;
    start->height = NodeHeight(start);
    p1->height = NodeHeight(p1);
    return p1;
}

aNode* RLRotation(aNode* start){
    aNode* p1 = start->right;
    aNode* p2 = p1->left;
    p1->left = p2->right;
    start->right = p2->left;
    p1->height = NodeHeight(p1);
    start->height = NodeHeight(start);
    p2->height = NodeHeight(p2);
    return p2;
}

aNode* rInsert(aNode* start, int data){
    if(start==nullptr){
        start = new aNode;
        start->data = data;
        start->left = start->right = nullptr;
        start->height = 1;
    }else{
        if(data < start->data){
            start->left = rInsert(start->left, data);
        }else{
            start->right = rInsert(start->right, data);
        }
    }
    start->height = NodeHeight(start);
    if(balanceFactor(start) == 2 && balanceFactor(start->left)== 1){
        start = LLRotation(start);
    }else if(balanceFactor(start) == 2 &&  balanceFactor(start->left) == -1){
        cout<<"lr is called"<<endl;
        start = LRRotation(start);
    }else if(balanceFactor(start) == -2 && balanceFactor(start->right)== -1){
        start = RRRotation(start);
    }else if(balanceFactor(start) == -2 && balanceFactor(start->right)== 1){
        start = RLRotation(start);
    }
    return start;
}

void display(aNode* start){
    if(start){
        cout<<start->data<<" "<<balanceFactor(start)<<" "<<start->height<<endl;
        display(start->left);
        display(start->right);
    }
}

void Insert(int arr[], int n){
    int i = n, tem = 0;
    tem = arr[i];
    while(i>1 && tem >= arr[i/2]){
        arr[i] = arr[i/2];
        arr[i/2] = tem;
        i = i /2;
        
    }
}

int Delete(int arr[], int n){
    int i =1, tem, j = 2*i;
    tem = arr[n];
    arr[n] = arr[1];
    arr[1] = tem;
    while(j<n-1){
       if(arr[j] < arr[j+1])
        j =  j+1;
       if(arr[i]<arr[j]){
            tem = arr[i];
            arr[i] = arr[j];
            arr[j] = tem;
            i = j;
            j = 2*j;
       }
       else{
        break;
       }
    }
    return arr[n];
}
void swap(int *a, int *b){
    int x = *a;
    *a = *b;
    *b =x;
}

void bubbleSort(int arr[]){
    int n = 10;
    for(int i =0;i<n-1;i++){
        int flag = 0;
        for(int j =0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }
}

void insertionSort(int arr[], int n){
    int j =0;
    for(int i =1;i<n;i++){
        int x = arr[i];
        for(j =i-1;j>=0;j--){
           if(arr[j] > x){
            arr[j+1] = arr[j];
           }else{
            break;
           }
        }
        arr[j+1] = x;
    }
    
}

void selectionSort(int arr[], int n){
    int j = 0, k =0;
    for(int i =0;i<n-1;i++){
        k = i;
        for(j=i+1;j<n;j++){
            if(arr[k] > arr[j]){
                k = j;
            }
        }
        swap(arr[i], arr[k]);
    }
}
int partitionArray(int arr[], int beg, int end){
    int i = beg, j = end;
    int pivot = arr[i];
    i++;
    while(i<=j){
        if(arr[i] > pivot && arr[j] < pivot){
            swap(arr[i], arr[j]);
        }
        if(arr[j] >= pivot){
            j--;
        }
        if(arr[i] < pivot){
            i++;
        }
    }
    swap(arr[beg], arr[j]);
    return j;
}

void quickSort(int arr[], int beg, int end){
    if(beg < end){
        int a = partitionArray(arr, beg, end);
        quickSort(arr, beg, a);
        quickSort(arr, a +1, end);
    }
}

void merge(int arr[], int beg, int end, int mid){
    int n1 = mid-beg+1;
    int n2 = end-mid ;
    int left[n1], right[n2];
    for(int i =0;i<n1;i++){
        left[i] = arr[beg+i];
    }
    for(int i =0;i<n2;i++){
        right[i] = arr[mid+i+1];
    }
    int a =0, b=0, c=beg;
    while(a<n1 && b<n2){
        if(left[a] > right[b]){
            arr[c++] = right[b++];
        }else{
            arr[c++] = left[a++];
        }
    }
    while(a<n1){
        arr[c++] = left[a++];
    }
    while(b<n2){
        arr[c++] = right[b++];
    }
}

void iMerge(int arr[], int beg, int end){
    int i =1, l, h, mid;
    for(i=2;i<=end;i*=2){
        for(int j=0;j+i-1<=end;j = j+i){
            int low = j;
            int high = i+j-1;
            int mid = (low + high) / 2;
            merge(arr, low, high, mid);
        }
    }
    if(i/2 < end){
        merge(arr, 0, end, i/2-1);
    }
}

void rMerge(int arr[], int beg, int end){
    if(beg<end){
        int mid = (beg + end) / 2;
        rMerge(arr, beg, mid);
        rMerge(arr, mid+1, end);
        merge(arr, beg, end, mid);
    }
}
void countSort(int arr[], int n){
    int max = arr[0];
    for(int i =1;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    int arr1[max+1] = {0};
    for(int i =0;i<n;i++){
        arr1[arr[i]] +=1;
    }
    int i=0, j =0;
    while(i<=n){
        if(arr1[i]!=0){
            arr[j++] = i;
            arr1[i]--; 
        }else{
            i++;
        }
    }

}

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
        while(node1->next != nullptr){
            node1 = node1->next;
        }
        node2 = new Node;
        node2->data = data;
        node2->next = nullptr;
        node1->next = node2;
    }
    return start;
}
Node* Del(Node* start){
    Node* node1 = start;
    start = start->next;
    delete node1;
    return start;
}

void binSort(int arr[], int n){
    int max = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    Node** arr1 = new Node*[max+1];
    for(int i =0;i<=max;i++){
        arr1[i] = nullptr;
    }
    for(int i=0;i<n;i++){
        arr1[arr[i]] = iNsert(arr1[arr[i]], arr[i]);
    }
    int j =0, i=0;
    while(j<=max){
        if(arr1[j]!=nullptr){
            arr[i++] = arr1[j]->data;
            arr1[j] = Del(arr1[j]);
        }else{
            j++;
        }
    }

}

void redixSort(int arr[], int n){
    int max = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    int count = 0;
    while(max >0){
        max = max /10;
        count++;
    }
    Node** arr1 = new Node*[10];
    int num =10, div =1;
    for(int i =0;i<count;i++){
        for(int j = 0;j<10;j++){
            arr1[j] = nullptr;
        }
        for(int j = 0;j<n;j++){
            int a = arr[j];
            a = a/div;
            a = a %num;
            arr1[a] = iNsert(arr1[a], arr[j]);
        }
        int l = 0, m =0;
        while(l<=9){
            if(arr1[l] != nullptr){
                arr[m++] = arr1[l]->data;
                arr1[l] = Del(arr1[l]);
            }else{
                l++;
            }
        }
        div*=10;
       
    }
}

void shellSort(int arr[], int n){
    int mid = n/2;
    while(mid >0){
        int i = 0;
        while(i+mid < n){
            if(arr[i] > arr[i+mid]){
                swap(arr[i], arr[i+mid]);
                int l = i-mid;
                while(l >= 0 ){
                    if(arr[l]>arr[l+mid]){
                        swap(arr[l+mid], arr[l]);
                        l = l- mid;
                    }else{
                        break;
                    }
                }
            }
            i+=mid;
        }
        mid = mid / 2;
    }
}
string addBinary(string a, string b) {
    int i = a.size()-1;
    int j = b.size()-1;
    char arr[i+j+1];
    int n = i+j;
    int c = 0;
    while(i >=0 && j>=0){
        int x = a[i]-'0';
        int y = b[j] - '0';
        int sum = x + y + c;
        if(sum ==2){
            sum = 1;
            c = 1;
        }else{
            c = 0;
        }
        arr[n] = sum;
        i--;
        j--;
        n--;
    }
    while(i>=0){
        int x = a[i] -'0';
        int sum = x + c;
        if(sum ==2){
            sum = 1;
            c = 1;
        }else{
            c=0;
        }
        arr[n--] = sum;
        i--;
    }
    while(j>=0){
        int x = b[j] -'0';
        int sum = x + c;
        if(sum ==2){
            sum = 1;
            c = 1;
        }else{
            c=0;
        }
        arr[n--] = sum;
        j--;
    }
    return arr;
}
int main(){
    int arr[] = {21,2,14,1,0,3, 4, 16, 10,12};
    quickSort(arr, 0, 9);
    
    for(int a : arr){
        cout<<a<<" ";
    }
    cout<<endl;




    // aNode* root = nullptr;
    // root = rInsert(root, 10);
    // root = rInsert(root, 20);
    // root = rInsert(root, 30);
    // root = rInsert(root, 25);
    // root = rInsert(root, 28);
    // display(root);
    // root = rInsert(root, 27);
    // display(root);
    // root = rInsert(root, 5);
    // int arr[] = {0,10,20,30,25,5,40,35};
    
    // for(int i =2;i<=7;i++){
    //     Insert(arr, i);
    // }
    
    // for(int i =7;i>=1;i--){
    //     cout<<Delete(arr,i)<<" is deleted"<<endl;
    //     for(int a:arr){
    //         cout<<a<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // cout<<endl;


}