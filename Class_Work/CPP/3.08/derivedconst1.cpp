//Abdulkadir Mirza --- C++ Derived class Constructor
#include<iostream>
using namespace std;

class base{
    int x;
    public:
    base(){
        cout << "Base Default Constructor" << endl;
    }
    base(int i){
        cout << "Base Parameterized Constructor" << endl;
    }
    ~base(){
        cout << "Base Default Destructor" << endl;
    }
};

class derived : public base{
    int y;
    public:
    derived(){
        cout << "Derived Default Constructor" << endl;
    }
    derived(int i){
        cout << "Derived Parameterized Constructor" << endl;
    }
    ~derived(){
        cout << "Derived Default Destuctor" << endl;
    }
    
};

int main(){
    base b;
    derived d1;
    derived d2(10);

    return 0;
}
