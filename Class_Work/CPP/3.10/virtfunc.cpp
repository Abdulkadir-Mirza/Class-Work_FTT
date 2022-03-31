//Abdulkadir Mirza --- C++ Virtual functions
#include<iostream>
using namespace std;


class Shape{
    protected:
    float x;
    public:
    void getdata(){cin >> x;}
    virtual float area() =0;
};

class Square: public Shape{
    public:
    float area(){
        return x*x;
    }
};

class Circle: public Shape{
    public:
    float area(){
        return 3.14*x*x;
    }
};

int main(){
    Square s;
    Circle c;
    cout << "\nEnter the length: ";
    s.getdata();
    cout << "\nArea of Square: " << s.area();
    cout << "\nEnter the radius of circle: ";
    c.getdata();
    cout << "\nArea of Circle: " << c.area();
    return 0;
}