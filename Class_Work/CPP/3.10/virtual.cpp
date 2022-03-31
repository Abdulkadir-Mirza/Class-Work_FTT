//Abdulkadir Mirza --- C++ Virtual functions
//Virtual functions uses run time polymorphism to determine which method to choose
//when various objects of different classes in inheritance are accessed by pointers.
#include<iostream>
using namespace std;

class base{
    public:
    virtual void show(){ cout << "Base"; }
};

class derived1 : public base{
    public:
    void show(){
        cout << "\nDerv1\n";
    }
};

class derived2 : public base{
    public:
    /*
    void show(){
        cout << "Derv2\n";
    }*/
    void display(){
        cout << "Derived2\n";
    }
};

int main(){
    derived1 d1;
    derived2 d2;
    d2.show();
    base *ptr;
    //cout << sizeof(ptr);
    ptr=&d1;
    ptr->show();
    ptr=&d2;
    ptr->show();
    return 0;
}