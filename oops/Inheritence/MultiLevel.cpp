#include <iostream>
using namespace std;

class Vehicle {
protected:
    int speed ;
public: 
    Vehicle() : speed(40) {};

    Vehicle(int speed) : speed(speed) {};
    
    void setSpeed(int val){
        speed = val;
    }
};

class Car : public Vehicle {};

class BMW : public Car {
public:
    void printSpeed(){
        setSpeed(100);
        cout<<"This value of speed is " << speed <<endl;
    }
};

int main(){
    BMW *bike = new BMW();
    bike->printSpeed();

}