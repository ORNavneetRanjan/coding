#include <iostream>
#include <string>
using namespace std;

class Student {
    int id;
    string name;
public:
    Student (int id, string name) : id (id), name(name) {}

    void read(){
        cout<<"reading stuffs"<<endl;
    }
};

/* encapsulation is a pilar of oops which helps to keep important datas
 hidden from the user and only provide the access of needed variable , for the hidden variable it provide the funcnality
 like getter and setter methods to access the variable. 
 */