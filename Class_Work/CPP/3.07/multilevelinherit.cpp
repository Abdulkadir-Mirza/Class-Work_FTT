//Abdulkadir Mirza --- C++ Program that shows multilevel inheritance
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
    void intro(){
        cout << "I am a Doctor!!!" << endl;
    }
};

class Surgeon: public Doctor//Derived class
{
    public:
    void operation(){
        cout << "I am a Surgeon and do operations!!!" << endl;
    }
};




//MAIN
int main(){
    Surgeon s1;
    s1.set(6,80,40);
    s1.display();
    s1.intro();
    s1.operation();
    return 0;
}