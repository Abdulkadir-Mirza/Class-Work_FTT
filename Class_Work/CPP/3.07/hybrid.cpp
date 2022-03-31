//Abdulkadir Mirza --- C++ Program that shows hybrid inheritance
#include<iostream>
using namespace std;

class Demo{
    public:
    void display0(){
        cout << "Demo ; Main Class"<< endl;
    }


};

class Liquid : public Demo{
    public:
    void display1(){
        cout << "I am liquid" << endl;
    }
};

class Fuel : public Demo{
    public:
    void display2(){
        cout << "I am Fuel" << endl;
    }
};

class Petrol : public Liquid, public Fuel{
    public:
    void display3(){
        cout << "I am Petrol" << endl;
    }
};

int main(){
    Petrol p1;
    p1.display1();
    p1.display2();
    p1.display3();
    p1.display0();
    return 0;
}