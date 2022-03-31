//Abdulkadir Mirza --- C++ Program to demostrate copy function feature
//Copy function gets called everytime we pass or return an object of a class.
//By Default, implicit copy constructor is called which creates a shallow copy of object.
//When we define an explicit copy constructor, then a deep copy is created.
#include<iostream>
using namespace std;

//Class 
class A{
    private:
    int i=10;
    public:
    A(){
        cout << "Constructor" << endl << endl;
    }
    A(A &obj){
        cout << "Copy Constructor" << endl << endl;
    }
    void add(A obj){
        cout << "Add function" << endl << endl;
    }

    A add_ret(){
        A temp;
        cout << "Add_Return function" << endl << endl;
        return temp;
    }
};


//MAIN
int main(){
    A obj1,obj2;
    obj1.add(obj1);
    obj2=obj1.add_ret();
    return 0;
}