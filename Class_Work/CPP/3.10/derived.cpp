//Abdulkadir Mirza --- C++ Pointers with derived class
#include<iostream>
using namespace std;

class base{
    public:
    int b=5;
    void showb(){ cout << "\nb=" << b; }
};

class derived : public base{
    public:
    int d=10;
    void show(){
        cout << "\nb=" << b << "\nd=" << d;
    }
};

int main(){
    base b1;
    derived d1;
    base *bptr;
    bptr=&b1;
    bptr->b=100;
    bptr->showb();

    bptr=&d1;
    bptr->b=200;
    bptr->showb();

    derived *dptr;
    dptr=&d1;
    dptr->d=300;
    dptr->show();
    dptr->showb();
    return 0;
}