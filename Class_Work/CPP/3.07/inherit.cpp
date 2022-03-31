//Abdulkadir Mirza --- C++ Program that uses Inheritance
//We can accesss data members and functions of base class in the derived class
#include<iostream>
using namespace std;

class person//Base Class
{
    public:
    int h,w,age;
    void set(int a,int b,int c){
        h=a;
        w=b;
        age=c;
    }
    void display(){
        cout << "Height is:" << h << "\nWeight is:" << w << "\nAge is:" << age << endl << endl;
    }
};

class Doctor: public person//Derived class
{
    public:
    /*void set(int a,int b,int c){
        h=a;
        w=b;
        age=c;
    }*/
    /*void display(){
        cout <<  "This is Doctor!!\n" << "Height is:" << h << "\nWeight is:" << w << "\nAge is:" << age << endl;
    }*/
    void operation(){
        cout << "I am a Doctor and doing Operation!!!" << endl;
    }
};

//MAIN
int main(){
    person p1;
    p1.set(5,50,22);
    p1.display();
    Doctor p2;
    p2.set(6,70,35);
    p2.display();
    p2.operation();
    return 0;
}