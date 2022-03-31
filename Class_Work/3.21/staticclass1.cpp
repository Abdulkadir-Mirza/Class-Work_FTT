//Abdulkadir Mirza --- Templates in C++
//Acessing static varibales of a template class
#include<iostream>
using namespace std;

template<class T>
class Demo{
    public:
    inline static T a;
    Demo(T x){
    a=x;
    }
    void display(){
        cout << "A is: " << ++a << endl;
    }
};

int main(){
    Demo<int> a(5);
    a.display();
    a.display();
    Demo<double> b(11.5);
    b.display();
    b.display();
    return 0;
}