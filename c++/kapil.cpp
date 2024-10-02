// 1.	Enter a string and check for pallindrome

// #include<iostream>
// using namespace std;
// int main(){
//     int len;
//     cout<<"Length of the string : ";
//     cin>>len;
//     char s[len];
//     cout<<"Enter the string : "<<endl;
//     cin.getline(s, len);
//     bool n = false;
//     for(int i = 0;i<len -2;i++){
//         cout<<s[i]<<" "<<s[len - 2 - i];
//         if(s[i] == s[len - 2 - i]){
//             n = true;
//         }else{
//             n = false;
//             break;
//         }
//         cout<<endl;
//     }
//     cout<<n;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int len;
//     cout << "Length of the string : ";
//     cin >> len;
//     cin.ignore(); // Add this line to consume the newline character left in the input buffer

//     char s[len];
//     cout << "Enter the string : " << endl;
//     cin.getline(s, len);

//     bool n = true; // Initialize n to true
//     for (int i = 0; i < len / 2; i++) { // Iterate only up to the middle of the string
//         if (s[i] != s[len - 1 - i]) { // Compare characters from the start and end
//             n = false; // If characters don't match, set n to false and break
//             break;
//         }
//     }

//     if (n) {
//         cout << "The string is a palindrome." << endl;
//     } else {
//         cout << "The string is not a palindrome." << endl;
//     }

//     return 0;
// }

// 2.	Enter a string like (Bennett), output should be
// B
// Be
// Ben
// Benn
// ..
// ..
// Bennett
// 3.	Enter number and find factorial using Classes
// 4.	Create a class prime with 3 methods
// 		-	getdata()
// 		-	isPrime()	To check number is prime
// 		-	primeSeries()	To show prime numbers between 1 and N

// 5.	Enter record {Rollno, Name, Marks) of N students and show student with maximum marks
// #include<iostream>
// using namespace std;
// class nav{
//     int hours;
//     int min;
//     int sec;
//     public:
//     void getdata();
//     void display();
//     nav operator +(nav);
// };
// void nav::getdata(){
//     cout<<"Enter the hours, minutese and seconds seperated by a space : ";
//     cin>>hours>>min>>sec;
// }
// void nav::display(){
//     cout<<hours<<"h "<<min<<"m "<<sec<<"sec";
// }
// nav nav::operator+(nav n){
//     nav a;
//     a.hours = hours + n.hours;
//     a.min = min + n.min;
//     a.sec = sec + n.sec;
//     if(a.sec >= 60){
//         a.min += (a.sec / 60);
//         a.sec = a.sec % 60;
//     }
//     if(a.min >= 60){
//         a.hours += (a.min / 60);
//         a.min = a.min % 60;
//     }
// }
// int main(){
//     nav t1, t2, t3;
//     t1.getdata();
//     t2.getdata();
//     t3 = t1 + t2;
//     t3.display();
// }


//                                   operators overloading

// class length{
//     int feet;
//     int inches;
//     public:
//     void getdata();
//     void display();
//     length operator-(length);
//     int operator <= (length);
//     length operator ++();
//     length operator++(int);  
// };
// void length::getdata(){
    
//     cin>>feet>>inches;
// }
// void length::display(){
//     cout<<feet<<"feets "<<inches<<"inches\n";
// }
// length length::operator -(length L)
// {
//     length A;
//     A.feet=feet-L.feet;
//     A.inches =inches-L.inches;
//     if(A.inches<0)
//     {
//         A.feet--;
//         A.inches+=12;
//     }
//     return A;
// }
// int length::operator<=(length l){
//     if(l.feet > feet){
//         return 1;
//     }else if(l.feet == feet && l.inches>= inches){
//         return 1;
//     }else{
//         return 0;
//     }
// }
// length length::operator++(){
//     inches++;
//     if(inches >= 12){
//         feet+=(inches / 12);
//         inches = inches % 12;
//     }
//     length l1;
//     l1.feet = feet;
//     l1.inches = inches;
//     return l1;
// }
// length length::operator++(int a){
//     a = inches++;
//     if(a >= 12){
//         feet+=(a / 12);
//         a = a % 12;
//     }
//     length l1;
//     l1.feet = feet;
//     l1.inches = a;
//     return l1;
// }
// int main(){
//     length L1,L2,L3;
//     L1.getdata();
//     L2 = L1++;
//     L2.display();
//     L3 = ++L1;
//     L3.display();
//     L1.display();
    
// //      if(T1>T2)
// //     {
// //         cout<<"T1 is greater";
// //     }
// //     else
// //     cout<<"T2 is greater";

// //     return 0;

//     return 0;
// }
#include <iostream>
using namespace std;

// void ite(int arr[], int n, int p) {
//     int first = 0, last = n - 1, mid, pos = -1, count = 0; // Initialize variables

//     while (first <= last) { // Change the condition to <=
//         mid = (first + last) / 2;
//         if (arr[mid] == p) {
//             count++;
//             pos = mid;
//             break; // Add break statement once the element is found
//         } else if (arr[mid] > p) {
//             last = mid - 1;
//         } else {
//             first = mid + 1;
//         }
//         count++; // Increment count in all cases
//     }

//     if (pos != -1) {
//         cout << "Record found at position " << pos << endl;
//     } else {
//         cout << "Record not found" << endl;
//     }

//     cout << "Number of Iterations: " << count << endl;
// }

// int main() {
//     int n, a;
//     cout << "Enter Number of Students: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter Student IDs of " << n << " students" << endl;
//     for (int i = 0; i < n; i++) { // Fix the loop initialization
//         cin >> arr[i];
//     }
//     cout << "Enter Student ID that you want to search: ";
//     cin >> a;
//     ite(arr, n, a);

//     return 0; // Add return statement
// }
//                           Array as an Argument
// #include <iostream>
// using namespace std;
// void fun(int A[], int n){
//     for(int i =0;i<n;i++){
//         A[i]+=1;
//     }
// }
// int * fast(){
//     int *C;
//     C = new int[5];
//     for(int i =0;i<5;i++){
//         C[i] = 2 * i;
//     }
//     return C;
// }
//                             Structures as an argument
// struct Rectangle{
//     int length;
//     int breath;
// };
// void fun(struct Rectangle *r){
//     r->length = 10;
//     r->breath = 20;
// }
// struct Rectangle *fast(){
//     struct Rectangle *p;
//     p = new Rectangle;
//     p->length = 12;
//     p->breath = 13;
//     return p;
// }

template<class T>
class A{
    T a;
    T b;
    public:
    A(T, T);
    T sum();
    T sub();
};
template<class T>
A<T>::A(T a, T b){
    this->a = a;
    this->b = b;
}

template <class T>
T A<T>::sum(){
    return a + b;
}

template <class T>
T A<T>::sub(){
    return a - b;
}

// int main(){
    
//     A<char> a('A', 'B');
//     cout<<(int)a.sum()<<" "<<(int)a.sub();
    
//     // struct Rectangle r = {10, 5};
//     // fun(&r);
//     // cout<<r.length<<" "<<r.breath<<endl;

//     // struct Rectangle *p;
//     // p = fast();

//     // cout<<p->length<<" "<<p->breath<<endl;


//     // int A[] = {1, 2, 3, 4, 5};
    
//     // int n =5;
//     // fun(A, n);

//     // for(int i =0;i<n;i++){
//     //     cout<<A[i]<<endl;
//     // }
//     // int *B =  fast();
//     // for(int i =0;i<5;i++){
//     //     cout<<B[i]<<endl;
//     // }


// // }

// #include <iostream> 
// using namespace std;

// struct Node {
//     int data; 
//     Node* next; 
// };

// Node* InsertLast(Node* start, int data) {
//     if(start == NULL) { 
//         start = new Node; 
//         start->data = data; 
//         start->next = NULL; 
//     } else { 
//         Node* node1 = start;
//         while(node1->next != NULL) {
//             node1 = node1->next;
//         }
//         Node* node2 = new Node;
//         node2->data = data; 
//         node2->next = NULL; 
//         node1->next = node2; 
//     } 
//     return start; 
// }

// void Delete(Node*& start, int data) { 
//     if(start->data == data) { 
//         Node* node1 = start; 
//         start = start->next; 
//         delete node1; 
//     } else { 
//         Node* node1 = start; 
//         Node* node2 = start->next; 
//         while(node2 != NULL && node2->data != data) { 
//             node2 = node2->next; 
//             node1 = node1->next; 
//         } 
//         if(node2 != NULL) { 
//             node1->next = node2->next; 
//             delete node2; 
//         }
//     } 
// }

// int main() { 
//     int n, a; 
//     Node* start = NULL; 
//     start = InsertLast(start, 55); 
//     start = InsertLast(start, 66); 
//     start = InsertLast(start, 77); 
//     start = InsertLast(start, 88); 
//     start = InsertLast(start, 99); 
//     cin >> n; 
//     for(int i = 0; i < n; i++) { 
//         cin >> a; 
//         start = InsertLast(start, a); 
//     } 
//     Delete(start, 66); 
//     Delete(start, 99); 
//     while(start != NULL) { 
//         cout << start->data << " "; 
//         start = start->next; 
//     } 
//     return 0;
    
// }

// #include <iostream>
// using namespace std;
// struct Node{
//     Node* left;
//     int root;
//     Node* right;
// };

// Node* BSTinsert(Node* root, int data){
//     if(root == NULL){
//         root = new Node();
//         root->left = NULL;
//         root->right = NULL;
//         root->root = data;
//         cout<<data<<" is inserted into the BST"<<endl;
//     }else{
//         if(root->root > data){
//             root->left = BSTinsert(root->left, data);
//         }else if(root->root < data){
//             root->right = BSTinsert(root->right, data);
//         }
//     }
//     return root;
// }

// Node* BSTdelete(Node* start, int data){
//     if(start->root == data){
//         Node* node1 = start;
//         start = NULL;
//         delete node1;
//         return start;
//     }else if(start->root > data){
//         Node* node1 = start;
//         node1 = BSTdelete(node1->left, data);
        
//     }
// }
// void Inorder(Node* root){
//     if(root != NULL){
//         Inorder(root->left);
//         cout<<root->root<<" ";
//         Inorder(root->right);
//     }
// }


// int main(){
//     Node* root = NULL;
//     root = BSTinsert(root, 5);
//     root = BSTinsert(root, 3);
//     root = BSTinsert(root, 6);
//     root = BSTinsert(root, 2);
//     root = BSTinsert(root, 4);
//     Inorder(root);
// }
// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// // The coordinates of the contact will be stored in a structure containing the name and the number
// struct contact {
//     string name;
//     int number;
// };

// // The numbers contained in our phone book will be stored in this data structure
// struct Node { 
//     contact NewContact;
//     Node* Next;
// };

// /* The class below will handle:
//    - Adding or modifying a contact in the data structure with the addphoneBook function
//    - Deleting a contact if it is found in the structure with the supphoneBook function
//    - Displaying a requested contact if it is found in the structure with the showphoneBook function
// */
// class phoneBook
// {
// private:
//     int size_table;
//     int nameHashed;
// public:
//     int hashFunction(string);
//     void addphoneBook(Node*&, contact);
//     void supphoneBook(Node*&, string);
//     void showphoneBook(Node*&, string);
//     phoneBook(int);
//     ~phoneBook();
// };

// /*
// *********************************************************************************
// Function Name: hashFunction                                                  **
// *********************************************************************************
// Parameter Type: string                                                        **
// *********************************************************************************
// Description: The string taken as a parameter is converted to an integer using:  **
// *																			   **
// *																			   **
// *               ***************************************************           **
// *               **   H(C) = sum ((C[i] * pow(R,i)) % P ) % M   **           **
// *               ***************************************************           **
// *																			   **
// *																			   **
// *               where C[i] is the ASCII code of the i-th character of C,      **
// *               T is the number of characters in C, P = 1009,                 **
// *               R = 31, and M is the size of the hash table.                  **
// *********************************************************************************
// */

// int phoneBook::hashFunction(string contactName)
// {
//     int result;
//     int sum = 0;
//     int ASCII;

//     for (int i = 0; i < contactName.length(); i++)
//     {
//         ASCII = contactName[i];
//         sum += (ASCII * 31 * i) % 1009;
//     }
//     result = sum % size_table;
//     return result;
// }

// /*
// *********************************************************************************
// Function Name: addphoneBook                                               **
// *********************************************************************************
// Parameter Type: Node*&; contact                                            **
// *********************************************************************************
// Description: The Node is taken as a parameter by reference because it will be modified  **
// *            the contact taken as a parameter will be added to the contact list    **
// *********************************************************************************
// */
// void phoneBook::addphoneBook(Node*& List, contact New)
// {
//     nameHashed = hashFunction(New.name);
//     Node* Save = List[nameHashed].Next;

//     while (List[nameHashed].Next != NULL)
//     {
//         if (List[nameHashed].Next->NewContact.name == New.name)
//         {
//             List[nameHashed].Next->NewContact.number = New.number;
//             return;
//         }

//         List[nameHashed].Next = List[nameHashed].Next->Next;
//     }
//     Node* Newadd = new Node;
//     Newadd->NewContact = New;
//     Newadd->Next = Save;
//     List[nameHashed].Next = Newadd;
// }

// /*
// *********************************************************************************
// Function Name: supphoneBook                                               **
// *********************************************************************************
// Parameter Type: Node*&; string                                             **
// *********************************************************************************
// Description: The Node is taken as a parameter by reference because it will be modified  **
// *            the string taken as a parameter will be used to search for the corresponding contact *
// *            in the list and delete it                                             **
// *********************************************************************************
// */
// void phoneBook::supphoneBook(Node*& List, string name)
// {
//     nameHashed = hashFunction(name);

//     while (List[nameHashed].Next != NULL)
//     {
//         if (List[nameHashed].Next->NewContact.name == name)
//         {
//             Node* Old = List[nameHashed].Next;
//             List[nameHashed].Next = List[nameHashed].Next->Next;
//             delete Old;
//             return;
//         }
//         List[nameHashed].Next = List[nameHashed].Next->Next;
//     }
//     cout << "Not found" << endl;
// }

// /*
// *********************************************************************************
// Function Name: showphoneBook                                              **
// *********************************************************************************
// Parameter Type: Node*&; string                                             **
// *********************************************************************************
// Description: The Node is taken as a parameter by reference because it will be modified  **
// *            the string taken as a parameter will be used to search for the corresponding contact *
// *            in the list and display its number                                    **
// *********************************************************************************
// */

// void phoneBook::showphoneBook(Node*& List, string name)
// {
//     nameHashed = hashFunction(name);
//     Node* Show = List[nameHashed].Next;

//     while (Show != NULL)
//     {
//         if (Show->NewContact.name == name)
//         {
//             cout << Show->NewContact.number << endl;
//             return;
//         }
//         Show = Show->Next;
//     }

//     cout << "Not found" << endl;
// }

// // Constructor initializes the size of the table
// phoneBook::phoneBook(int size)
// {
//     size_table = size;
// }

// // Destructor
// phoneBook::~phoneBook()
// {
// }

// int main()
// {
//     ifstream myFile;

//     myFile.open("phone_book.txt");
//     if (myFile)
//     {
//         int size_table;
//         int number_of_requests;
//         char request;
//         contact myContact;

//         myFile >> size_table;
//         Node* Phone = new Node[size_table];
//         for (int i = 0; i < size_table; i++)
//         {
//             Phone[i].Next = NULL;
//         }

//         phoneBook PhoneContain(size_table);

//         myFile >> number_of_requests;

//         for (int i = 0; i < number_of_requests; i++)
//         {
//             myFile >> request;

//             switch (request)
//             {
//             case 'r':
//                 myFile >> myContact.name;
//                 PhoneContain.showphoneBook(Phone, myContact.name);
//                 break;
//             case 'a':
//                 myFile >> myContact.name;
//                 myFile >> myContact.number;
//                 PhoneContain.addphoneBook(Phone, myContact);
//                 break;
//             case 's':
//                 myFile >> myContact.name;
//                 PhoneContain.supphoneBook(Phone, myContact.name);
//                 break;
//             default:
//                 break;
//             }
//         }
//         delete[] Phone; // Deallocate memory
//     }
//     else
//     {
//         cerr << "Error: Unable to open file." << endl;
//     }

//     myFile.close();

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// // Structure definition for a Node in an AVL tree
// struct Node {
//     int val;
//     Node* left;
//     Node* right;
//     int height;
//     Node(int key) {
//         val = key;
//         left = right = NULL;
//         height = 1;
//     }
// };

// int Height(Node* node) {
//     if (node == NULL)
//         return 0;
//     return node->height;
// }

// int getBalance(Node* root) {
//     if (root == NULL)
//         return 0;
//     return Height(root->left) - Height(root->right);
// }

// Node* rightRotate(Node* root) {
//     Node* newRoot = root->left;
//     root->left = newRoot->right;
//     newRoot->right = root;
//     root->height = max(Height(root->left), Height(root->right)) + 1;
//     newRoot->height = max(Height(newRoot->left), Height(newRoot->right)) + 1;
//     return newRoot;
// }

// Node* leftRotate(Node* root) {
//     Node* newRoot = root->right;
//     root->right = newRoot->left;
//     newRoot->left = root;
//     root->height = max(Height(root->left), Height(root->right)) + 1;
//     newRoot->height = max(Height(newRoot->left), Height(newRoot->right)) + 1;
//     return newRoot;
// }

// Node* Insert(Node* root, int val, int& unbalancedNode) {
//     if (root == NULL)
//         return new Node(val);

//     if (val < root->val)
//         root->left = Insert(root->left, val, unbalancedNode);
//     else if (val > root->val)
//         root->right = Insert(root->right, val, unbalancedNode);
//     else
//         return root;

//     root->height = max(Height(root->left), Height(root->right)) + 1;

//     int balance = getBalance(root);

//     if (balance > 1 && val < root->left->val) {
//         unbalancedNode = root->val;
//         cout << unbalancedNode << endl;
//         return rightRotate(root);
//     }

//     if (balance < -1 && val > root->right->val) {
//         unbalancedNode = root->val;
//         cout << unbalancedNode << endl;
//         return leftRotate(root);
//     }

//     if (balance > 1 && val > root->left->val) {
//         unbalancedNode = root->val;
//         cout << unbalancedNode << endl;
//         root->left = leftRotate(root->left);
//         return rightRotate(root);
//     }

//     if (balance < -1 && val < root->right->val) {
//         unbalancedNode = root->val;
//         cout << unbalancedNode << endl;
//         root->right = rightRotate(root->right);
//         return leftRotate(root);
//     }

//     return root;
// }

// Node* minValueNode(Node* node) {
//     Node* current = node;
//     while (current->left != NULL)
//         current = current->left;
//     return current;
// }

// Node* Delete(Node* root, int val, int& unbalancedNode) {
//     if (root == NULL)
//         return root;

//     if (val < root->val)
//         root->left = Delete(root->left, val, unbalancedNode);
//     else if (val > root->val)
//         root->right = Delete(root->right, val, unbalancedNode);
//     else {
//         if (root->left == NULL || root->right == NULL) {
//             Node* temp = root->left ? root->left : root->right;

//             if (temp == NULL) {
//                 temp = root;
//                 root = NULL;
//             } else
//                 *root = *temp;

//             free(temp);
//         } else {
//             Node* temp = minValueNode(root->right);
//             root->val = temp->val;
//             root->right = Delete(root->right, temp->val, unbalancedNode);
//         }
//     }

//     if (root == NULL)
//         return root;

//     root->height = max(Height(root->left), Height(root->right)) + 1;

//     int balance = getBalance(root);

//     if (balance > 1 && getBalance(root->left) >= 0) {
//         unbalancedNode = root->val;
//         cout << unbalancedNode << endl;
//         return rightRotate(root);
//     }

//     if (balance < -1 && getBalance(root->right) <= 0) {
//         unbalancedNode = root->val;
//         cout << unbalancedNode << endl;
//         return leftRotate(root);
//     }

//     if (balance > 1 && getBalance(root->left) < 0) {
//         unbalancedNode = root->val;
//         cout << unbalancedNode << endl;
//         root->left = leftRotate(root->left);
//         return rightRotate(root);
//     }

//     if (balance < -1 && getBalance(root->right) > 0) {
//         unbalancedNode = root->val;
//         cout << unbalancedNode << endl;
//         root->right = rightRotate(root->right);
//         return leftRotate(root);
//     }

//     return root;
// }





// Node* Successor(Node* root) {
//     Node* current = root;
//     while (current->left != NULL)
//         current = current->left;
//     return current;
// }

// void preOrder(Node* root) {
//     if (root != NULL) {
//         cout << root->val << " ";
//         preOrder(root->left);
//         preOrder(root->right);
//     }
// }

// int main() {
//     Node* root = NULL;
//     int n, key, unbalancedNode = -1;
//     char ch;
//     cin >> n;
//     while (n--) {
//         cin >> ch >> key;
//         if (ch == 'i') {
//             root = Insert(root, key, unbalancedNode);
//         } else if (ch == 'd') {
//             root = Delete(root, key, unbalancedNode);
//         }
        
//     }

//     preOrder(root);

//     return 0;
// }
// #include <iostream>
// #include <vector>
// #include <cmath>
// #include <cstdlib>
// #include <fstream>

// using namespace std;

// // Function to calculate the Euclidean distance between two points
// double calculateDistance(const vector<double>& point1, const vector<double>& point2) {
//     double distance = 0.0;
//     for (size_t i = 0; i < point1.size(); ++i) {
//         distance += pow(point1[i] - point2[i], 2);
//     }
//     return sqrt(distance);
// }

// // Function to perform K-means clustering
// void kMeansClustering(vector<vector<double>>& data, vector<vector<double>>& centroids, int maxIterations) {
//     const size_t numDataPoints = data.size();
//     const size_t numFeatures = data[0].size();
//     const size_t k = centroids.size();

//     vector<int> clusterAssignments(numDataPoints, 0);

//     for (int iteration = 0; iteration < maxIterations; ++iteration) {
//         // Assign each data point to the nearest centroid
//         for (size_t i = 0; i < numDataPoints; ++i) {
//             double minDistance = calculateDistance(data[i], centroids[0]);
//             clusterAssignments[i] = 0;

//             for (size_t j = 1; j < k; ++j) {
//                 double distance = calculateDistance(data[i], centroids[j]);
//                 if (distance < minDistance) {
//                     minDistance = distance;
//                     clusterAssignments[i] = j;
//                 }
//             }
//         }

//         // Update centroids based on the assigned data points
//         vector<vector<double>> newCentroids(k, vector<double>(numFeatures, 0.0));
//         vector<int> clusterSizes(k, 0);

//         for (size_t i = 0; i < numDataPoints; ++i) {
//             int cluster = clusterAssignments[i];
//             for (size_t j = 0; j < numFeatures; ++j) {
//                 newCentroids[cluster][j] += data[i][j];
//             }
//             clusterSizes[cluster]++;
//         }

//         for (size_t i = 0; i < k; ++i) {
//             if (clusterSizes[i] > 0) {
//                 for (size_t j = 0; j < numFeatures; ++j) {
//                     centroids[i][j] = newCentroids[i][j] / clusterSizes[i];
//                 }
//             }
//         }
//     }
// }

// // Function to plot the data and centroids using gnuplot
// void plotData(const vector<vector<double>>& data, const vector<vector<double>>& centroids) {
//     ofstream dataFile("data.txt");
//     for (const auto& point : data) {
//         dataFile << point[0] << "\n";
//     }
//     dataFile.close();

//     ofstream centroidsFile("centroids.txt");
//     for (const auto& centroid : centroids) {
//         centroidsFile << centroid[0] << "\n";
//     }
//     centroidsFile.close();

//     // Plot using gnuplot
//     FILE* gnuplotPipe = popen("gnuplot -persistent", "w");
//     fprintf(gnuplotPipe, "plot 'data.txt' with points title 'Data', 'centroids.txt' with points title 'Centroids'\n");
//     fclose(gnuplotPipe);
// }

// int main() {
//     const size_t numDataPoints = 200;
//     const size_t numFeatures = 1;  // Assuming only one feature (phone number)
//     const size_t k = 2;            // Two clusters (normal and spam)

//     // Generate random phone numbers for demonstration purposes
//     vector<vector<double>> phoneNumbers(numDataPoints, vector<double>(numFeatures, 0.0));
//     for (size_t i = 0; i < numDataPoints; ++i) {
//         phoneNumbers[i][0] = rand() % 1000000000;  // Random 10-digit phone numbers
//     }

//     // Initialize centroids randomly
//     vector<vector<double>> centroids(k, vector<double>(numFeatures, 0.0));
//     for (size_t i = 0; i < k; ++i) {
//         centroids[i][0] = rand() % 1000000000;
//     }

//     // Perform K-means clustering
//     const int maxIterations = 100;
//     kMeansClustering(phoneNumbers, centroids, maxIterations);

//     // Plot the data and centroids
//     plotData(phoneNumbers, centroids);

//     // Take a phone number from the user for spam detection
//     cout << "Enter a phone number for spam detection: ";
//     double userPhoneNumber;
//     cin >> userPhoneNumber;

//     // Calculate the distance from the centroids
//     vector<double> userPoint = {userPhoneNumber};
//     double distanceToNormalCluster = calculateDistance(userPoint, centroids[0]);
//     double distanceToSpamCluster = calculateDistance(userPoint, centroids[1]);

//     // Detect spam based on the minimum distance
//     if (distanceToNormalCluster < distanceToSpamCluster) {
//         cout << "The phone number is normal.\n";
//     } else {
//         cout << "The phone number is spam.\n";
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
class Complex{
    int real;
    int complex;
    public:
    Complex(){

    }
    Complex(int real, int complex){
        this->real = real;
        this->complex = complex;
    }
    void Display();
    Complex operator+(Complex);
};
void Complex::Display(){
    cout<<real<<" + "<<complex<<"i"<<endl;
}
Complex Complex::operator+(Complex A){
    Complex B;
    B.real = A.real + real;
    B.complex = A.complex + complex;
    return B;
}

class Base{
    protected:
    int num;
    int n;
    public:
    Base(int a, int b){
        this->num = a;
        this->n = b;
    }
    int fact();
    int power();
};

int Base::fact(){
    int p =1;
    for(int i=1;i<=num;i++){
        p *= i;
    }
    return p;
}

int Base::power(){
    int r = 1;
    for(int i =1;i<n;i++){
        r += num * num;
    }
    return r;
}

class Derived : public Base{
    public:
    Derived(int a, int b):Base(a, b){}
    double Series(){
        double sum = 0;
        int n1 = num;
        for(int i = 1;i<=n1;i++){
            sum += power()/ fact();
            n--;
        }
        return sum;
    }
};

int main(){
    Complex A(1, 2);
    Complex B(2, 3);
    Complex C = A + B;
    C.Display();
    Derived D(5, 2);
    cout<<D.Series()<<endl;
}