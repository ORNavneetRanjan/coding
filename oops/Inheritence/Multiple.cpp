#include <iostream>
using namespace std;

class A {
private:
    int value;
public:
    A() : value(10) {}

    A(int value) : value(value) {}
    
    void setValue(int n){
        value = n;
    }

    void getValue(){
        cout<<"The value is "<<value<<endl;
    }
};

class B : virtual public A{

};

class C : virtual public A {};

class D : public B, public C {
public:
    void printValue(){
        getValue();
    }
};

int main(){
    D d;
    d.printValue();

    D *d1 = new D();
    d1->setValue(20);
    d1->printValue();
}