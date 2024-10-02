// 1.	Enter a string and check for pallindrome
// 2.	Enter a string like (Bennett), output should be
// B
// Be
// Ben
// Benn
// ..
// ..
// Bennett

// #include <iostream>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter the string:"<<endl;
//     cin>>str;
//     for(int i =0;i<str.length();i++){
//         for(int j =0;j<=i;j++){
//             cout<<str[j];
//         }
//         cout<<endl;
//     }
// }

// 3.	Enter number and find factorial using Classes

// #include<iostream>
// using namespace std;
// class first{
//     int n;
//     public:
//     void getData();
//     void display();
//     int fact(){
//         int pro =1;
//         for(int a =1;a<=n;a++){
//             pro *= a;
//         }
//         return pro;
//     }
// };
// void first::getData(){
//     cout<<"Enter a positive number: ";
//     cin>>n;
// }
// void first::display(){
//     cout<<"The factorial of the number "<<n<<" is "<<fact();
// }

// int main(){
//     first f;
//     f.getData();
//     f.display();

// }

// 4.	Create a class prime with 3 methods
// 		-	getdata()
// 		-	isPrime()	To check number is prime
// 		-	primeSeries()	To show prime numbers between 1 and N

// #include<iostream>
// using namespace std;
// class prime{
//     int n;
//     public:
//     void getData();
//     bool isPrime(int);
//     void primeSeries();
// };
// void prime::getData(){
//     cout<<"Enter any natural number : ";
//     cin>>n;
// }
// bool prime::isPrime(int k){
//     if(k == 1){
//         return false;
//     }else{
//         bool f = false;
//         for(int i=2;i<k;i++){
//             if(k % i == 0){
//                 return true;
//             }
//         }
//         return f;
//     }
// }
// void prime::primeSeries(){
//     cout<<"The Prime series is: "<<endl;
//     for(int i=1;i<=n;i++){
//         if(!isPrime(i)){
//             cout<<i<<" ";
//         }
//     }
// }

// int main(){
//     prime p;
//     p.getData();
//     p.primeSeries();
    
// }

// 5.	Enter record {Rollno, Name, Marks) of N students and show student with maximum marks

// #include<iostream>
// using namespace std;
// class record{
//     int roll;
//     string name;
//     int marks;
//     public:
//     record(int, string, int);
//     int getMarks();

// };
// record::record(int a,string s, int b){
//     roll = a;
//     name = s;
//     marks = b;
// }
// int main(){
//     record r1(1, "Navneet", 90);
//     record r2(2, "Ranjan", 80);
//     record r3(3, "Kumar", 85);
// }

// Problems

// • Define a class Rational with

// ⚫ two data members: num and deno

// ⚫ getData() and Display()

// .Sum(), Sub(), Mult, Div()

// #include<iostream>
// using namespace std;
// class Rational{
//     int numirator;
//     int denomenator;
//     public:
//     void getData();
//     void Display();
//     Rational Sum(Rational, Rational);
//     Rational Sub(Rational, Rational);
//     Rational Mult(Rational, Rational);
//     Rational Div(Rational, Rational);
// };
// void Rational::getData(){
//     cin>>numirator>>denomenator;
// }
// void Rational::Display(){
//     cout<<"numerator = "<<numirator<<" denomenator = "<<denomenator<<endl;
// }
// Rational Rational::Sum(Rational r1, Rational r2){
//     int n = r1.numirator * r2.denomenator + r2.numirator * r1.denomenator;
//     int r = r1.denomenator * r2.denomenator;
//     int p = 1;
//     for(int i =1;i<=abs(n);i++){
//         if(n % i == 0 && r % i == 0){
//             p = i;
//         }
//     }
//     n = n / p;
//     r = r / p;
//     Rational r3;
//     r3.numirator = n;
//     r3.denomenator = r;
//     return r3;
// }
// Rational Rational::Sub(Rational r1, Rational r2){
//     int n = r1.numirator * r2.denomenator - r2.numirator * r1.denomenator;
//     int r = r1.denomenator * r2.denomenator;
//     int p = 1;
//     for(int i =1;i<=abs(n);i++){
//         if(n % i == 0 && r % i == 0){
//             p = i;
//         }
//     }
//     n = n / p;
//     r = r / p;
//     Rational r3;
//     r3.numirator = n;
//     r3.denomenator = r;
//     return r3;
// }
// Rational Rational::Mult(Rational r1, Rational r2){
//     int n = r1.numirator * r2.numirator;
//     int r = r1.denomenator * r2.denomenator;
//     int p = 1;
//     for(int i =1;i<=abs(n);i++){
//         if(n % i == 0 && r % i == 0){
//             p = i;
//         }
//     }
//     n = n / p;
//     r = r / p;
//     Rational r3;
//     r3.numirator = n;
//     r3.denomenator = r;
//     return r3;
// }
// Rational Rational::Div(Rational r1, Rational r2){
//     int n = r1.numirator * r2.denomenator ;
//     int r = r1.denomenator * r2.numirator;
//     int p = 1;
//     for(int i =1;i<=abs(n);i++){
//         if(n % i == 0 && r % i == 0){
//             p = i;
//         }
//     }
//     n = n / p;
//     r = r / p;
//     Rational r3;
//     r3.numirator = n;
//     r3.denomenator = r;
//     return r3;
// }
// int main(){
//     Rational r1, r2, r3;
//     r1.getData();
//     r2.getData();
//     r3 = r3.Sum(r1, r2);
//     r3.Display();
//     r3 = r3.Sub(r1,r2);
//     r3.Display();
//     r3 = r3.Mult(r1,r2);
//     r3.Display();
//     r3 = r3.Div(r1,r2);
//     r3.Display();
// }


// ⚫ Define a class Time

// ⚫ 3 data members: hr, min, sec

// ⚫ getData() and Display()

// .Add(), Sub()

class Time{
    int hr, min, sec;
    
};


// • Define class Length

// • 2 Data Members: feet, Inches

// ⚫ getData() and Display()

// Add(), Sub()

// #include<iostream>  
// using namespace std;
// class Circle{
// public:
// double radius = 2.5;
// float compute_area(){
//     return 3.14 * radius * radius;}
// };

// int main(){
//     Circle obj;
//     cout << "Radius=:"<< obj.radius << endl;
//     cout<<"Area :"<<obj.compute_area();
//     return 0;
// };

// #include<iostream>
// using namespace std;
// int fact(int *n){
//     if(*n ==0 ){
//         return 1;
//     }
//     int pro = 1;
//     for(int i=1;i<=*n;i++){
//         pro *= i;
//     }
//     return pro;
// }

#include <iostream>
using namespace std;

// Function to assign precedence values to operators
int setExp(char c){
    if(c == '^'){
        return 3;
    } else if(c == '*' || c == '/'){
        return 2;
    } else{
        return 1;
    }
}

// Function to convert infix expression to postfix
void infixToPostfix(char* infix, char* postfix, char* stack){
    int i, p = 0, top = -1;
    for(i = 0; infix[i]; i++){
        if(infix[i] == '('){
            top += 1;
            stack[top] = infix[i];
        } else if(infix[i] == ')'){
            while(stack[top] != '('){
                postfix[p] = stack[top];
                top--;
                p++;
            }
            top--;
        } else if(infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/'){
            while(setExp(stack[top]) >= setExp(infix[i])){
                postfix[p] = stack[top];
                top--;
                p++;
            }
            top++;
            stack[top] = infix[i];
        } else{
            postfix[p] = infix[i];
            p++;
        }
    }
    postfix[p] = '\0';
    cout << postfix;
}

// int main(){
//     char infix[20], postfix[20], stack[20];
//     cin.getline(infix, 20);
//     infixToPostfix(infix, postfix,stack);
// }
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = "home";
  
  //add code below this line
  int i = my_string.size();
  int j =0;
  while(j<i){
    char c = my_string[j];
    my_string[j] = my_string[j+1];
    my_string[j+1] = c;
    j+=2;
  }
  cout<<my_string<<endl;
  //add code above this line
  
  return 0;
  
}