//Abdulkadir Mirza --- C++ Program that uses Inheritance different specifiers
//Public, Private, Protected
#include<iostream>
using namespace std;

class person//Base Class
{
    public:
    int a1=1;
    void fun1(){
        cout << "Inside Public" << endl;
    }
    private:
    int a2=2;
    void fun2(){
        cout << "Inside Private" << endl;
    }
    protected:
    int a3=3;
    void fun3(){
        cout << "Inside Protected" << endl;
    }
};

class Doctor: public person//Derived class
{
    public:
    int b1;
    void func4(){
        cout << "Inside Derived Class" << a1 << endl;
    }
};
class Doctor1: private person//Derived class
{
    public:
    int b1;
    void func4(){
        //cout << "Inside Derived Class" << a2 << endl;
    }
};
class Doctor2: protected person//Derived class
{
    public:
    int b1;
    void func4(){
        cout << "Inside Derived Class" << a3 << endl;
    }
};

//MAIN
int main(){
    Doctor d1;
    Doctor1 d2;
    Doctor2 d3;
    //d1.fun1();
    //d2.fun2();
    //d3.fun3();
    d1.func4();
    //d2.func4();
    d3.func4();
    return 0;
}