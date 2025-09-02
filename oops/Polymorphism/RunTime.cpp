#include <iostream>
using namespace std;

class Vehicle{
public:
    virtual void run(){
        cout<<"The Vehicle is running"<<endl;
    }
};

class Car : public Vehicle {
public: 
    void run() override{
        cout<<"The Car is running"<<endl;
    }
};

class Bike : public Vehicle {
public: 
    void run() override {
        cout<<"The Bike is running"<<endl;
    }
};

int main(){
    Vehicle* bmw = new Car(), * honda = new Bike();
    bmw->run();
    honda->run();
}