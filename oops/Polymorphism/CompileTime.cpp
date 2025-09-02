#include <iostream>
using namespace std;


// Function overloading
class Sum{
public:
    int add(int a, int b){
        return a + b;
    }

    double add(double a, double b){
        return a + b;
    }
};

// Operators overloading
class Complex{
private: 
    int real;
    int complex;

public:
    Complex (int real, int complex = 0): real(real), complex(complex) {};

    Complex operator+(Complex& c){
        return Complex(real + c.real, complex + c.complex);
    }

    //Prefix operator
    Complex& operator++(){
        ++real;
        ++complex;
        return *this;
    }

    //postfix operator
    Complex operator++(int){
        Complex c = *this;
        real++;
        return c;
    }

    void display(){
        cout<<real<< " "<<complex<<endl;
    }
};

int main(){
    Complex c(2, 5);
    c.display();

    cout<<"After prefix"<<endl;
    ++c;
    c.display();

    cout<<"After postfix"<<endl;
    c++;
    c.display();
}