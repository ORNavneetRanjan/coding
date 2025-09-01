#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    int speed;

public:

    Vehicle(int speed) : speed(speed) {}
    
    void time(){
        cout<<"The current speed is" << speed<<endl;
    }
};

class Car : public Vehicle{
private:
    string brand;

public:
    Car(string brand, int speed) : Vehicle(speed), brand(brand) {}

    void price(){
        cout<<"The price of this Car is $100,000."<<endl;
    }

};

int main(){
    Car c("BMW", 100);
    c.time();
    c.price();

    return 0;
}