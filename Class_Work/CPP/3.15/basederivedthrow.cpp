//Abdulkadir Mirza --- C++ Program that checks try and catck of derived class.
#include<iostream>
using namespace std;

class Base{};
class Derived : public Base{};

int main(){
    try{
        throw Derived();
    }
    catch(Derived d){
        cout << "Derived caught" << endl;
    }
    catch(Base b){
        cout << "Base caught" << endl;
    }
    
}