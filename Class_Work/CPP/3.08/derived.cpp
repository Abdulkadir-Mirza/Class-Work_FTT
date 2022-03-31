//Abdulkadir Mirza --- C++ Various access specifiers in derived class
// Private derived class will make all the member functions of the base class
//that were public in it to private; so we cannot access these public methods 
//from an object of privately derived class
//Error code
#include<iostream>
using namespace std;

class base{
    int i,j;
    public:
    void set(int a,int b){
        i=a;
        j=b;
    }
    void show(){
        cout << i << " , " << j << endl;
    }

};

class derived : private base{

    int k;
    public:
    derived(int x){ k=x; }
    void showk(){
        cout << k << endl;
    }
};

int main(){
    derived ob(3);
    ob.set(1,2);
    ob.show();
    return 0;
}