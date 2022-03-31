//Abdulkadir Mirza --- Templates in C++
//Acessing static varibales of a template class
#include<iostream>
using namespace std;

template<class T>
class Demo{
    public:
    //Demo(T1 x){
    inline static T a=10;
    //}
    void display(){
        cout << "A is: " << ++a << endl;
    }
};

int main(){
    Demo<int> ob1;
    Demo<double> ob3;
    ob1.display();
    ob3.display();
    Demo<int> ob2;
    ob2.display();
    Demo<double> ob4;
    ob4.display();
    Demo<char> ob5;
    ob5.display();
    return 0;
}