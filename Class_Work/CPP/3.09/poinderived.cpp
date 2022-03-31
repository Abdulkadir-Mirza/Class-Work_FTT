//Abdulkadir Mirza --- C++ Pointers with object
#include<iostream>
using namespace std;

class base1{
    protected:
    int i;
    public:
    
    int getdata(){ cout << "Inside base1"; }
};

class base2 : public base1{
    public:
    int j;
    void display(){
        cout << "Inside derived" << endl;
    }
};

int main(){
    base1 b1;
    base1 *ptr;
    base2 b2;
    base2 *b;
    ptr=&b1;
    ptr->getdata();
    b=&b2;
    ((base1 *)b)->getdata();
    ptr=&b2;
    ptr->getdata();
    //ptr->display(); Error we cannot access
    ((base2 *)ptr)->display();
    return 0;
}