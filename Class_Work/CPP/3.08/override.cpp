//Abdulkadir Mirza --- C++ function overriding
#include<iostream>
using namespace std;

class ABC{
    public:
    void display(){
        cout << "Parent class" << endl;
    }
};

class XYZ : public ABC{
    public:
    void display(){
        cout << "Child class" << endl;
    }
};

int main(){
    XYZ x;
    x.display();//method of class XYZ invokes, instead of class ABC
    x.ABC::display();//we can invoke method of parent class like this
    return 0;
}